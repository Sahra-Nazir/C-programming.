#include <stdio.h>

int main() {
  int num1 = 20, num2 = 10;
  int sum, difference, product, quotient, remainder;

  sum = num1 + num2;
  difference = num1 - num2;
  product = num1 * num2;
  quotient = num1 / num2;
  remainder = num1 % num2;

  printf("Sum: %d\n", sum);
  printf("Difference: %d\n", difference);
  printf("Product: %d\n", product);
  printf("Quotient: %d\n", quotient);
  printf("Remainder: %d\n", remainder);

  return 0;
}