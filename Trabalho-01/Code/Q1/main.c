#include <stdio.h>
#include <stdlib.h>
#include "composite_types.h"
#include "data_entry.h"
#include "geometric_operators.h"

int main() {

  Triangle triangle;
  float perimeter;
  int valid_triangle;
  float triangle_area;

  input_data(&triangle);
  set_triangle_sides(&triangle);

  valid_triangle = validade_triangle(triangle);

  if (valid_triangle == 1) {

    printf("\n## RESULTADOS:\n");
    print_triangle_sides(triangle);
    perimeter = calcule_triangle_perimeter(triangle);
    printf("* O perímetro do triângulo é: %.2f\n", perimeter);
    triangle_area = calcule_triangle_area(triangle);
    printf("* A área de triângulo é: %.2f \n\n", triangle_area);

  } else {
    printf("Valores informados não correspondem a um triângulo válido.\n");
  }

  return 0;
}
