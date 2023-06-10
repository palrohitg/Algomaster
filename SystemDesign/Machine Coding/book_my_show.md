1. Only show the Upcoming Moves with currrent datetime in BookMyShow 
2. If seats are reserveed, the Users has 5 minutes  to pay for the reservation, Else the tickets will be marked as unreserved. 


## How to Keep Track of the active reservation which haven't booked yet.
- ActiveReservationService. 
- Waiting User Service. 


## Concurrency: 
- How to Handle No two users are able to book same seat ? 
- someone selects a seat, you create a new reservation, thus showing other customers the seat as taken. A second reservation for the same seat will be declined - the DB update or insert will fail. If the customer confirms/pays for the reservation, you transition it to a booking. In a periodic batch job you delete all reservations older than 15 mins (or whatever time you give your customers).
- 