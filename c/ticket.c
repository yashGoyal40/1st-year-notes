#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 5
#define MAX_TICKETS 10

struct Movie {
    char title[50];
    char director[50];
    char genre[50];
    int year;
    int rating;
};

struct Ticket {
    char name[50];
    int movieIndex;
    int seatNumber;
    float price;
};

struct User {
    char name[50];
    char email[50];
    char password[50];
    int numTickets;
    struct Ticket tickets[MAX_TICKETS];
};

struct Movie movies[MAX_MOVIES];
int numMovies = 0;
struct User currentUser;

void displayMovies() {
    printf("Current Movies:\n");
    for (int i = 0; i < numMovies; i++) {
        printf("%d. %s (%d)\n", i+1, movies[i].title, movies[i].year);
        printf("    Director: %s\n", movies[i].director);
        printf("    Genre: %s\n", movies[i].genre);
        printf("    Rating: %d/10\n\n", movies[i].rating);
    }
}

void registerUser() {
    printf("Registration:\n");
    printf("Enter your name: ");
    scanf("%s", currentUser.name);
    printf("Enter your email: ");
    scanf("%s", currentUser.email);
    printf("Enter your password: ");
    scanf("%s", currentUser.password);
    currentUser.numTickets = 0;
    printf("Registration successful!\n\n");
}

void bookTicket() {
    printf("Ticket Booking:\n");
    printf("Enter the name of the movie you want to watch: ");
    char movieTitle[50];
    scanf("%s", movieTitle);
    int movieIndex = -1;
    for (int i = 0; i < numMovies; i++) {
        if (strcmp(movies[i].title, movieTitle) == 0) {
            movieIndex = i;
            break;
        }
    }
    if (movieIndex == -1) {
        printf("Sorry, that movie is not playing.\n\n");
        return;
    }
    printf("Enter the number of tickets you want to book: ");
    int numTickets;
    scanf("%d", &numTickets);
    if (currentUser.numTickets + numTickets > MAX_TICKETS) {
        printf("Sorry, you can only book up to %d tickets.\n\n", MAX_TICKETS);
        return;
    }
    for (int i = 0; i < numTickets; i++) {
        struct Ticket ticket;
        ticket.movieIndex = movieIndex;
        ticket.seatNumber = currentUser.numTickets + i + 1;
        ticket.price = 10.0;
        printf("Enter the name of the person using ticket #%d: ", ticket.seatNumber);
        scanf("%s", ticket.name);
        currentUser.tickets[currentUser.numTickets + i] = ticket;
    }
    currentUser.numTickets += numTickets;
    printf("Ticket booking successful!\n\n");
}

void cancelTicket() {
    printf("Cancel Ticket:\n");
    printf("Enter the seat number of the ticket you want to cancel: ");
    int seatNumber;
    scanf("%d", &seatNumber);
    int ticketIndex = -1;
    for (int i = 0; i < currentUser.numTickets; i++) {
        if (currentUser.tickets[i].seatNumber == seatNumber) {
            ticketIndex = i;
            break;
        }
    }
    if (ticketIndex == -1) {
        printf("Sorry, that ticket is not valid.\n\n");
return;
}
struct Ticket cancelledTicket = currentUser.tickets[ticketIndex];
for (int i = ticketIndex; i < currentUser.numTickets-1; i++) {
currentUser.tickets[i] = currentUser.tickets[i+1];
}
currentUser.numTickets--;
printf("Ticket cancelled successfully!\n");
printf("Refund amount: $%.2f\n\n", cancelledTicket.price);
}

void displayPaymentOptions() {
printf("Payment Options:\n");
printf("1. Credit Card\n");
printf("2. Debit Card\n");
printf("3. Net Banking\n");
printf("4. Wallet\n");
}

int main() {
// Initialize some movies
strcpy(movies[0].title, "Avengers: Endgame");
strcpy(movies[0].director, "Anthony Russo, Joe Russo");
strcpy(movies[0].genre, "Action, Adventure, Drama");
movies[0].year = 2019;
movies[0].rating = 9;
strcpy(movies[1].title, "Joker");
strcpy(movies[1].director, "Todd Phillips");
strcpy(movies[1].genre, "Crime, Drama, Thriller");
movies[1].year = 2019;
movies[1].rating = 8;
numMovies = 2;
// Show main menu
while (1) {
    printf("Main Menu:\n");
    printf("1. Display Current Movies\n");
    printf("2. Register User\n");
    printf("3. Book Ticket\n");
    printf("4. Cancel Ticket\n");
    printf("5. Display Payment Options\n");
    printf("6. Exit\n");
    printf("Enter your choice (1-6): ");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            displayMovies();
            break;
        case 2:
            registerUser();
            break;
        case 3:
            bookTicket();
            break;
        case 4:
            cancelTicket();
            break;
        case 5:
            displayPaymentOptions();
            break;
        case 6:
            return 0;
        default:
            printf("Invalid choice, please try again.\n\n");
    }
}
}