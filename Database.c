#include <stdio.h>

struct Database
{
    int id;
    int age;
    char name[100];
    char email[30];
    char phone[15];
};

void insert(struct Database *db, int id, int age, char *name, char *email, char *phone)
{
    db->id = id;
    db->age = age;
    strcpy(db->name, name);
    strcpy(db->email, email);
    strcpy(db->phone, phone);
}

void display(struct Database *db)
{
    printf("ID: %d\n", db->id);
    printf("Name: %s\n", db->name);
    printf("Age: %d\n", db->age);
    printf("Email: %s\n", db->email);
    printf("Phone: %s\n", db->phone);
}
