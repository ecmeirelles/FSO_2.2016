#include <stdio.h>
#include <stdlib.h>
#include "composite_types.h"

int main() {

  Triangle triangle;
  float *sides;
  float perimeter;
  int valid_triangle;
  float triangle_area;


  input_data(&triangle);
  //print_triangle(triangle);

  set_triangle_sides(&triangle);
  print_triangle_sides(triangle);

  perimeter = calcule_triangle_perimeter(triangle);
  printf("Triangle perimeter: %.2f\n", perimeter);

  valid_triangle = validade_triangle(triangle);

  if (valid_triangle == 1)
  {
    printf("It is a valid triangle\n");
  } else {
    printf("It is not a valid triangle\n");
  }

 // triangle_area = calcule_triangle_area(triangle);
  printf("AREA %f 2\n", calcule_triangle_area(triangle));
  //printf("Triangle area is: %f\n", triangle_area);

  return 0;
}
