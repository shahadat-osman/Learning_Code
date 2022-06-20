#include<stdio.h>
int main()
{
    int day=3;

    switch (day)
    {
        case 1:
        printf("Hello World.");
        break;
        case 2:
        printf("Im there.");
        break;
        case 3:
        printf("Today offday.");
        break;
        case 4:
        printf("Far behind from goal.");
        break;
        default:
        printf("Nooooo!");
    }
    return 0;
}