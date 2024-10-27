#include <stdio.h>
int main()
{
	float number1 = 1.0000;


	float number2 = 1.0000;
	float number3 = 1.0000;

		float epsilon = 0.0001;

	float number4 = number1 + epsilon;
	float number5 = number1 - epsilon;

		float number6 = 1.0000;
		float number7 = 1.0000;
	//now creating a loop for printin the values for 20000 times
	
	for(int i = 1; i<=20000; i++)
	
	
	{
		printf("%d",i);
		printf("\t");
	
		printf("%f",number1);
		printf("\t");
		
		printf("%f",number6);
		printf("\t");
		number6 = number6*number4;


		printf("%f",number7);
		number7 = number7*number5;
		printf("\n");

	}
	return 0;
}