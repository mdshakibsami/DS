#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,index,item;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    int newArr[n+1];


    cout<<"Enter "<<n<<" items: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    cout<<"Enter insert index: ";
    cin>>index; index--;

    cout<<"Enter insert item: ";
    cin>>item;

    for(int i=0;i<index;i++)
    {
        newArr[i]=arr[i];
    }


    newArr[index]=item;


    for(int i=index;i<n;i++)
    {
        newArr[i+1]=arr[i];
    }
    
    
    for(int i=0;i<n+1;i++)
    {
        cout<<newArr[i]<<" ";
    }
}