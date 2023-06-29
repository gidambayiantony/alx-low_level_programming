#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: The input string.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{
  int i, j;
  char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

  for (i = 0; s[i] != '\0'; i++)
  {
    for (j = 0; input[j] != '\0'; j++)
    {
      if (s[i] == input[j])
      {
        s[i] = output[j];
        break;
      }
    }
  }

  return s;
}


