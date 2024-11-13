/*SEVENTH PROGRAM
TO CALCULATE PERCENTAGE AND GRADE
BY SHUBHAM SHARMA DATE :18 SEP 2024*/
#include<stdio.h>
int main()
{
	int phy , chem , math , bio , comp ;
	float percentage ;
	printf("Welcome\nPlease enter marks of five subjects respectvely:\n");
	scanf("%d%d%d%d%d",&phy , &chem , &math , &bio , &comp); 
	percentage = (phy+chem+math+bio+comp)/5.0 ;
	printf("Your percentage is %f \n", percentage);
	if(percentage>=90)
	    printf("YOU got A Grade");
	else if(percentage>=80)
	    printf("You got B Grade");
    else if (percentage>=70)
        printf("You got C Grade");
    else if (percentage >=60)
        printf("You got D Grade");
    else if (percentage>= 40)
        printf("You got E Grade");
    else
        printf("You got F Grade");
    printf("\nThank You");
    return 0;
}
