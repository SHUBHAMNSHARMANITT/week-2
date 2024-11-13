/*THIRD PROGRAM
 TO CALCULATE ELECTRICITY BILL
 BY SHUBHAM SHARMA DATE :18 SEP 2024*/
#include<stdio.h>
int main()
{
	int unit  , extrac = 0;
	printf("Welcome\nPlease enter unit consumed :\n");
	scanf("%d",&unit);
	if(unit>200)
	    extrac = 100;
	printf("Your Electricity bill is : %d" , unit*5 + extrac);
    return 0;
}
