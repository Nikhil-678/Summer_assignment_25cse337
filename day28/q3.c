#include <stdio.h>
#include <string.h>
struct Ticket
{
    int ticketNo;
    char name[50];
    int seats;
};
struct Ticket t;
int booked = 0;
void bookTicket()
{
    if (booked == 1)
    {
        printf("\nTicket already booked!\n");
        return;
    }
    printf("\nEnter Ticket Number: ");
    scanf("%d", &t.ticketNo);
    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", t.name);
    printf("Enter Number of Seats: ");
    scanf("%d", &t.seats);
    booked = 1;
    printf("\nTicket Booked Successfully!\n");
}
void cancelTicket()
{
    if (booked == 0)
    {
        printf("\nNo Ticket Found!\n");
    }
    else
    {
        booked = 0;
        printf("\nTicket Cancelled Successfully!\n");
    }
}
void displayTicket()
{
    if (booked == 0)
    {
        printf("\nNo Ticket Booked!\n");
    }
    else
    {
        printf("\n------ Ticket Details ------\n");
        printf("Ticket Number : %d\n", t.ticketNo);
        printf("Passenger Name: %s\n", t.name);
        printf("Seats         : %d\n", t.seats);
    }
}
int main()
{
    int choice;
    do
    {
        printf("\n===== Ticket Booking System =====");
        printf("\n1. Book Ticket");
        printf("\n2. Cancel Ticket");
        printf("\n3. Display Ticket");
        printf("\n4. Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                bookTicket();
                break;
            case 2:
                cancelTicket();
                break;
            case 3:
                displayTicket();
                break;
            case 4:
                printf("\nThank You!\n");
                break;
            default:
                printf("\nInvalid Choice!\n");
        }
    } while(choice != 4);
    return 0;
}