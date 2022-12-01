#include <stdio.h>

int main(void) {
	printf("Please, enter your body weight in kg: ");

	float body_weight_in_kg;
	scanf("%f", &body_weight_in_kg);

	printf("Please, enter your body height in metres: ");

	float body_height_in_metres;
	scanf("%f", &body_height_in_metres);
	
	float bmi = body_weight_in_kg / (body_height_in_metres * body_height_in_metres);

	if (bmi < 18.5) {
		printf("Your BMI value is %.2f \nIt's important to know that you are UNDERWEIGHT\n", bmi);
	} else if (bmi >= 18.5 && bmi <= 24.9) {
		printf("Your BMI value is %.2f \nIt's important to know that you have a HEALTHY weight\n", bmi);
	} else if (bmi >= 25.0 && bmi <= 29.9) {
		printf("Your BMI value is %.2f \nIt's important to know that you are OVERWEIGHT\n", bmi);
	} else if (bmi >= 30.0) {
		printf("Your BMI value is %.2f \nIt's important to know that you are OBESE\n", bmi);
	} else {
		printf("None of the if-else-if ladder were executed");
	}
	return 0;
}
