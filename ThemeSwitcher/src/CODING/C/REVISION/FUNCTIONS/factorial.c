#include <stdio.h>

int factorial(int n) {
  if (n != 0)
    return n * factorial(n - 1);
  else
    return 1;
}

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("FACTORIAL = %d", factorial(num));
  return 0;
}


