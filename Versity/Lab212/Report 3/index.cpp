#include <iostream>
#include <string>
using namespace std;
int ptrnMatch(string txt, string ptrn)
{
    int len = txt.size(), i, j, pos = ptrn.size();
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < pos; j++)
        {
            if (txt[i + j] != ptrn[j])
            {
                break;
            }
        }
        if (j == pos)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int ind;
    string txt, p;
    getline(cin, txt);
    getline(cin, p);
    ind = ptrnMatch(txt, p);
    if (ind == 0)
    {
        cout << "Pattern didn't match\n";
    }
    else if(ind == 1)
    {
        cout << "Pattern matched\n";
    }
}