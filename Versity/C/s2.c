#include<stdio.h>
int main()
{
    int money = 650;
    if (money < 15) 
    {
	printf("go home");// go_home();
    } 
    else if (money >= 600) 
    {
	printf("buy all");// buy_all();
    } 
    else 
    {
	printf("buy tickets");// buy_tickets(money / 15);
    }
    return 0;
}