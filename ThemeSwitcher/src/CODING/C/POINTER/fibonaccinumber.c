// #include<stdio.h>
// int sum =1;
//     int a=1;
//     int b=1;
//     for (int i =1;i<=n-2;i++){
//          sum = a+b;
//          a=b;
//          b=sum;
         
//         }
       
// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//    printf("the %d th fibonacci number is %d\n",n,sum);
//     return 0;
// }
#include <stdio.h> 

int fibonacci(int n) 
{ 
	if(n == 0){ 
		return 0; 
	} 
	else if(n == 1){ 
		return 1; 
	} 
	else{ 
		return fibonacci(n-2) + fibonacci(n-1); 
	} 
} 

int main() { 
    int n; 
	 printf("Enter a number: ");
    scanf("%d", &n); 
	for(int i = 1; i<= n; i++) 
	{ 
		 printf("the %d th fibonacci number is %d\n",i,fibonacci);
	} 
	return 0; 
} 

