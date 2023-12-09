import json
import sqlite3

# Read data from JSON file
with open('data.json', 'r') as file:
    data = json.load(file)

# Connect to SQLite database
conn = sqlite3.connect('example.db')
cursor = conn.cursor()

# Create a table in the SQLite database (if it doesn't exist)
cursor.execute('''
    CREATE TABLE IF NOT EXISTS records (
        id INTEGER PRIMARY KEY,
        name TEXT,
        age INTEGER
    )
''')

# Insert data from the JSON file into the SQLite database
for record in data:
    cursor.execute('''
        INSERT INTO records (name, age)
        VALUES (?, ?)
    ''', (record['name'], record['age']))

# Commit changes and close the connection
conn.commit()
conn.close()
