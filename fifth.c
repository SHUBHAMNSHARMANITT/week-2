/*FIFTH PROGRAM
TO CHECK THREE NUMBERS ARE EQUAL OR NOT
 BY SHUBHAM SHARMA DATE :18 SEP 2024*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Welcome\nPlease enter a,b,c respectvely:\n");
	scanf("%d%d%d",&a , &b , &c); 
	if(a==b&&a==c)
	    printf("ALL THREE NUMBERS ARE EQUAL\nThank you ");
	else
	    printf("ALL THREE NUMBERS ARE NOT SAME \nThank You");

    return 0;
}
