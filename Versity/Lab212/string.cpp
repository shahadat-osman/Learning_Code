#include<iostream>
using namespace std;

int main()
{
    int i, space=0, fstop=0;
    string paragraph;

    cout<<"What's on your mind::\n";
    getline(cin,paragraph);
    cout<<"Total Characters are: "<<paragraph.size()<<endl;

    for(i=1; i<=paragraph.size(); i++)
    {
        if(paragraph[i]==' ')
            space++;
        if(paragraph[i]=='.' || paragraph[i]=='?')
            fstop++;
    }

    cout<<"Total Words are: "<<space+fstop<<endl;

}