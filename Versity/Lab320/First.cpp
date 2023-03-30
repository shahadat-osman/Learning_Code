#include <bits/stdc++.h>

using namespace std;

void First(char c);

int i, n, j;
string grammar[10], List;

int main()
{
    cout << "Total: ";
    cin >> n;

    cout << "CGF:\n";
    for (i = 1; i <= n; i++)
        cin >> grammar[i];

    char c;
    while(1)
    {
        cout << "Find First of: ";
        cin >> c;
        
        First(c);
        cout<<"First("<<c<<") = { "<<List<<"}\n";
        List.clear();
    }

    return 0;
}

void First(char c)
{
    j=0;
    if (c >= 'a' && c <= 'z')
    {
        List+=c;
        List+=" ";
    }
    if(c >= 'A' && c <= 'Z')
    {
        repeat:
        for(i=1; i<=n; i++)
        {
            if(c==grammar[i][0])
            {
                if(!(grammar[i][2]>='A' && grammar[i][2]<='Z'))
                {
                    List+=grammar[i][2];
                    List+=", ";
                }
                else
                {
                    c=grammar[i][2];
                    goto repeat;
                }
            }
        }
    }

    return;
}

/*
6
E=TD
D=+TD
T=FS
S=*FS
F=(E)
F=a
*/