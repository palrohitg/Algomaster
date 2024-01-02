"""
    UVICORN(Async Server Gateway Interfaces) that handles the
    requests and server to the fastapi from the web-server and the fast
    api backend services   
    uvicorn fast:app --reload 
    fast --> filename is used to run the server here 
""" 

from fastapi import FastAPI, HTTPException 
from pydantic import BaseModel  

import sqlite3  

app = FastAPI() 



# Connection with the SQL Databases 
conn = sqlite3.connect("todo.db")  # this is used to execute the query we have in the systems
cursor = conn.cursor() 
cursor.execute('''
    CREATE TABLE IF NOT EXISTS todos(
        id INTEGER PRIMARY KEY AUTOINCREMENT, 
        title TEXT, 
        description TEXT, 
        completed BOOLEAN
    )
''')  


class Todo(BaseModel):
    title: str 
    description: str
    completed: bool 
        
    
@app.post("/todos/")
def create_todo(todo: Todo):
    cursor.execute('''
        INSERT INTO todos(title, description, completed)
        VALUES(?, ?, ?)''',(todo.title, todo.description, todo.completed))
    conn.commit() 
    return {"message" : "todo created successfully"}
    