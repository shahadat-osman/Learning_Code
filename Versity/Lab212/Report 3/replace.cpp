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
string insrt(string txt, int pos, string ptrn){
    
    string s_str1, s_str2, s_str3, s_str;
    s_str1 = sub_str(txt, 0, pos);
    s_str2 = ptrn;
    s_str3 = sub_str(txt, pos, txt.size());
    s_str = s_str1 + s_str2 + s_str3;

    return s_str;
}
string deletion(string txt, int pos, int len)
{
    string s_str, s_str1, s_str2;
    s_str1 = sub_str(txt, 0, pos);
    s_str2 = sub_str(txt, len + pos, txt.size());
    s_str = s_str1 + s_str2;
    return s_str;
}
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
string replace(string text, string p1, string p2)
{
    int index = ptrnMatch(text, p1);
    string ntext = text;
    ntext = deletion(ntext, index, p1.size());
    ntext = insrt(ntext, index, p2);
    return ntext;
}
int main()
{
    string rplc, text, sel, rep;
    getline(cin, text);
    getline(cin, sel);
    getline(cin, rep);
    rplc = replace(text, sel, rep);
    cout << rplc << endl;

    return 0;
}