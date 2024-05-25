#include <bits/stdc++.h>
using namespace std;
#define MAXSIZE 10
int Stack[MAXSIZE], top = -1;

void push()
{

    if (top == MAXSIZE - 1)
        cout << "Stack is Full." << endl;
    else
    {
        int x;
        cout << "Enter the value: ";
        cin >> x;
        top++;
        Stack[top] = x;
        cout << x << " is inserted" << endl;
    }
}

void pop()
{
    if (top == -1)
        cout << "Stack is empty." << endl;
    else
    {
        int x = Stack[top];
        top--;
        cout << "Popped element is " << x << endl;
    }
}

void display()
{
    if (top == -1)
        cout << "Stack is empty." << endl;
    else
    {
        for (int i = top; i >= 0; i--)
            cout << Stack[i] << " ";
    }
    cout<<endl;
}

int main()
{
    int operation;
    do
    {
        cout << "Enter your choise: " << endl;
        cout << "1. Push element. " << endl;
        cout << "2. Pop element " << endl;
        cout << "3. Display Stack " << endl;
        cout << "4. Exit " << endl;
        cin >> operation;

        switch (operation)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "program is ended." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (operation != 4);
}
