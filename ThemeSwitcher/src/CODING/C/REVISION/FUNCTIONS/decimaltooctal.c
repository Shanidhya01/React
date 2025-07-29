#include <stdio.h>
#include <math.h>
long long convert(int n) {
  long long oct = 0;
  int rem, i = 1;
  while (n != 0) {
    rem = n % 8;
    n /= 8;
    oct += rem * i;
    i *= 10;
  }
  return oct;
}
int main() {
  int n;
  long long oct;
  printf("Enter a decimal number: ");
  scanf("%d", &n);
  oct = convert(n);
   printf("%d in decimal =  %lld in octal", n, oct);
  return 0;
}
