/**
 *
 * @author Arash
 *Write a program that reads in a decimal points grades between 0-100 and
 *then converts it to the corresponding letter grade based upon the following table:
 *90-100  A
 *80-90   B
 *70-80   C
 *60-70   D
 *0-60    F
 */

#include <stdio.h>

int main()
{
	// declare varialbes
	float score;
	char grade;

	// input
	printf("Enter a score between 0 to 100 to receive the corresponding grade: ");
	scanf_s("%f", &score);

	// check score for float validity (does not test other exceptions)
	while (score < 0 || score >100)
	{
		printf("The score you entered is incorrect. You entered the score %0.2f. Please try again.", score);
		printf("\nEnter a score between 0 to 100 to receive the corresponding grade: ");
		scanf_s("%f", &score);
	}
	// convert score to letter grade
	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';
	
	// print letter grade
	printf("Your Final Grade is %c.", grade);

	return 0;
}