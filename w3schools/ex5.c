#include <stdio.h>

int main()
{
    int num=20;         //syntax of variable declare: type variableName = value;
    double dec=34.5;
    char letter='A';

    printf("integer=%d\ndecimal=%lf\nAlphabet=%c\n", num,dec,letter);  //Here, %d, %f, %c are format specifiers

    return 0;
}
