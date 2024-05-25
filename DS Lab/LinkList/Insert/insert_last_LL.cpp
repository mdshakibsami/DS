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

void insertLast()
{
    if (start == NULL)
        cout << "Linked list does not exist." << endl;
    else
    {
        int x;
        cout << "Enter a number: ";
        cin >> x;
        temp = start;

        newNode = new node;
        newNode->data = x;
        newNode->add = NULL;
        while (temp->add != NULL)
        {
            temp = temp->add;//this node has null address
        }
        temp->add = newNode;// put newNode address to null place
    }
}

int main()
{
    int operation;
    do
    {
        cout << "\n1. Create Link List." << endl;
        cout << "\n2. Display Link List." << endl;
        cout << "\n3. Insert last" << endl;
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
            insertLast();
            break;
        case 4:
            cout << "Program is ended" << endl;
        }

    } while (operation != 4);
}