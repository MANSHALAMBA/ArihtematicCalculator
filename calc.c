#include<stdio.h>

int main()
{
	int num1,num2,opt;
	
	printf("Enter the first Integer:\n");
	scanf("%d",&num1);
	printf("Enter the second Integer:\n");
	scanf("%d",&num2);
    printf("Enter an correct option -> 1:addition 2: subtraction 3: multiplication 4: division -> \n");
	scanf("%d",&opt);
	
		switch(opt)
		{
			case 1:printf("\nAddition of  %d and %d is: %d",num1,num2,num1+num2);
			break;
			case 2:printf("\nSubstraction of %d  and %d is:  %d",num1,num2,num1-num2);
			break;
			case 3:printf("\nMultiplication of %d  and %d is:  %d",num1,num2,num1*num2);
			break;  
			case 4: 
			if(num2==0)
			{
				printf("OOps Devide by zero\n");
			}
			else
			{
				printf("\n Division of %d  and %d is:  %d",num1,num2,num1/num2);
			}  
			break;
			
			default:printf("\n Enter correct option\n");
			
		}
        return 0;
	
	
}