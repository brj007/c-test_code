#include<iostream>
using namespace std;
int main()
{
    int n,s=0,rev;
    cout<<"\n enter a number";
    cin>>n;
    int x=n;
    while(n!=0)
    {

        rev=n%10;
        s=s*10+rev;
        n/=10;

    }
    if(x==s)
        cout<<"\n its pallindrome";
    else
        cout<<"\n not pallindrome";
}
