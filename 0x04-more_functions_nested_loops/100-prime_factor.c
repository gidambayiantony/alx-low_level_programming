#include <stdio.h>
#include <stdlib.h>

int main(void) {
  long n = 612852475143;
  long i, largest_prime = -1;

  for (i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      largest_prime = i;
      n /= i;
    }
  }

  if (n > 1) {
    largest_prime = n;
  }

  printf("%ld\n", largest_prime);
  return 0;
}




