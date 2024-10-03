#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUSES 10
#define MAX_SEATS 50

// Bus structure
struct Bus {
    char bus_id[10];
    char source[20];
    char destination[20];
    int fare;
    int seats[MAX_SEATS];
    int available_seats;
};

// Global variables
struct Bus buses[MAX_BUSES];
int num_buses = 0;

// Function prototypes
void display_buses();
void add_bus();
void book_seat();
void cancel_seat();
void delete_update_bus();

int main() {
    int choice;

    // Sample data
    strcpy(buses[0].bus_id, "A123");
    strcpy(buses[0].source, "Delhi");
    strcpy(buses[0].destination, "Mumbai");
    buses[0].fare = 1000;
    buses[0].available_seats = MAX_SEATS;
    for (int i = 0; i < MAX_SEATS; i++) {
        buses[0].seats[i] = 0;
    }

    strcpy(buses[1].bus_id, "B456");
    strcpy(buses[1].source, "Mumbai");
    strcpy(buses[1].destination, "Delhi");
    buses[1].fare = 1200;
    buses[1].available_seats = MAX_SEATS;
    for (int i = 0; i < MAX_SEATS; i++) {
        buses[1].seats[i] = 0;
    }

    num_buses = 2;

    // Main menu loop
    do {
        printf("\n\n");
        printf("1. Display available buses\n");
        printf("2. Add new bus\n");
        printf("3. Book seat\n");
        printf("4. Cancel seat\n");
        printf("5. Update\\Delete bus details\n");
        printf("6. Exit\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                display_buses();
                break;

            case 2:
                add_bus();
                break;

            case 3:
                book_seat();
                break;

            case 4:
                cancel_seat();
                break;

            case 5:
                delete_update_bus();
                break;
            case 6:
                printf("\nExiting program...\n");
                break;

            default:
                printf("\nInvalid choice. Try again.\n");
                break;
        }
    } while (choice != 7);

    return 0;
}

// Function to display available buses for a route
void display_buses() {
    char source[20];
    char destination[20];
    int count = 0;

    printf("\nEnter source: ");
    scanf("%s", source);

    printf("Enter destination: ");
    scanf("%s", destination);

    printf("\nAvailable buses:\n");
    for (int i = 0; i < num_buses; i++) {
        if (strcmp(buses[i].source, source) == 0 &&
            strcmp(buses[i].destination, destination) == 0) {
            printf("%s - Rs. %d\n", buses[i].bus_id, buses[i].fare);
            count++;
        }
    }
    if (count == 0) {
        printf("No buses available for the given route.\n");
    }
}

void add_bus() {
    if (num_buses >= MAX_BUSES) {
    printf("\nCannot add more buses. Maximum limit reached.\n");
    return;
    }
    struct Bus new_bus;
    printf("\nEnter bus id: ");
    scanf("%s", new_bus.bus_id);

    printf("Enter source: ");
    scanf("%s", new_bus.source);

    printf("Enter destination: ");
    scanf("%s", new_bus.destination);

    printf("Enter fare: ");
    scanf("%d", &new_bus.fare);

    new_bus.available_seats = MAX_SEATS;
    for (int i = 0; i < MAX_SEATS; i++) {
        new_bus.seats[i] = 0;
    }

    buses[num_buses] = new_bus;
    num_buses++;

    printf("\nBus added successfully.\n");
}

void book_seat() {
    char bus_id[10];
    int seat_num;
    printf("\nEnter bus id: ");
    scanf("%s", bus_id);

    int bus_index = -1;
    for (int i = 0; i < num_buses; i++) {
        if (strcmp(buses[i].bus_id, bus_id) == 0) {
            bus_index = i;
            break;
        }
    }

    if (bus_index == -1) {
        printf("Invalid bus id.\n");
        return;
    }

    if (buses[bus_index].available_seats == 0) {
        printf("All seats are booked for this bus.\n");
        return;
    }

    printf("Available seats: ");
    for (int i = 0; i < MAX_SEATS; i++) {
        if (buses[bus_index].seats[i] == 0) {
            printf("%d ", i+1);
        }
    }

    printf("\nEnter seat number: ");
    scanf("%d", &seat_num);

    if (seat_num < 1 || seat_num > MAX_SEATS) {
        printf("Invalid seat number.\n");
        return;
    }

    if (buses[bus_index].seats[seat_num-1] == 1) {
        printf("Seat already booked.\n");
        return;
    }

    buses[bus_index].seats[seat_num-1] = 1;
    buses[bus_index].available_seats--;

    printf("Seat booked successfully.\n");
}

void cancel_seat() {
    char bus_id[10];
    int seat_num;
    printf("\nEnter bus id: ");
    scanf("%s", bus_id);

    int bus_index = -1;
    for (int i = 0; i < num_buses; i++) {
        if (strcmp(buses[i].bus_id, bus_id) == 0) {
            bus_index = i;
            break;
        }
    }

    if (bus_index == -1) {
        printf("Invalid bus id.\n");
        return;
    }

    printf("Booked seats: ");
    for (int i = 0; i < MAX_SEATS; i++) {
        if (buses[bus_index].seats[i] == 1) {
            printf("%d ", i+1);
        }
    }

    printf("\nEnter seat number: ");
    scanf("%d", &seat_num);

    if (seat_num < 1 || seat_num > MAX_SEATS) {
        printf("Invalid seat number \n");
        return;
    }
    if (buses[bus_index].seats[seat_num-1] == 0) {
    printf("Seat not booked.\n");
    return;
    }

    buses[bus_index].seats[seat_num-1] = 0;
    buses[bus_index].available_seats++;

    printf("Seat cancelled successfully.\n");
}
void delete_update_bus() {
    char bus_id[10];   
    printf("\nEnter bus id: ");
    scanf("%s", bus_id);

    int bus_index = -1;
    for (int i = 0; i < num_buses; i++) {
        if (strcmp(buses[i].bus_id, bus_id) == 0) {
            bus_index = i;
            break;
        }
    }

    if (bus_index == -1) {
        printf("Invalid bus id.\n");
        return;
    }

    printf("\n1. Delete bus\n2. Update bus details\nEnter your choice: ");
    int choice;
    scanf("%d", &choice);

    if (choice == 1) {
        for (int i = bus_index; i < num_buses-1; i++) {
            buses[i] = buses[i+1];
        }
        num_buses--;

        printf("Bus deleted successfully.\n");
    }
    else if (choice == 2) {
        printf("Enter new source: ");
        scanf("%s", buses[bus_index].source);

        printf("Enter new destination: ");
        scanf("%s", buses[bus_index].destination);

        printf("Enter new fare: ");
        scanf("%d", &buses[bus_index].fare);

        printf("Bus details updated successfully.\n");
    }
    else {
        printf("Invalid choice.\n");
        return;
    }
}