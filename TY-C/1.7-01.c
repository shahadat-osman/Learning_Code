/* A program with three functions */
#include <stdio.h>
void func1();
void func2();
void func3();

int  main(void)
{
    func1();
    func2();
    func3();

    return 0;
}
void func2()
{
    printf("Like ");
}
void func1()
{
    printf("I ");
}
void func3()
{
    printf("You.");
}