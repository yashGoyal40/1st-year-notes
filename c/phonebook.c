#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

struct contact {
    char name[50];
    char address[100];
    char phone[20];
    char email[50];
};

struct contact contacts[MAX_CONTACTS];
int num_contacts = 0;

void load_contacts() {
    FILE *fp = fopen("contacts.txt", "r");
    if (fp == NULL) {
        printf("No saved contacts found.\n");
        return;
    }
    
    char line[220];
    while (fgets(line, sizeof(line), fp) != NULL) {
        char *name = strtok(line, ",");
        char *address = strtok(NULL, ",");
        char *phone = strtok(NULL, ",");
        char *email = strtok(NULL, ",");
        
        if (name == NULL || address == NULL || phone == NULL || email == NULL) {
            printf("Invalid contact data in file.\n");
            continue;
        }
        
        strncpy(contacts[num_contacts].name, name, sizeof(contacts[num_contacts].name));
        strncpy(contacts[num_contacts].address, address, sizeof(contacts[num_contacts].address));
        strncpy(contacts[num_contacts].phone, phone, sizeof(contacts[num_contacts].phone));
        strncpy(contacts[num_contacts].email, email, sizeof(contacts[num_contacts].email));
        
        num_contacts++;
        if (num_contacts >= MAX_CONTACTS) {
            printf("Maximum number of contacts reached.\n");
            break;
        }
    }
    
    printf("Contacts loaded successfully.\n");
    fclose(fp);
}

void print_menu() {
    printf("**********************************************\n");
    printf("\nPhonebook Management System\n");
    printf("1. Add a contact\n");
    printf("2. View all contacts\n");
    printf("3. Edit a contact\n");
    printf("4. Search for a contact\n");
    printf("5. Delete a contact\n");
    printf("6. Exit\n");
}

void add_contact() {
    if (num_contacts >= MAX_CONTACTS) {
        printf("Phonebook is full, cannot add new contact.\n");
        return;
    }
    
    printf("Enter name[Please chose a unique name]: ");
    scanf("%s", contacts[num_contacts].name);
    
    printf("Enter address: ");
    scanf(" %[^\n]", contacts[num_contacts].address);
    
    printf("Enter phone number: ");
    scanf("%s", contacts[num_contacts].phone);
    
    printf("Enter email address: ");
    scanf("%s", contacts[num_contacts].email);
    
    num_contacts++;
    printf("Contact added successfully.\n");
}

void view_contacts() {
    if (num_contacts == 0) {
        printf("Phonebook is empty.\n");
        return;
    }
    
    printf("Name\t\tAddress\t\tPhone\t\tEmail\n");
    printf("---------------------------------------------------------------\n");
    for (int i = 0; i < num_contacts; i++) {
        printf("%s\t\t%s\t\t%s\t\t%s\n", contacts[i].name, contacts[i].address, contacts[i].phone, contacts[i].email);
    }
}

void edit_contact() {
    char name[50];
    printf("Enter name of contact to edit: ");
    scanf("%s", name);
    
    for (int i = 0; i < num_contacts; i++) {
        if (strcmp(name, contacts[i].name) == 0) {
            printf("Enter new name: ");
            scanf("%s", contacts[i].name);
            
            printf("Enter new address: ");
            scanf(" %[^\n]", contacts[i].address);
            
            printf("Enter new phone number: ");
            scanf("%s", contacts[i].phone);
            
            printf("Enter new email address: ");
            scanf("%s", contacts[i].email);
            
            printf("Contact edited successfully.\n");
            return;
        }
    }
    
    printf("Contact not found.\n");
}

void search_contact() {
    char name[50];
    printf("Enter name of contact to search: ");
    scanf("%s", name);
    
    for (int i = 0; i < num_contacts; i++) {
        if (strcmp(name, contacts[i].name) == 0) {
            printf("Name\t\tAddress\t\tPhone\t\tEmail\n");
            printf("---------------------------------------------------------------\n");
            printf("%s\t\t%s\t\t%s\t\t%s\n", contacts[i].name, contacts[i].address, contacts[i].phone, contacts[i].email);
            return;
        }
    }
    
    printf("Contact not found.\n");
}

void delete_contact() {
    char name[50];
    printf("Enter name of contact to delete: ");
    scanf("%s", name);
    
    for (int i = 0; i < num_contacts; i++) {
        if (strcmp(name, contacts[i].name) == 0) {
            for (int j = i; j < num_contacts - 1; j++) {
                contacts[j] = contacts[j+1];
            }
            num_contacts--;
            printf("Contact deleted successfully.\n");
            return;
        }
    }
    
    printf("Contact not found.\n");
}

void save_contacts() {
    FILE *fp = fopen("contacts.txt", "w");
    if (fp == NULL) {
        printf("Unable to save contacts.\n");
        return;
    }
    
    for (int i = 0; i < num_contacts; i++) {
        fprintf(fp, "%s,%s,%s,%s\n", contacts[i].name, contacts[i].address, contacts[i].phone, contacts[i].email);
    }
    
    printf("Contacts saved successfully.\n");
    fclose(fp);
}

int main() {
    load_contacts();
    
    int choice;
    do {
        print_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                add_contact();
                break;
            case 2:
                view_contacts();
                break;
            case 3:
                edit_contact();
                break;
            case 4:
                search_contact();
                break;
            case 5:
                delete_contact();
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    } while (choice != 6);
    
    save_contacts();
    return 0;
}
