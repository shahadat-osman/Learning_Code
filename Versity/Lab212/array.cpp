#include<iostream>
using namespace std;
int main()
{
    int x, num[5];

    cout<<"Enter five numbers\n";

    for(x=0; x<5; x++)
    cin>>num[x];
    cout<<"The numbers are: ";

    for(x=0; x<5; x++)
    cout<<num[x]<<" "<<endl;
//reverse of that array
    cout<<"\nReverse are: ";
    for(x=4; x>=0; x--)
    cout<<num[x]<<" ";
}