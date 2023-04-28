#include <stdio.h>
int main() {
  int n, dec = 0, rem;
  printf("Enter an integer: ");
  scanf("%d", &n);
  int a=1;
  while (n != 0) {
    rem = n % 10;
    n=n/10;
    dec=dec+(rem*a);
    a=a*2;
  }
  printf("bin number = %d", dec);
  return 0;
}