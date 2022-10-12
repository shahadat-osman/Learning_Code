#include<iostream>
using namespace std;
int main()
{
    string fname, lname, fullname;

    cin>>fname>>lname;
    fullname=fname.append(lname);
    cout<<fullname;
    
    return 0;
}