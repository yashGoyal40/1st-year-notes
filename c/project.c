#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max_contacts 100

void add_a_contact();
void view_all_contact();
void edit_a_contact();
void search_contact();
void delete_contact();
FILE *fp;
struct contact{
    char name[45];
    char address[100];
    char phone[20];
    char email[50];
};

struct contact contacts[max_contacts];
int num_contacts = 0;

void print_statement(){
    printf("**********************************************\n");
    printf("\nPhonebook Management System\n");
    printf("1. Add a contact\n");
    printf("2. View all contacts\n");
    printf("3. Edit a contact\n");
    printf("4. Search for a contact\n");
    printf("5. Delete a contact\n");
    printf("6. Exit\n");
}
int main(){
    int a;
    do{
    print_statement();
    printf("enter your choice: ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        add_a_contact();
        break;
    case 2:
        view_all_contact();
        break;
    case 3:
        edit_a_contact();
        break;
    case 4:
        search_contact();
        break;
    case 5:
        delete_contact();
        break;
    case 6:
        printf("exiting the program........");
        break;
    default:
        printf("invalid choice\n");
        break;
    }
    }while(a!=6);
}

void add_a_contact(){
    fp = fopen("contacts.txt","w");
    if (fp == NULL) {
        printf("Unable to open file\n");
        return;
    }
    printf("Enter Name: ");
    scanf("%s",contacts[num_contacts].name);
    printf("Enter Address: ");
    scanf("%s",contacts[num_contacts].address);
    printf("Enter Phone: ");
    scanf("%s",contacts[num_contacts].phone);
    printf("Enter Email: ");
    scanf("%s",contacts[num_contacts].email);
    num_contacts++;
    fprintf(fp, "%s %s %s %s\n", contacts[num_contacts].name, contacts[num_contacts].address, contacts[num_contacts].phone, contacts[num_contacts].email);
    num_contacts++;
    fclose(fp);
    return;
}

void view_all_contact(){
    return;
}

void edit_a_contact(){
    return;
}

void search_contact(){
    return;
}

void delete_contact(){
    return;
}