#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,e;
    cin>>v>>e;
    int adjm[v+1][e+1]={0};

    for(int i =0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        adjm[x][y]=1;
        adjm[y][x]=1;
    }

    for(int i=1;i<v;i++)
    {
        for(int j=1;j<e;j++)
        {
            cout<<adjm[i][j]<<" ";
        }
        cout<<endl;
    }
}