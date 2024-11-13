/*EIGHTH PROGRAM
TO CHECK TYPE OF TRIANGLE 
BY SHUBHAM SHARMA DATE :18 SEP 2024*/
#include<stdio.h>
int main()
{
	int a , b , c ;
	printf("Welcome\nPlease enter three valid sides of a triangle :\n");
	scanf("%d%d%d",&a , &b , &c); 
    if (a==b&&b==c)
        printf("These are sides of Equilateral triangle\n");
    else if (a==b||a==c||b==c)
        printf("These are the sides of Isoscles Triangle\n");
    else 
        printf("These are the sides of Scalene Triangle\n");
    printf("\nThank You");
    return 0;
    
}


