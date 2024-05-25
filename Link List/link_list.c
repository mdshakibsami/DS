/*
Link list is collection of nodes,where every node is consist of two part, first part contains data and second contains address of next node.
In link list first node is called start position and last node is always null.

Basic operations:
    * Create()
    * Insert()
    * Delete()
    * Display()


*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *add;
};
struct Node *start = NULL, *temp, *newP, *next, *previous;

void create();
void display();
void insertAtFirst();
void insertAtLast();
void insertAtMiddle();
void deleteFromFirst();
void deleteFromLast();
void deleteFromMiddle();
void linkListLength();
void searchItem();

int main()
{

    int operation;
    do
    {
        printf("-------------- LinkList ------------------------");
        printf("\ntype \n1. create\n2. insert at first\n3. insert at last\n4. insert at middle\n");
        printf("5. delete from first\n6. delete from last\n7. delete from middle\n8. linkListSize \n");
        printf("9. searchItem \n10. display \n11.exit\n");
        scanf("%d", &operation);
        switch (operation)
        {
        case 1:
            create();
            break;
        case 2:
            insertAtFirst();
            break;
        case 3:
            insertAtLast();
            break;
        case 4:
            insertAtMiddle();
            break;
        case 5:
            deleteFromFirst();
            break;
        case 6:
            deleteFromLast();
            break;
        case 7:
            deleteFromMiddle();
            break;
        case 8:
            linkListLength();
            break;
        case 9:
            searchItem();
            break;
        case 10:
            display();
            break;
        case 11:
            printf("You exit the program\n");
            break;
        default:
            printf("Invalid Operation\n");
            break;
        }

    } while (operation != 11);
}

void create()
{
    int x;
    char choice;
    printf("Enter the value: ");
    scanf("%d", &x);
    start = (struct Node *)malloc(sizeof(struct Node)); // this is the address of first node
    // assign value to start node
    start->data = x;
    start->add = NULL;

    temp = start;
    printf("Want to continue? type 'y' :\n ");
    getchar(); // Clear input buffer
    scanf("%c", &choice);
    while (choice == 'y' || choice == 'Y')
    {
        printf("Enter the value: ");
        scanf("%d", &x);
        newP = (struct Node *)malloc(sizeof(struct Node));
        // assign value to new node
        newP->data = x;
        newP->add = NULL;
        // connnect to previous
        temp->add = newP;
        // shift temp to next
        temp = temp->add;
        printf("Want to continue? type 'y' : ");
        getchar();
        scanf("%c", &choice);
    }
}


void linkListLength()
{
    temp = start;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->add;
        count++;
    }
    printf("Length of the link list %d\n" ,count);
    
}

void insertAtFirst()
{
    if (start == NULL)
        printf("No link list is found\n");
    else
    {
        int x;
        printf("Enter the element to insert: ");
        scanf("%d", &x);

        newP = (struct Node *)malloc(sizeof(struct Node));
        newP->data = x;
        newP->add = NULL;

        // put the address of start at newP's address
        newP->add = start;
        // make newP the satrt
        start = newP;
    }
}

void insertAtLast()
{
    if (start == NULL)
        printf("No link list is found\n");
    else
    {
        int x;
        printf("Enter a element to insert: ");
        scanf("%d", &x);

        newP = (struct Node *)malloc(sizeof(struct Node));
        newP->data = x;
        newP->add = NULL;
        // find last node and connect the new node
        temp = start;
        while (temp->add != NULL)
        {
            temp = temp->add;
        }
        temp->add = newP;
    }
}

void insertAtMiddle()
{
    int x;
    printf("Enter the element to insert: ");
    scanf("%d", &x);
    // create new node
    newP = (struct Node *)malloc(sizeof(struct Node));
    newP->data = x;
    newP->add = NULL;
    // count the elements of the link list
    temp = start;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->add;
        count++;
    }
    // check the position is valid or not
    int position;
    printf("Enter the position to insert: ");
    scanf("%d", &position);

    if (position >= count || position <= 1)
    {
        printf("Invalid position\n");
    }
    else
    {
        // find the previous and next node
        next = start;
        int i = 1;
        while (i < position)
        {
            previous = next;
            next = next->add;
            i++;
        }
        // put the new node between them
        previous->add = newP;
        newP->add = next;
    }
}

void deleteFromFirst()
{
    if (start == NULL)
        printf("No link list is found\n");
    else
    {
        temp = start;
        printf("Deleted element is %d\n", start->data);
        start = start->add;
        // remove the deleted node
        free(temp);
    }
}

void deleteFromLast()
{
    if (start == NULL)
        printf("No link list is found\n");
    else
    {
        temp = start;
        while (temp->add != NULL)
        {
            previous = temp;
            temp = temp->add;
        }
        previous->add = NULL;
        printf("Deleted element is %d\n", temp->data);
        free(temp);
    }
}

void deleteFromMiddle()
{
    if (start == NULL)
        printf("No link list is found\n");
    else
    {
        int position;
        printf("Enter the position :");
        scanf("%d", &position);
        // count the elements of the link list
        temp = start;
        int count = 0;
        while (temp != NULL)
        {
            temp = temp->add;
            count++;
        }

        if (position >= count || position <= 1)
        {
            printf("Invalid position\n");
        }
        else
        {
            //find the node to delete
            int i=1;
            temp = start;
            while (i<position)
            {
                previous = temp;//previous node
                temp = temp->add;
                i++;
            }
            int x = temp->data;
            next = temp->add;//next node
            previous->add = next;//connect previous and next node
            printf("deleted element is %d\n",x);
            free(temp);
            
        }
    }
}


 void  searchItem()
 {
    if(start == NULL)
        printf("No link list is found\n");
    else
    {
        int x;
        int flag =0;
        printf("Enter the value want to search: ");
        scanf("%d",&x);
        temp = start;
        while (temp != NULL)
        {
            if(temp->data==x)
            {
                flag = 1;
                break;
            }
            else
            {
                temp = temp->add;
            }
        }
        if(flag == 1) 
            printf("%d is found\n",x);
        else
            printf("%d is not found\n",x);
        
    }
 }



void display()
{
    if (start == NULL)
        printf("No link list is found\n");
    else
    {
        temp = start;
        while (temp != NULL)
        {
            printf("%d->", temp->data);
            temp = temp->add;
        }
        printf("NULL\n");
    }
}