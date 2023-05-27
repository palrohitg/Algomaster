## Google Calender Design: 
- User can book an events 
  1. Book events 
  2. Read events 
  3. Update events 
  4. Delete events 
    
    Event Struct: 
        - Id - String 
        - Start Time 
        - End  Time 
        - Recurrency_StartTime : When the event is going to start from the endtime. 
        - Recurrency_Frequency - Today, Weekly , Monthly , First Sunday of the Month 
        - Recurrency_EndTime 
        - Description 
        - Guest_List - List<User>
        - Creator - User 

    User : 
     id 
     list<Event>
     Name 

    Operations:
    - BookEvent()
    - CancelEvent()
    - UpdateEvent()
    - GetEvent()
    