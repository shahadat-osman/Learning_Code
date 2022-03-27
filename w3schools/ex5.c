#include <stdio.h>

int main()
{                           //syntax of variable declare: type variableName = value;
    int num=20;             //Integer (whole number)
    double dec=34.5;        //Floating point number
    char letter='A';        //Character

    printf("%d\n", num);    //Here, %d, %f, %c are format specifiers
    printf("%f\n", dec);
    printf("%c\n", letter);
    return 0;
}
