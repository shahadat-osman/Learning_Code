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
                state = 0;
            else
                state = 6;
            break;
        case 1:
            ch = str[i++];
            if (ch == 'a')
                state = 1;
            else if (ch == 'b')
                state = 2;
            else
                state = 6;
            break;
        case 2:
            ch = str[i++];
            if (ch == 'a')
                state = 3;
            else
                state = 6;
            break;
        case 3:
            ch = str[i++];
            if (ch == 'a')
                state = 3;
            else if (ch == 'b')
                state = 3;
            else
                state = 6;
            break;
        case 6:
            ch = str[i++];
            if(ch=='a')
                state = 1;
            else
                state = 6;
            break;
        }
    }
    if (state != 3)
        printf("Not Accepted\n");
    else if (state == 3)
        printf("Accepted\n");
}