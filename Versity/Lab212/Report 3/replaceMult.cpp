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
string insrt(string txt, int pos, string ptrn)
{

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
            return i;
        }
    }
    return -2;
}
string replacemult(string txt, string del, string n_t)
{
    int ind;
    ind = ptrnMatch(txt, del);
    string n_txt = txt;
    while (ind != -2)
    {
        n_txt = deletion(n_txt, ind, del.size());
        n_txt = insrt(n_txt, ind, n_t);
        ind = ptrnMatch(n_txt, del);
    }
    return n_txt;
}
int main()
{
    string rplc, txt, del, rep;
    cout << "Text: ";
    getline(cin, txt);
    cout << "Delete: ";
    getline(cin, del);
    cout << "Replaced: ";
    getline(cin, rep);
    rplc = replacemult(txt, del, rep);
    cout << "New Text: " << rplc << endl;

    return 0;
}