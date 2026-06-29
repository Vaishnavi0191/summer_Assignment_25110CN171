#include <stdio.h>
struct Ticket
{
    int ticketNo;
    char name[50];
    int seats;
};
int main()
{
    struct Ticket t;
    int choice;
    int booked = 0;
    do
    {
        printf("\n TICKET BOOKING SYSTEM \n");
        printf("1. Book Ticket\n");
        printf("2. View Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                if(booked == 1)
                {
                    printf("Ticket already booked!\n");
                }
                else
                {
                    printf("Enter Ticket Number: ");
                    scanf("%d", &t.ticketNo);

                    printf("Enter Passenger Name: ");
                    scanf("%s", t.name);

                    printf("Enter Number of Seats: ");
                    scanf("%d", &t.seats);

                    booked = 1;

                    printf("Ticket booked successfully!\n");
                }
                break;
            case 2:
                if(booked == 0)
                {
                    printf("No ticket booked.\n");
                }
                else
                {
                    printf("\n----- TICKET DETAILS -----\n");
                    printf("Ticket Number : %d\n", t.ticketNo);
                    printf("Passenger Name: %s\n", t.name);
                    printf("Seats Booked  : %d\n", t.seats);
                }
                break;
            case 3:
                if(booked == 0)
                {
                    printf("No ticket to cancel.\n");
                }
                else
                {
                    booked = 0;
                    printf("Ticket cancelled successfully!\n");
                }
                break;
            case 4:
                printf("Thank you for using the Ticket Booking System!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 4);
    return 0;
}