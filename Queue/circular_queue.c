/*
Circular Queue is an order list in which elements are to be inserted and deleted from two different end,called rear end and front end.

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
*/

#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10
int circular_queue[MAXSIZE],rare=-1,front=-1;

void insert();
void delete();
void display();

int main()
{
    int operation;
    do
    {
        printf("-------------- Circular Queue ------------------------");
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
    if((rare+1)%MAXSIZE==front)
    {
        printf("Circular queue is overflow\n");
    }
    else 
    {
        int x;
        printf("Enter the value: ");
        scanf("%d",&x);
        if(rare == -1 && front == -1)
        {
            rare =0; 
            front = 0;
        }  
        else
        {
            rare = (rare+1)%MAXSIZE;
        } 
        circular_queue[rare] = x;
    }


}

void delete()
{
    if(rare == -1 && front== -1)
        printf("Circular queue is empty\n");
    else
    {
        int x = circular_queue[front];
        if(front==rare)
        {
            rare = -1;
            front =-1;
        }
        else
        {
            front = (front+1)%MAXSIZE;
        }
        printf("Deleted element is %d\n",x);
    }
}

void display()
{
    if(rare == -1 && front == -1)
        printf("Circular queue is empty\n");
    else
    {
        int i;
        for( i=front;i!=rare;i = (i+1)%MAXSIZE)
        {
            printf("%d ",circular_queue[i]);
        }
        printf("%d\n",circular_queue[i]);
    }
}