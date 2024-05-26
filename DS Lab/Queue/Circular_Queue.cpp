#include <bits/stdc++.h>
using namespace std;
#define MAXSIZE 10
int Queue[MAXSIZE], front = -1, rare = -1;

void isEmpty()
{
    if (front == -1 && rare == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
        cout << "Queue is not empty." << endl;
}
void isFull()
{
    if ((rare + 1) % MAXSIZE == front)
    {
        cout << "Queue is full" << endl;
    }
    else
        cout << "Queue is not full." << endl;
}
void enqueue()
{
    if ((rare + 1) % MAXSIZE == front)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        int x;
        cout << "Enter a number: ";
        cin >> x;
        if (rare == -1 && front == -1)
        {
            rare = 0;
            front = 0;
        }
        else
            rare = (rare + 1) % MAXSIZE;

        Queue[rare] = x;
    }
}
void display()
{
    if (front == -1 && rare == -1)
    {
        cout << "Queue is empty" << endl;
    }
    {
        for (int i = front; i != rare; i = (i + 1) % MAXSIZE)
            cout << Queue[i] << " ";
        cout << endl;
    }
}
void dequeue()
{
    if (front == -1 && rare == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        int x = Queue[front];
        cout<<"deleted element is "<<x<<endl;
        if(front==rare) cout<<"Queue is empty."<<endl;
        else front = (front+1)%MAXSIZE;
    }
}
void peek()
{
    if (front == -1 && rare == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Peek value is " << Queue[rare] << endl;
    }
}

int main()
{
    int operation;
    do
    {
        cout << "1. Enqueue." << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. isEmpty" << endl;
        cout << "4. isFull" << endl;
        cout << "5. peek" << endl;
        cout << "6. display" << endl;
        cout << "7. Exit" << endl;

        cin >> operation;
        switch (operation)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            isEmpty();
            break;
        case 4:
            isFull();
            break;
        case 5:
            peek();
            break;
        case 6:
            display();
            break;
        case 7:
            cout << "Program is ended." << endl;
            break;
        default:
            cout << "invalid operation" << endl;
        }

    } while (operation != 7);
}