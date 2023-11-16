import json
# import time_machine
import datetime

# Function to calculate total time spent in meetings per month
def total_time_per_month(events):
    month_totals = {}

    for event in events['items']:
        start_time = datetime.datetime.fromisoformat(event['start']['dateTime'])
        end_time = datetime.datetime.fromisoformat(event['end']['dateTime'])
        duration = end_time - start_time

        month_key = (start_time.year, start_time.month)
        if month_key not in month_totals:
            month_totals[month_key] = duration
        else:
            month_totals[month_key] += duration

    return month_totals

# Function to find the busiest and relaxed week
def busiest_and_relaxed_week(events):
    week_counts = {}

    for event in events['items']:
        start_time = datetime.datetime.fromisoformat(event['start']['dateTime'])
        week_number = start_time.isocalendar()[1]

        if week_number not in week_counts:
            week_counts[week_number] = 1
        else:
            week_counts[week_number] += 1

    busiest_week = max(week_counts, key=week_counts.get)
    relaxed_week = min(week_counts, key=week_counts.get)

    return busiest_week, relaxed_week

# Function to calculate weekly averages
def weekly_averages(events):
    week_meeting_counts = {}
    week_meeting_durations = {}

    for event in events['items']:
        start_time = datetime.datetime.fromisoformat(event['start']['dateTime'])
        end_time = datetime.datetime.fromisoformat(event['end']['dateTime'])
        duration = end_time - start_time
        week_number = start_time.isocalendar()[1]

        if week_number not in week_meeting_counts:
            week_meeting_counts[week_number] = 1
            week_meeting_durations[week_number] = duration
        else:
            week_meeting_counts[week_number] += 1
            week_meeting_durations[week_number] += duration

    total_weeks = len(week_meeting_counts)
    average_meetings_per_week = sum(week_meeting_counts.values()) / total_weeks
    average_duration_per_week = sum(week_meeting_durations.values(), datetime.timedelta()) / total_weeks

    return average_meetings_per_week, average_duration_per_week

# Function to find top 3 persons with whom you have meetings 

def filter_event_based_on_user(events, user_email):  
    items_list = []
    status = 0  
    status_two = 0 
    for event in events["items"]: 
        if event.get("organizer").get("email") == user_email:  
            status_two = 1
            
        if event.get("attendees"):
            attendees = event['attendees']
            for attendee in attendees:
                email = attendee['email']
                if email == user_email: 
                    status = 1 
        
        if status or status_two: 
            items_list.append(event) 
    
    return {'items': items_list}
    



def top_3_persons(events, user_email): 
    events = filter_event_based_on_user(events, user_email)
    attendees_counts = {}
    try:  
        for event in events['items']:  
            if event.get("attendees"):
                    attendees = event['attendees']
                    for attendee in attendees:
                        email = attendee['email']
                        if email != user_email:
                            if email not in attendees_counts:
                                attendees_counts[email] = 1
                            else:
                                attendees_counts[email] += 1                             
        print(attendees_counts)
        sorted_attendees = sorted(attendees_counts.items(), key=lambda x: x[1], reverse=True)
        top_3 = sorted_attendees[:3] 
    except Exception as e: 
        print(e)

    return top_3


def time_spent_in_interviews(events):
    interview_duration = datetime.timedelta()

    for event in events['items']:
        if "interview" in event['summary'].lower():  # Check if the event is related to interviews
            print("testing here vikas")
            start_time = datetime.datetime.fromisoformat(event['start']['dateTime'])
            end_time = datetime.datetime.fromisoformat(event['end']['dateTime'])
            interview_duration += end_time - start_time

    return interview_duration

# Function to filter out events with eventType=="outOfOffice"
def filter_out_of_office(events):
    filtered_events = [event for event in events['items'] if event.get('eventType') != 'outOfOffice']
    return {'items': filtered_events}

# @time_machine.travel("2022-04-01 00:00 +0000")
def process_calendar_events(file_name="event.json"):
    with open(file_name, 'r') as f:
        events = json.load(f)

    filtered_events = filter_out_of_office(events)

    # 1. Total time spent in meetings per month for the last 3 months
    month_totals = total_time_per_month(filtered_events)
    print("Total time spent in meetings per month:", month_totals)

    # 2. Busiest week / relaxed week
    busiest, relaxed = busiest_and_relaxed_week(filtered_events)
    print("Busiest week:", busiest)
    print("Relaxed week:", relaxed)

    # 3. Weekly Averages for last 3 months
    avg_meetings, avg_duration = weekly_averages(filtered_events)
    print("Average number of meetings per week:", avg_meetings)
    print("Average time spent every week in meetings:", avg_duration)

    # 4. Top 3 persons with whom you have meetings
    top_persons = top_3_persons(filtered_events, "devendra@avoma.app")
    print("Top 3 persons with whom you have meetings:", top_persons)
    
     # 5. Time spent in recruiting/conducting interviews
    interview_duration = time_spent_in_interviews(filtered_events)
    print("Time spent in recruiting/conducting interviews:", interview_duration)

def main():
    process_calendar_events()

if __name__ == '__main__':
    main()
