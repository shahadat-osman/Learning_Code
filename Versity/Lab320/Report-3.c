#include <stdio.h>
#include <string.h>
int main()
{
    char str[20], ch;
    int state = 0, i = 0;

    scanf("%s", str);
    while (str[i] != '\0')
    {
        switch (state)
        {
        case 0:
            ch = str[i++];
            if (ch == 'a')
                state = 1;
            else if (ch == 'b')
                state = 2;
            else
                state = 6;
            break;
        case 1:
            ch = str[i++];
            if (ch == 'a')
                state = 3;
            else if (ch == 'b')
                state = 4;
            else
                state = 6;
            break;
        case 2:
            ch = str[i++];
            if (ch == 'b')
                state = 2;
            else
                state = 6;
            break;
        case 3:
            ch = str[i++];
            if (ch == 'a')
                state = 3;
            else if (ch == 'b')
                state = 2;
            else
                state = 6;
            break;
        case 4:
            ch = str[i++];
            if (ch == 'b')
                state = 5;
            else
                state = 6;
            break;
        case 5:
            ch = str[i++];
            if (ch == 'b')
                state = 2;
            else
                state = 6;
            break;
        case 6:
            ch = str[i++];
            state = 6;
            break;
        }
    }
    if (state == 6)
        printf("Not Accepted\n");
    else if (state == 1 || state == 3)
        printf("Accepted Under a*\n");
    else if (state == 2 || state == 4)
        printf("Accepted Under a*b+\n");
    else if (state == 5)
        printf("Accepted Under abb\n");
}