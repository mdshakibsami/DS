#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *add;
};
struct node *start = NULL, *temp, *newNode;

void create()
{
    int x;
    cout << "enter first number: ";
    cin >> x;

    start = new node;
    start->data = x;
    start->add = NULL;

    temp = start;

    char ch;
    cout << "Wnat to continue? 'y' or 'Y':";
    cin >> ch;
    while (ch == 'y' || ch == 'Y')
    {
        cout << "Enter another number: ";
        cin >> x;

        newNode = new node;

        newNode->data = x;
        newNode->add = NULL;

        // connect
        temp->add = newNode;
        // shift temp
        temp = temp->add;

        cout << "Wnat to continue? 'y' or 'Y':";
        cin >> ch;
    }
}

void traverse()
{
    if(start==NULL) cout<<"No Linked list exits."<<endl;
    else
    {
        temp = start;
        while (temp!=NULL)
        {
            cout<<temp-> data<<" ";
            temp = temp->add;
        }
        
    }
}

int main()
{
    int operation;
    do
    {
        cout << "\n1. Create Link List." << endl;
        cout << "\n2. Traverse Link List." << endl;
        cout << "\n3. Exit" << endl;

        cin >> operation;
        switch (operation)
        {
        case 1:
            create();
            break;
        case 2:
            traverse();
            break;
        case 3:
            cout << "Program is ended" << endl;
        }

    } while (operation != 3);
}