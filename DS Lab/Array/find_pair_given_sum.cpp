#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,x,y;
    bool flag = false;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];

    cout<<"Enter "<<n<<" items: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the pair sum: ";
    cin>>sum;
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int newSum = arr[i]+arr[j];
            if(sum==newSum)
            {
                x = arr[i];
                y = arr[j];
                flag = true;
                break;
            }
        }
    }

    if(flag) cout<<sum <<" is pair of "<<x<<" "<<y<<endl;
    else cout<<"No such pair is found"<<endl;
}