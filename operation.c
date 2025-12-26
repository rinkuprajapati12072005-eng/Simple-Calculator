#include <stdio.h>
#include<math.h>
double divide(double a,double b);
double modulus(double a,double b);
int main()
{
	double num1,num2,result;
	int choice;
	while(1)
	{
		printf("\n\n----------------------------------------------------\n");
		printf("\n**********Welcome to Simple Calculator********** \n\n");
		printf("Choose the following option:- \n");
		printf("1. Addition\n");
		printf("2. Substraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Modulus\n");
		printf("6. Power\n");
		printf("7. Quit\n");

		printf("Now,enter the choice:- ");
		scanf("%d",&choice);

		if(choice == 7)
		{
			break;
		}

		if(choice < 1 || choice > 7)
		{
			fprintf(stderr,"\nInvalid menu choice.\n");
			continue;
		}
 
		printf("\nPlease,enter the first number :- ");
        	scanf("%lf",&num1);
        	printf("Now,enter the second number :- ");
        	scanf("%lf",&num2);
	
		switch(choice)
		{
			case 1:
				result = num1 + num2;
			break;
			case 2:
                        	result = num1 - num2;
                	break;	
			case 3:
                        	result = num1 * num2;
               	 	break;
			case 4:
				 result = divide(num1,num2);
			break;	
			case 5:
				result = modulus(num1,num2);
                	break;
			case 6:
				result = pow(num1,num2);
			break;
		}

		if(!isnan(result))
		{
		 	printf("\nResult of operation is: %lf",result);
		}
			  
	}
	return 0;
}
double divide(double a,double b)
{
	 if(b == 0)
         {
               fprintf(stderr,"\nError! Invalide arguments for division.\n");
               return NAN;

         }
         else
         {
              return (a / b);
         }
}

double modulus(double a,double b)
{
         if(b == 0)
         {
               fprintf(stderr,"\nError! Invalide arguments for division.\n");
               return NAN;

         }
         else
         {
              return (a / b);
         }
}

