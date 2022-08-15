/* A program with two functions */
#include <stdio.h>
void func1(); //prototype of function
void func2();

int  main(void)
{
    func1();
    func2();
    printf("C.");

    return 0;
}
void func1()
{
    printf("I ");
}
void func2()
{
    printf("Like ");
}