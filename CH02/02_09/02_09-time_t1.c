#include <stdio.h>
#include <time.h>

// typedef usage: typedef data_type new_defintion
//  Why is this important: data_types may be inconsistent across systems, you
//  will want to maintain a consistent size across multiple implementations

int main() {
  time_t now; // time_t is a type defined in the time.h file

  time(&now);
  printf("%s", ctime(&now));

  return (0);
}
