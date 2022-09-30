#include<iostream>
using namespace std;
int main()
{
    int i, number[5];

    cout<<"Enter five numbers\n";

    for(i=0; i<5; i++)
    cin>>number[i];
    cout<<"The numbers are: ";

    for(i=0; i<5; i++)
    cout<<number[i]<<" ";
//reverse of that array
    cout<<"Reverse are: ";
    for(i=4; i>=0; i--)
    cout<<number[i]<<" ";
}