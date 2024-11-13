/*NINTH PROGRAM
INPUT DAY NUMBER AND WEEK DAYS
BY SHUBHAM SHARMA DATE :18 SEP 2024*/
#include<stdio.h>
int main()
{
	int a ;
	printf("Welcome\nPlease enter DAY NUMBER from 1 to 7 :\n");
	scanf("%d",&a);
	printf("The day for corresponding day number is : ");
    if (a==1)
        printf("Monday");
    else if (a==2)
        printf("Tuesday");
    else if(a==3)
        printf("Wednesday");
    else if (a==4)
        printf("Thursday");
    else if (a==5)
        printf("Friday");
    else if (a==6)
        printf("Saturday");
    else
        printf("Sunday");
    printf("\nThank You");
    return 0;
}


