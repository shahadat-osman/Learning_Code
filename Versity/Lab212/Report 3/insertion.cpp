#include <iostream>
#include <string>
using namespace std;
string sub_str(string txt, int pos, int len){

    string s_str;
    for (int i = pos; i <= pos + len - 1; i++)
        s_str = s_str + txt[i];

    return s_str;
}
string insrt(string txt, int pos, string ptrn){
    
    string s_str1, s_str2, s_str3, s_str;
    s_str1 = sub_str(txt, 0, pos);
    s_str2 = ptrn;
    s_str3 = sub_str(txt, pos, txt.size());
    s_str = s_str1 + s_str2 + s_str3;

    return s_str;
}
int main(){

    string s_str, txt;
    getline(cin, txt);
    s_str = insrt(txt, 0, "Shahadat ");
    cout << s_str << endl;
}