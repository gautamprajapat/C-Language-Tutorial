#include<iostream>
#include<string.h>
using namespace std;
int pallindrome(string str,int start,int end)
{
    if(str[start]!=str[end])
    {
        return 0;
    }
    else
    {
        return pallindrome(str,start+1,end-1);
    }
    return 1;
}
int main()
{
    string s;
    cout<<"Enter string"<<endl;
    cin>s;
    cout<<s.size();
    cout<<pallindrome(s,0,s.length()-2);
}
