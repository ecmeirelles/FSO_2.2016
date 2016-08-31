#include <stdio.h>
#include <stdlib.h>
#include "composite_types.h"
#include "data_entry.h"

void input_data(Triangle *triangle) {
  printf("\t\nInforme a 1º coordenada X: ");
  scanf("%f", &triangle->point_1.coordinate_x);

  printf("\t\nInforme a 1º coordenada Y: ");
  scanf("%f", &triangle->point_1.coordinate_y);

  printf("\t\nInforme a 2º coordenada X: ");
  scanf("%f", &triangle->point_2.coordinate_x);

  printf("\t\nInforme a 2º coordenada Y: ");
  scanf("%f", &triangle->point_2.coordinate_y);

  printf("\t\nInforme a 3º coordenada X: ");
  scanf("%f", &triangle->point_3.coordinate_x);

  printf("\t\nInforme a 3º coordenada Y: ");
  scanf("%f", &triangle->point_3.coordinate_y);

}

void print_triangle_coordinates(Triangle triangle) {
  printf("1º coordenada X: %.1f\n", triangle.point_1.coordinate_x);
  printf("1º coordenada Y: %.1f\n", triangle.point_1.coordinate_y);
  printf("2º coordenada X:%.1f \n", triangle.point_2.coordinate_x);
  printf("2º coordenada Y:%.1f \n", triangle.point_2.coordinate_y);
  printf("3º coordenada X: %.1f\n", triangle.point_3.coordinate_x);
  printf("3º coordenada Y: %.1f\n", triangle.point_3.coordinate_y);
}
