#include<bits/stdc++.h>
using namespace std;
int main()
{
    string originalText,insetText,resultText="";
    int position;
    cout<<"Enter a original string: ";
    getline(cin,originalText);
    cout<<"Enter a inserting text: ";
    getline(cin,insetText);
    cout<<"Enter a insert index: ";
    cin>>position;

    for(int i=0;i<position;i++)
    {
        resultText +=originalText[i];
    }
    
    resultText+=insetText;
    
    for(int i=position;i<originalText.size();i++)
    {
        resultText +=originalText[i];
    }
    

    cout<<resultText<<endl;





}