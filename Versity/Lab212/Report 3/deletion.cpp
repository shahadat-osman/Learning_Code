#include <iostream>
#include <string>
using namespace std;
string str(string txt, int pos, int len)
{
    string s_str;
    for (int i = pos; i <= pos + len - 1; i++)
    {
        s_str = s_str + txt[i];
    }
    return s_str;
}
string deletion(string txt, int pos, int len)
{
    string s_str, s_str1, s_str2;
    s_str1 = str(txt, 0, pos);
    s_str2 = str(txt, len + pos, txt.size());
    s_str = s_str1 + s_str2;
    return s_str;
}
int main()
{
    string s_str, txt;
    getline(cin, txt);
    s_str = deletion(txt, 0, 9);
    cout << s_str << endl;
}