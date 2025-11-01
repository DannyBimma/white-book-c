#include <stdio.h>

int main() {
  int num = 15024;

  if (num % 3 == 0 && num % 5 == 0)
    printf("FizzBuzz\n");
  else if (num % 3 == 0)
    printf("Fizz\n");
  else if (num % 5 == 0)
    printf("Buzz\n");
  else
    printf("The number %d can't Fizz no Buzz\n", num);

  return 0;
}
