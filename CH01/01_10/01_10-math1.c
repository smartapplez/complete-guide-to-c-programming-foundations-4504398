#include <stdio.h>
/* The math header file contains definitions for M_PI
   and the sin() function. It does not contain the
   code for the sin() function. The code lies in the
   math library file */
#include <math.h>
// You would want to look at the manpage of the "sin" function
// Be sure to focus on the library it will use

/*
 * The header files with "<>" are found at /usr/include/ directory
 * They include other include files, function prototypes, and definitions
 * Header files cannot include libraries
 * They do help with using functions in the C code
 *
 * Libraries are located in /usr/lib/ directory. They are the binaries that are
 * used to perform functions
 *
 * To use a library, you must include it in the gcc command when you compile it.
 * Example: For math functions, you must include the "-lm" to include the math
 * library upon compilation Example compile: "gcc -lm -o sin-program
 * sin-program.c"
 *
 * Header files are not the same as libraries
 */

int main() {
  int w;
  for (w = 0; w < 10; w++) {
    printf("%.2f\n", sin(M_PI / (w + 1)));
  }
  return 0;
}
