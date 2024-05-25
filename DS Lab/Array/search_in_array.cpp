#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,index,key;
    bool flag = false;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" items:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter key: ";
    cin>>key;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            flag = true;
        }
    }
   
   if(flag) cout<<key <<" is found"<<endl;
   else cout<<key <<" is not found"<<endl;
}