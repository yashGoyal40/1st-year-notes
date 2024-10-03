#include <stdio.h>
#include <string.h>

// Define a structure to hold contact information
struct Contact {
    char name[50];
    char phone_number[20];
    char email[50];
};

// Declare an array of contacts
struct Contact phonebook[100];
int num_contacts = 0;

// Function to add a new contact
void add_contact() {
    struct Contact new_contact;
    printf("Enter name: ");
    scanf("%s", new_contact.name);
    printf("Enter phone number: ");
    scanf("%s", new_contact.phone_number);
    printf("Enter email: ");
    scanf("%s", new_contact.email);
    phonebook[num_contacts] = new_contact;
    num_contacts++;
    printf("Contact added successfully.\n");
}

// Function to display all contacts
void display_contacts() {
    if (num_contacts == 0) {
        printf("No contacts found.\n");
    } else {
        printf("Name\tPhone Number\tEmail\n");
        for (int i = 0; i < num_contacts; i++) {
            printf("%s\t%s\t%s\n", phonebook[i].name, phonebook[i].phone_number, phonebook[i].email);
        }
    }
}

// Function to delete a contact
void delete_contact() {
    char name[50];
    printf("Enter name of contact to delete: ");
    scanf("%s", name);
    int found = 0;
    for (int i = 0; i < num_contacts; i++) {
        if (strcmp(phonebook[i].name, name) == 0) {
            for (int j = i; j < num_contacts - 1; j++) {
                phonebook[j] = phonebook[j + 1];
            }
            num_contacts--;
            found = 1;
            break;
        }
    }
    if (found) {
        printf("Contact deleted successfully.\n");
    } else {
        printf("Contact not found.\n");
    }
}



// Function to search for a contact
void search_contact() {
    char name[50];
    printf("Enter name of contact to search: ");
    scanf("%s", name);
    int found = 0;
    for (int i = 0; i < num_contacts; i++) {
        if (strcmp(phonebook[i].name, name) == 0) {
            printf("Name\tPhone Number\tEmail\n");
            printf("%s\t%s\t%s\n", phonebook[i].name, phonebook[i].phone_number, phonebook[i].email);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Contact not found.\n");
    }
}



// Function to edit a contact
void edit_contact() {
    char name[50];
    printf("Enter name of contact to edit: ");
    scanf("%s", name);
    int found = 0;
    for (int i = 0; i < num_contacts; i++) {
        if (strcmp(phonebook[i].name, name) == 0) {
            printf("Enter new phone number: ");
            scanf("%s", phonebook[i].phone_number);
            printf("Enter new email: ");
            scanf("%s", phonebook[i].email);
            found = 1;
            printf("Contact edited successfully.\n");
            break;
        }
    }
    if (!found) {
        printf("Contact not found.\n");
    }
}



// Main function to drive the program
int main() {
int choice;
do {


// Display menu
printf("\nPhonebook\n");
printf("1. Add Contact\n");
printf("2. Display All Contacts\n");
printf("3. Delete Contact\n");
printf("4. Search Contact\n");
printf("5. Edit Contact\n");
printf("0. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);

    // Call corresponding functions based on user choice
    switch (choice) {
        case 1:
            add_contact();
            break;
        case 2:
            display_contacts();
            break;
        case 3:
            delete_contact();
            break;
        case 4:
            search_contact();
            break;
        case 5:
            edit_contact();
            break;
        case 0:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }
} while (choice != 0);

return 0;
}