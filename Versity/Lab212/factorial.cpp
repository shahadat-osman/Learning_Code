#include<iostream>
using namespace std;
int main()
{
    int number, fact=1, i;

    cout<<"Enter a number to get factorial result:"<<endl;
    cin>>number;
    for(i=1; i<=number; i++)
    {
        fact=fact*i;
    }
    cout<<number<<"! equal is: "<<fact<<endl;
}