#include <stdio.h>

int a, b;

void sum(void) {
  extern int a, b; // The extern keyword makes it look outside the function for
                   // any other variables

  a = 91;
  b = 7;
  printf("%d + %d = %d\n", a, b, a + b);
}

int main() {
  extern int a, b;

  puts("Calling the sum() function:");
  sum();
  puts("And in main():");
  printf("%d + %d = %d\n", a, b, a + b);

  return (0);
}
