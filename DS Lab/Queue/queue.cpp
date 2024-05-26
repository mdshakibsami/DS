#include <bits/stdc++.h>
using namespace std;
#define MAXSIZE 10
int Queue[MAXSIZE],front=0,rare=-1;

void isEmpty()
{
    if(front>rare)
    {
        cout<<"Queue is empty"<<endl;
    }
    else cout<<"Queue is not empty."<<endl;
}
void isFull()
{
    if(rare ==MAXSIZE-1)
    {
           cout<<"Queue is full"<<endl;
    }
    else cout<<"Queue is not full."<<endl;
}
void enqueue()
{
    if(rare==MAXSIZE-1) cout<<"Queue is full."<<endl;
    else 
    {
        int x;
        cout<<"Enter a number: ";
        cin>>x;
        rare++;
        cout<<rare;
        Queue[rare]=x;
    }
}
void display()
{
    if(front>rare) cout<<"Queue is empty."<<endl;
    else
    {
        for(int i=front; i<=rare;i++) cout<<Queue[i]<<" ";
        cout<<endl;
    }
}
void dequeue()
{
    if(front>rare) cout<<"Queue is empty."<<endl;
    else
    {
        int x;
        x = Queue[front];
        front++;
        cout<<"deleted element is "<<x<<endl;
    }
}
void peek()
{
    if(front>rare) cout<<"Queue is empty."<<endl;
    else
    {
        cout<<"Peek value is "<<Queue[rare]<<endl;
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
            cout<<"Program is ended."<<endl;
            break;
        default: cout<<"invalid operation"<<endl;
        }

    } while (operation != 7);
}