#include <stdio.h>

int main()
{
	int a;
	printf("Enter the SIDES a: ");
	scanf("%d", &a);
    int b;
	printf("Enter the SIDES b: ");
	scanf("%d", &b);
    int c;
	printf("Enter the SIDES c: ");
	scanf("%d", &c);
    if(a+b>c && b+c>a && c+a>b){
        printf("Valid traingle");
    }
    else{
    printf("Invalid traingle");
    }
	
	return 0;
}
