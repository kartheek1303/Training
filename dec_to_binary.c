#include <stdio.h>
int main() {
  int n, bin = 0, rem;
  printf("Enter an integer: ");
  scanf("%d", &n);
  int a=1;
  while (n != 0) {
    rem = n % 2;
    n=n/2;
    bin=bin+rem*a;
    a=a*10;
  }
  printf("bin number = %d", bin);
  return 0;
}