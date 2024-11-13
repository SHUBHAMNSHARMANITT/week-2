/*TENTH PROGRAM
INPUT DAY NUMBER AND WEEK DAYS
BY SHUBHAM SHARMA DATE :18 SEP 2024*/
#include<stdio.h>
int main()
{
	int year , month ;
	printf("Welcome\nPlease enter year and month respectively :\n");
	scanf("%d%d",&year , &month);
    if (month==1)
        printf("There are 31 Days in This month");
    else if(month==3)
        printf("There are 31 Days in This month");
    else if (month== 5)
        printf("There are 31 Days in This month");
    else if(month == 7)
        printf("There are 31 Days in This month");
    else if(month == 8)
        printf("There are 31 Days in This month");
    else if (month == 10)
        printf("There are 31 Days in This month");
    else if (month ==12)
        printf("There are 31 Days in This month");
    else if (month==4)
        printf("There are 31 Days in This month");
    else if (month == 6)
        printf("There are 30 Days in This month");
    else if (month == 9)
        printf("There are 30 Days in This month");
    else if (month == 11)
        printf("There are 30 Days in This month");
    else if(month==2)
       {   
	   if((year%4==0&&year%100!=0)||year%400==0)
            printf("There are 29 days in this month");
        else
            printf("There are 28 days in this month");
        }
	else
	    printf("You entered wrong month number ");
	printf("\nThank You");
	return 0 ;
}


