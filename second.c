/*SECOND PROGRAM
TO CHECK WEATHER LEAP YEAR OR NOT
BY SHUBHAM SHARMA DATE :18 SEP 2024*/
#include<stdio.h>
int main()
{
	int a ;
	printf("Welcome\nPlease enter YEAR :\n");
	scanf("%d",&a);
    if((a%4==0&&a%100 != 0)||a%400==0)
        printf("Entered year is a leap year\nThank You");
    else
        printf("Entered year is not a leap year \nThank You");
    return 0;
}
