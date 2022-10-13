#include<iostream>
using namespace std;
int main()
{
    int i;
    string a="It's a boy!";

    cout<<a<<"\t"<<a.length()<<"\t";

    for (i=0; i <=a.length(); i++)
    {
        if(a[i]=='\'')
        {
            a[i]=0;
            cout<<a;
        }
    }
    
    return 0;
}
