/*
Stack is an order list in which elements are to be inserted and deleted from the one end, called top end.

Operations:
    * push()
    * pop()
    * display()
    
Applications:
    * variable in C
    * function 
    * Recursion 
    * File system
Method:
    LIFO
*/

#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10
int stack[MAXSIZE],top = -1;

void push();
void pop();
void display();

int main()
{

    int operation ;
    do
    {
        printf("-------------- Stack ------------------------");
        printf("\ntype \n1 to push\n2 to pop\n3 to display stack\n4 to exit\n");
        scanf("%d",&operation);
        switch (operation)
        {
            case 1: push();break;
            case 2: pop();break;
            case 3: display();break;
            case 4: printf("You exit the program"); break;
            default: printf("Invalid Operation"); break;
        
        }
        
    }while (operation!=4);

}

void push()
{
    if(top == MAXSIZE-1)
        printf("Stack Overflow\n");
    else
    {
        int x;
        printf("Enter the value you want to push: ");
        scanf("%d",&x);
        top++;
        stack[top]= x;

    }
}

void pop()
{
    if(top==-1)
        printf("Stack is empty\n");
    else
    {
        int x = stack[top];
        top--;
        printf("Poped element is %d\n",x);
    }
}

void display()
{
    if(top == -1) 
        printf("Stack is empty\n");
    else 
    {
        for(int i=top ;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}