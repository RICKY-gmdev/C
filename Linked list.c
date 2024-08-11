#include <stdio.h>
#include <stdlib.h>

struct node
{
    int roll;
    char name[50];
    int total;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;
void create();
void display();

int main()
{
    while (1)
    {
        printf("\n 1. press 1 for creation \n 2. press 2 for display\n");
        int ch;
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        default:
            exit(0);
        }
    }
}

void create()
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter Roll No. : ");
    scanf("%d", &p->roll);
    fflush(stdin);
    printf("\nEnter Name :");
    gets(p->name);
    printf("\nEnter Total:");
    scanf("%d", &p->total);
    p->next = NULL;
    if (head == NULL)
    {
        head = tail = p;
    }
    else
    {
        tail->next = p;
        tail = p;
    }
}

void display()
{
    struct node *p;
    p = head;
    while (p != NULL)
    {
        printf("Roll no %d \n", p->roll);
        printf("Name is :");
        puts(p->name);
        printf("Total is : %d \n", p->total);
        p = p->next;
    }
}