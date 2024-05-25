#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,index;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];


    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<"th item:";
        cin>>arr[i];
    }


    cout<<"Enter delete index: ";
    cin>>index;
    index--;

    for(int i=index;i<n-1;i++)
    {
       arr[i]=arr[i+1];
    }

    
    n--;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}