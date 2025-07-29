// C program to find the maximum number out of the three
// given numbers using if-else statement
#include <stdio.h>

int main()
{
	int A, B, C,D;

	printf("Enter the  1 st number A: ");
	scanf("%d", &A);
	printf("Enter the 2nd number B: ");
	scanf("%d", &B);
	printf("Enter the 3rd number C: ");
	scanf("%d", &C);
    printf("Enter the 4th number D: ");
	scanf("%d", &D);

	if (A >= B && A >= C && A >= D)
		printf("%d is the largest number.", A);

	else if (B >= A && B >= C && B >= D)
		printf("%d is the largest number.", B);

	else if (C >= A && C >= B && C>= D)
		printf("%d is the largest number.", C);

	else
	
		printf("%d is the largest number.", D);

	return 0;
}
