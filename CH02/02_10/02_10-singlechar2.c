#include <stdio.h>

int main() {
  char greetings[4] = {'H', 'i', '\x21', '\0'};

  puts(greetings); // Remember that strings terminate using the \0 (null
                   // terminating) character
  return 0;
}
