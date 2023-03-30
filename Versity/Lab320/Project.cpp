#include <bits/stdc++.h>
using namespace std;

void display(string token);
int is_keyword(string token);
int is_operator(string token);
int is_constant(string token);
int is_identifier(string token);

int main()
{
    int i, size;
    string stmnt, token;

    getline(cin, stmnt);

    cout << "\n";
repeat:
    token.clear();
    for (i = 0; i < stmnt.size(); i++)
    {
        if (stmnt[i] == ' ' || stmnt[i] == ';')
            break;
        token += stmnt[i];
    }

    if (token[0] == '\0')
        return 0;

    display(token);

    size = token.size() + 1;
    stmnt.erase(stmnt.begin(), stmnt.begin() + size);

    if (token[0] != ';')
        goto repeat;

    return 0;
}
void display(string token)
{
    if (is_keyword(token))
    {
        cout << "\"" << token << "\" is a keyword\n";
        return;
    }
    else if (is_operator(token))
    {
        cout << "\"" << token << "\" is an operator\n";
        return;
    }
    else if (is_constant(token))
    {
        cout << "\"" << token << "\" is a constant\n";
        return;
    }
    else if (is_identifier(token))
    {
        cout << "\"" << token << "\" is an identifier\n";
        return;
    }
    else
        cout << "\"" << token << "\" is invalid\n";

    return;
}
int is_keyword(string token)
{
    string keywords[32] = {"double", "for", "else", "if",
                          "auto", "int", "struct", "break", "long", "switch", "case", "enum",
                          "register", "typedef", "char", "extern", "return", "union", "continue",
                          "signed", "void", "do", "static", "while", "default", "goto", "sizeof",
                          "volatile", "const", "float", "short", "unsigned"};

    for (int i = 0; i < 32; i++)
    {
        if (token == keywords[i])
            return 1;
    }

    return 0;
}
int is_operator(string token)
{
    string op[17] = {"+", "-", "*", "/", "%", "||", "&&", "==", "=",
                     "!=", "<", "<=", ">", ">=", "|", "&", "!"};

    for (int i = 0; i < 17; i++)
    {
        if (token == op[i])
            return 1;
    }

    return 0;
}
int is_identifier(string token)
{
    int count = 0, i;
    if ((token[0] >= 'a' && token[0] <= 'z') || (token[0] >= 'A' && token[0] <= 'Z') || (token[0] == '_') || (token[0] == '$'))
    {
        for (i = 1; i < token.size(); i++)
        {
            if ((token[i] >= 'a' && token[i] <= 'z') || (token[i] >= 'A' && token[i] <= 'Z') || (token[i] >= '0' && token[i] <= '9'))
                count++;
        }
    }
    if (count == token.size() - 1)
        return 1;

    return 0;
}
int is_constant(string token)
{
    int count = 0, i;
    for (i = 0; i < token.size(); i++)
    {
        if (token[i] >= '0' && token[i] <= '9')
            count++;
    }
    if (count == token.size())
        return 1;

    return 0;
}

// int x = p + 1a ;

/*
keyword
identifier
oparator
constant
*/
