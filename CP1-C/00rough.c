#include<stdio.h>
int main()
{
    int num=0;

    for(num=0;num<=10;num++)
    {
        if(num==5)
        {
            continue;
        }
        printf("%d--Dope\n", num);
    }
    

   
    return 0;
}