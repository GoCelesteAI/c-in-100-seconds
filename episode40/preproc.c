#include <stdio.h>

// #define — constants
#define PI 3.14159
#define MAX_SIZE 100

// #define — macro with parameters
#define SQUARE(x) ((x) * (x))

int main() {
  printf("PI: %f\n", PI);
  printf("MAX_SIZE: %d\n", MAX_SIZE);
  printf("SQUARE(5): %d\n", SQUARE(5));

  // #ifdef — conditional compilation
#ifdef DEBUG
  printf("Debug mode is ON\n");
#else
  printf("Debug mode is OFF\n");
#endif

  // #ifndef — include guard pattern
#ifndef VERSION
  #define VERSION "1.0.0"
#endif
  printf("Version: %s\n", VERSION);

  // #if — numeric conditions
#if MAX_SIZE > 50
  printf("Large buffer mode\n");
#else
  printf("Small buffer mode\n");
#endif

  return 0;
}
