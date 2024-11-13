/*SIXTH PROGRAM
TO TELL MAXIMUM VALUE TO USER 
BY SHUBHAM SHARMA DATE :18 SEP 2024*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Welcome\nPlease enter a,b,c respectvely:\n");
	scanf("%d%d%d",&a , &b , &c); 
	if(a==b&&a==c)
	    printf("%d",a);
	else if(a>b&&a>c)
	    printf("\n%d",a);
    else if (b>a&&b>c)
        printf("\n%d", b);
    else
        printf("\n%d",c);
    printf("\nGiven number will be best for Vinay's wicket");
    return 0;
}
