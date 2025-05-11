#include <stdio.h>

int main() {
  // Logical AND (&&)
  int a = 10;
  int b = 5;
  int result_and = (a > 5) && (b < 10);
  printf("Logical AND: %d\n", result_and); // Output: 1 (true)

  // Logical OR (||)
  int x = 0;
  int y = 7;
  int result_or = (x > 0) || (y < 10);
  printf("Logical OR: %d\n", result_or); // Output: 1 (true)

  // Logical NOT (!)
  int z = 1;
  int result_not = !(z == 0);
  printf("Logical NOT: %d\n", result_not); // Output: 1 (true)

  return 0;
}