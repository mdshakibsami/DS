#include <bits/stdc++.h>
#include <cstdlib>

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

    char choise;
    cout << "Want to continue? type 'Y' or 'y' : ";
    cin>>choise;
    while (choise == 'y'|| choise=='Y')
    {
        cout << "Enter another number: ";
        cin >> x;
        // newNode = (struct node *)(malloc(sizeof(struct node)));
        newNode = new node;
        newNode->data = x;
        newNode->add = NULL;

        // connect
        temp->add = newNode;
        // shift to next
        temp = temp->add;

        cout << "Want to continue? type 'Y' or 'y' : ";
        cin>>choise;
    }
}
void traverse()
{
}

int main()
{
    int operation;
    do
    {
        cout << "1. Create Link List." << endl;
        cout << "2. Exit" << endl;

        cin >> operation;
        switch (operation)
        {
        case 1:
            create();
            break;
        case 2: 
            cout << "Program is ended" << endl;
        }
        default: cout<<"invalid operation"<<endl

    } while (operation != 2);
}