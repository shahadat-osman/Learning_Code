#include<stdio.h>
int main()
{
    int num=0;

    for(num=1; num<10; num++)
    {
        {if(num==4)
        
            continue;
        }
        printf("%d dope\n", num);
    }
    return 0;
}