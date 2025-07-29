// C program to find the maximum number out of the three
// given numbers using if-else statement
#include <stdio.h>

int main()
{
	int A, B, C;

	printf("Enter the number A: ");
	scanf("%d", &A);
	printf("Enter the number B: ");
	scanf("%d", &B);
	printf("Enter the number C: ");
	scanf("%d", &C);

	// finding max using compound expressions
	if (A >= B && A >= C)
		printf("%d is the largest number.", A);

	else if (B >= A && B >= C)
		printf("%d is the largest number.", B);

	else
		printf("%d is the largest number.", C);

	return 0;
}
