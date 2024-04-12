#include<iostream>
using namespace std;
void palindrome(string s ,int n)
{
    int i=0;
    int j=n-1;
    if(s[i]==s[j])
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
}
int main()
{
    string s;
    cout<<"enter any string:";
    cin>>s;
    int n=s.length();
    
    palindrome(s,n);
}