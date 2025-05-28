#include <stdio.h>

char *myname(void) {
  static char me[] =
      "Dan Gookin"; // Making this static retains its value after function ends

  // no static keyword of me --> Returns a local variable (deleted after
  // function ends)
  return (me);
}

int main() {
  printf("This course's author is %s\n", myname());

  return (0);
}
