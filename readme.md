# Airline Reservation System in C Language

## Project Specifications
- User Login
- Seat Reservation
- Allocation of Ticket Number
- Flight Status
- Flight Details

## Problem Analysis
- Allotment of Seats: We had to allot the seats in a certain way, that the passenger could choose his seat between normal and window seats, and as the passengers book their seats the availability of seats decreases until the plane is fully occupied. The seats were further subdivided into 2 classes, Business and Economy. We solved this problem using 3-D Arrays.
- The random function was generating the same number every time we ran the program.
- We were randomly allocating the positions of the seat plan, once the passenger booked the seat for that particular time period the seat got occupied but due to the usage of random function the seat plan got updated for every passenger.
- Flight delay could not be catered as this is not an online program and live changes could not be made by the airline.
- Flight Reservation: We displayed the Schedule through file, and asked the user to input data and stored it in the struct variable and wrote the details in the reservation file. The problem we were facing was we couldn’t compare the flight no(input by the user) with the schedule.txt file, hence we had to store it separately.

## Solution Design
### Feature
- Struct: Passenger ID, Flight Information
- Filing: Display of Schedule, Login Information, Reservations
- Arrays: Allotment, Book Passenger Seat
- Nested Switch Cases: To provide the user with options
- Functions: Reservation, New User, Existing User, Flight Details, Seat Allotment
