#include <stdio.h>

int main() {
  // Compiler automatically adds the \0 character
  // You must account for this!
  char string[] = "I'm literally a string.\n";

  puts(string);
}
