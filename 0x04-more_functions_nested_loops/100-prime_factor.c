#include <stdio.h>
#include <stdlib.h>

/**
 * Finds the largest prime factor of a number.
 *
 * @param n The number to find the largest prime factor of.
 * @return The largest prime factor of n.
 */
long largest_prime(long n) {
  long largest_prime = -1;
  for (long i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      largest_prime = i;
      n /= i;
    }
  }

  if (n > 1) {
    largest_prime = n;
  }

  return largest_prime;
}

int main(void) {
  long n = 612852475143;
  long largest_prime = largest_prime(n);

  printf("The largest prime factor of %ld is %ld.\n", n, largest_prime);
  return 0;
}





