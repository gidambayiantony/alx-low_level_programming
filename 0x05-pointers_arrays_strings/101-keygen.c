#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Seed the random number generator with the current time.
  srand(time(NULL));

  // Create a character array to store the password.
  char password[10];

  // Generate a random password.
  for (int i = 0; i < 10; i++) {
    int random_number = rand() % 4;

    // Select a character from the appropriate array.
    switch (random_number) {
      case 0:
        password[i] = '0' + rand() % 10;
        break;
      case 1:
        password[i] = 'a' + rand() % 26;
        break;
      case 2:
        password[i] = 'A' + rand() % 26;
        break;
      case 3:
        password[i] = '-';
        break;
    }
  }

  // Print the password.
  printf("%s\n", password);

  return 0;
}

