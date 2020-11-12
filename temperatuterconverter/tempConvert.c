
/* this will ask user to choose which conversion they would lke to do
 *
 */

#include <stdio.h>
#include <stdlib.h> // this will be used to exit the program with ease 

int main(void)
{
	float fahr;
	float cel;
	float kal;
	int choice;
	float f;
	float in;

	printf("Welcome to the unit converter\n\t");
	printf("Below are your choices\n\t");
	printf("1.Celsius\n\t");
	printf("2.Fahrenheit\n\t");
	printf("3 Feet\n\t");
	printf("4.Inches\n\t");
	printf("5.exit\n\t");


	do {
		printf("Enter your choice here");
		scanf("%d", &choice);
		
		switch(choice)
		{	
		




		case(1):
		{
			
			printf("Enter the amount to convert to Celsius\n");
			
			cel = 5 *(fahr-32) /9;
			scanf("%f",&fahr);


			printf("celsius is %f", cel);

			break;
		}

		case(2):
		{	
			printf("Enter the amount of you want convert from Celsius to Fahrenheit\n");

			scanf("%f", &cel);
			
			fahr = 9* (cel/5)+35;

			printf("Temperature is\n");
			printf("%f",fahr);
			
			break;
		}

		case(3):
		{
			printf("Enter the amount for feet ");
			
			scanf("%f",&in);

			printf("%f %f is feet", in , f);
			
			f = (in/12);
		
			break;
		}
		case(4):
		{
			printf("Enter the amount you want for inches");

			scanf("%f", &f);
			in = (12*f);

			printf("%f %f is ", f, in ); 
			break;

		}

		case(5):
		{
			exit(1);

		}

		default: 
		{
			printf("\n Try again. Your choice is not valid");
			break;

		}
			


		

	




		

		}
	
	} while((choice < 1) || (choice > 5));


	return 0;
}




























































		

			






























