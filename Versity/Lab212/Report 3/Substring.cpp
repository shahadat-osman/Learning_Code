#include <iostream>
#include <string>

using namespace std;

string sub_str(string txt, int pos, int len)
{
    string str;
    for (int i = pos; i <= pos + len - 1; i++)
    {
        str = str + txt[i];
    }
    return str;
}
int main()
{
    string str, txt;
    getline(cin, txt);
    str = sub_str(txt, 0, 8);
    cout << str << endl;
}