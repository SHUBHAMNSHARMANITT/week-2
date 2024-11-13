/*FOURTH PROGRAM
 TO CALC0ULATE SALARY OF AN EMPLOYEE
 BY SHUBHAM SHARMA DATE :18 SEP 2024*/
#include<stdio.h>
int main()
{
	int base_sal , da , hra;
	printf("Welcome\nPlease enter base salary , DA and HRA respectively :\n");
	scanf("%d%d%d",&base_sal , &da , &hra);
	printf("Your salary is : %d\nThank you", base_sal+da+hra);
    return 0;
}
