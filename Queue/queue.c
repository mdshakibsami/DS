/*
Queue is an order list in which elements are to be inserted and deleted from two different end,called rear end and front end.

Operations:
    * insert()
    * delete()
    * display()
    
Applications:
    * Operating System
    * Clint Server Application
    * Incoming call in phone
    * Traffic Management
    * Printer Application
    
Method:
    FIFO
*** We implemented queue using array, it has limitations ***
*/

#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10
int queue[MAXSIZE],rare=-1,front=0;

void insert();
void delete();
void display();

int main()
{
    int operation;
    do
    {
        printf("-------------- Queue ------------------------");
        printf("\ntype \n1 to inset\n2 to delete\n3 to display queue\n4 to exit\n");
        scanf("%d",&operation);
        switch (operation)
        {
            case 1: insert();break;
            case 2: delete();break;
            case 3: display();break;
            case 4: printf("You exit the program"); break;
            default: printf("Invalid Operation"); break;
        
        }

    }while (operation !=4);
    
    
}

void insert()
{
    if(rare == MAXSIZE-1)
        printf("Queue is overflow\n");
    else
    {
        int x;
        printf("Enter a element to insert: ");
        scanf("%d",&x);
        rare++;
        queue[rare]=x;
    }
}

void delete()
{
    if(front>rare)
        printf("Queue is emepty \n");
    else
    {
        int x;
        x = queue[front];
        front++;
        printf("Deleted element is %d",x);

    }
}

void display()
{
    if(front>rare)
        printf("Queue is empty\n");
    else
    {
        for(int i= rare; i>=front;i--) printf("%d ",queue[i]);

    }
}