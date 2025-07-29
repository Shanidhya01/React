#include <stdio.h>
int main()
{
	int A;
	printf("Enter the age of A : ");
	scanf("%d", &A);
	int B;
    printf("Enter the age of B: ");
	scanf("%d", &B);
	int C;
    printf("Enter the number C: ");
	scanf("%d", &C);
	if (A < B && A < C)
		printf("%d is the youngest", A);

	else if (B < A && B < C)
		printf("%d is the youngest", B);

	else
		printf("%d is the youngest", C);

	return 0;
}
