/*FIRST PROGRAM
TO FIND LARGEST NUMBER AMONG THREE
BY SHUBHAM SHARMA DATE :18 SEP 2024*/
#include<stdio.h>
int main()
{
	int a ,b ,c ;
	printf("Welcome\nPlease enter three mumbers a , b , c :\n");
	scanf("%d%d%d",&a , &b , &c);
    if(a>b&&a>c)
        printf("a is largest \nThank you");
    else if(b>a&&b>c)
        printf("b is largest\nThank You");
    else
        printf("c is largest");
    return 0;
}
