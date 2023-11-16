import json
import time_machine
import datetime

# Calculate stats on calendar events.
# Events are in the events.json file and are taken from Google Calendar API
# https://developers.google.com/calendar/api/v3/reference/events#resource
'''
Stats to print - at least 3
1. Total time spent in meetings per month for the last 3 months
2. Busiest week / relaxed week - Which week had the highest number of meetings/least number of meetings -- based on week number
3. Weekly Averages - for last 3 months
   3.1 Average number of meetings per week
   3.2 Average time spent every week in meetings
4. Top 3 persons with whom you (devendra@avoma.app) have meetings
  - w.r.t you being an organizer or an attendee
  - based on the counts
  - if there are more than 1 person tied for any of the top-3 positions then show all of them at that particular position

Good to Have
5. Time spent in Recruiting/Conducting interviews 

# The test file has data for 3 months from Jan 2022 to March 2022
"start", "end" are the keys which denote the meeting start/end times
# IGNORE events with eventType=="outOfOffice"
'''



@time_machine.travel("2022-04-01 00:00 +0000")
def process_calendar_events(file_name="event.json"):
    f = open("events.json")
    events = json.load(f)
    print("Event info")
    print(events['items'][0]["start"]) 
    
    
    now = datetime.datetime.now()
    print(now, " type(now):", type(now))


def main():
    process_calendar_events()


if __name__ == '__main__':
    main()


