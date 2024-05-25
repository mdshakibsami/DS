#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *add;
};
struct node *start = NULL, *temp, *newNode,*pre,*nextNode;

void create()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    start = new node;
    start->data = x;
    start->add = NULL;

    temp = start;
    cout << "Wnat to continue? y or Y: ";
    char ch;
    cin >> ch;
    while (ch == 'y' || ch == 'Y')
    {
        cout << "Enter another number: ";
        cin >> x;

        newNode = new node;
        newNode->data = x;
        newNode->add = NULL;

        temp->add = newNode;
        temp = temp->add;

        cout << "Want to continue? y or Y: ";
        cin >> ch;
    }
}

void display()
{
    if (start == NULL)
        cout << "Linked list does not exit." << endl;
    else
    {
        temp = start;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->add;
        }
    }
}

void insertMiddle()
{
    if (start == NULL)
        cout << "Linked list does not exist." << endl;
    else
    {
        int x,pos;
        cout<<"Enter a number: ";
        cin>>x;
        cout<<"Enter the position: ";
        cin>>pos;

        newNode = new node;
        newNode ->data =x;
        newNode->add = NULL;

        int counter = 1;
        //find the node
        nextNode = start;
        while (counter<pos)
        {
            pre = nextNode;
            nextNode  = nextNode->add;
            counter++;
        }
        //connect 
        pre->add = newNode;
        newNode -> add = nextNode;


    }
}

int main()
{
    int operation;
    do
    {
        cout << "\n1. Create Link List." << endl;
        cout << "\n2. Display Link List." << endl;
        cout << "\n3. Insert middle" << endl;
        cout << "\n4. Exit" << endl;

        cin >> operation;
        switch (operation)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insertMiddle();
            break;
        case 4:
            cout << "Program is ended" << endl;
        }

    } while (operation != 4);
}