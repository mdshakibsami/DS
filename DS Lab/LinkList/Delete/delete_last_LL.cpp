#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *add;
};
struct node *start = NULL, *temp, *newNode,*pre;

void create()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    start = new node;
    start->data = x;
    start->add = NULL;

    temp = start;

    char ch;
    cout << "Wanna continue? y or Y: ";
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
        cout << "Wanna continue? y or Y: ";
        cin >> ch;
    }
}

void deleteLast()
{
    if(start == NULL) cout<<"Linked list does not exit."<<endl;
    else
    {
       temp = start;
       while (temp->add!=NULL)
       {
            pre = temp;
            temp = temp->add;
       }

       pre->add = NULL;
       cout<<"Deleted element is "<<temp->data<<endl;
       delete temp;
       
    }
}


void display()
{
    if(start == NULL) cout<<"Linked list does not exit."<<endl;
    else
    {
        temp = start;
        while (temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp ->add;
        }
        
    }
}

int main()
{
    int operation;
    do
    {
        cout << "\n1. Create Link List." << endl;
        cout << "\n2. Display Link List." << endl;
        cout << "\n3. Delete Last" << endl;
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
            deleteLast();
            break;
        case 4:
            cout << "Program is ended" << endl;
        }

    } while (operation != 4);
}