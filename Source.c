/*Advanced Calculator Mk4
Mathias Jönsson 11 Sep 2014
Now with added git*/

#include <stdio.h>

int main(void)
{
	float One, Two, Res;	/*Create float varialbles to use with math*/
	int Sel;				/*Create Sel variable for function selection*/

	printf("\nMk 4 Advanced Calculator\nEnter the first number");
	scanf_s("%d", &One);	/*Enter first number and save to One*/

	printf("\nSecond number\n");
	scanf_s("%d", &Two);	/*Enter second number and save to Two*/


	while (Sel != 5)		/*Run as long as 5(Sign for close) isn't in Sel variable*/
	{
		if (Sel > 5 || Sel <= 0);	/*Print error if user selects a number other then 0 - 5*/
		{
			printf("\nInvalid option, Select a valid number");
		}
		else if (Sel == 1)	/*If Sel is 1, calculate the sum and post results*/
		{
			(Res = One + Two);
			printf("\n\n%dThe sum of the numbers is: ", Res);
		}
		else if (Sel == 2)	/*If Sel is 2, calculate the difference and post results*/
		{
			if (Two = 0)
			{
				printf("\n\n***Cannot divide by zero due to logic, please choose another number to divide with***\n\n");
			}
			else
			(Res = One - Two);
			printf("\n\n%dThe difference of the numbers is; ", Res);
		}
		else if (Sel == 3)	/*If Sel is 3, calculate the quotient and post results*/
		{

			(Res = One / Two);
			printf("\n\n%dThe quotient of the numbers is: ", Res);
		}
		else if (Sel == 4)	/*If Sel is 4, calculate the product and post results*/
		{

			printf("\n\n%dThe product of the numbers is: ", Res);
		}
	}
	return 0;

}