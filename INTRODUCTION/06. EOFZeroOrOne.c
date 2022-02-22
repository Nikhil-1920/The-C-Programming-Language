/*  Q.6. Verify that the expression getchar() != EOF is 0 or 1. */

// Author: Nikhil Singh
// Last Modified: 20/02/2022


#include <stdio.h>

int main(void) {

  printf("\nPressed any key? (EOF / Not EOF):> ");
  printf("\nThe expression getchar() != EOF evaluates to %d\n", getchar() != EOF);
  return 0;
}
