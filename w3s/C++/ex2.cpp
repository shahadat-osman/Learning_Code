//A string in C++ is actually an object, which contain functions that can perform certain operations on strings. For example, you can also concatenate strings with the append() function:
#include<iostream>
using namespace std;
int main()
{
    string firstName= "Shahadat ", lastName="Osman\n";
    string fullName= lastName.append(firstName);
    
    cout<<fullName;

    return 0;
}
