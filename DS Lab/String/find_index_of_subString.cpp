#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,pattern;
    
    cout<<"Enter a string: ";
    getline(cin,s);

    cout<<"Enter a subString: ";
    getline(cin,pattern);

    int index = s.find(pattern);

    if(index==-1) cout<<pattern<<" is not found"<<endl;
    else cout<<"index is: "<<index+1<<endl;

}