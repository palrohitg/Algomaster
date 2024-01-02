from fastapi import FastAPI, HTTPException, Depends
from pydantic import BaseModel, Field
from typing import Optional
import sqlite3

""" 
Maintain Find the Github Find the for the FASTAPI.
https://github.com/vnurhaqiqi/fastapi-sqlite/blob/master/sql_app/main.py
https://github.com/wpcodevo/fastapi_sqlalchemy/blob/master/app/schemas.py
"""

app = FastAPI()
# For making New connection.
# Function to create SQLite connection
def get_db():
    conn = sqlite3.connect('todo.db')
    cursor = conn.cursor()
    cursor.execute('''
        CREATE TABLE IF NOT EXISTS todos(
            id INTEGER PRIMARY KEY AUTOINCREMENT, 
            title TEXT, 
            description TEXT, 
            completed BOOLEAN
        )
    ''')  
    conn.row_factory = sqlite3.Row
    return conn

#todo: Write the code for the application
# Pydantic model for Todo item
class Todo(BaseModel):
    title: Optional[str] = Field(None, description="Who sends the error message.")
    description: str
    completed: bool

# Endpoint to create a new Todo
@app.post("/todos/")
def create_todo(todo: Todo, db: sqlite3.Connection = Depends(get_db)): 
    print("testing here")
    try:
        cursor = db.cursor()
        cursor.execute('''
                INSERT INTO todos (description, completed)
                VALUES (?, ?)
        ''', (todo.description, todo.completed))
        db.commit()     
        return {"message": "Todo created successfully"}
    except sqlite3.Error as e:
        raise HTTPException(status_code=500, detail=f"Database error: {str(e)}")

# Endpoint to get all Todos
@app.get("/todos/")
def get_todos(db: sqlite3.Connection = Depends(get_db)): 
    try:
        cursor = db.cursor()
        cursor.execute('SELECT id, title, description, completed FROM todos')
        todos = cursor.fetchall()
        return {"todos": todos}
    except sqlite3.Error as e:
        raise HTTPException(status_code=500, detail=f"Database error: {str(e)}")

# ... (other endpoints remain the same)
# ... (other)
# ... (other)