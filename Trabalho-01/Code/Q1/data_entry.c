#include <stdio.h>
#include <stdlib.h>
#include "composite_types.h"
#include "data_entry.h"

void input_data(Triangle *triangle) {
  printf("Please enter the first coordinate X: \n");
  scanf("%f", &triangle->point_1.coordinate_x);

  printf("Please enter the first coordinate Y: \n");
  scanf("%f", &triangle->point_1.coordinate_y);

  printf("Please enter the second coordinate X: \n");
  scanf("%f", &triangle->point_2.coordinate_x);

  printf("Please enter the second coordinate Y: \n");
  scanf("%f", &triangle->point_2.coordinate_y);

  printf("Please enter the third coordinate X: \n");
  scanf("%f", &triangle->point_3.coordinate_x);

  printf("Please enter the third coordinate Y: \n");
  scanf("%f", &triangle->point_3.coordinate_y);

}

void print_triangle_coordinates(Triangle triangle) {
  printf("first coordinate X: %.1f\n", triangle.point_1.coordinate_x);
  printf("first coordinate Y: %.1f\n", triangle.point_1.coordinate_y);
  printf("second coordinate X:%.1f \n", triangle.point_2.coordinate_x);
  printf("second coordinate Y:%.1f \n", triangle.point_2.coordinate_y);
  printf("third coordinate X: %.1f\n", triangle.point_3.coordinate_x);
  printf("third coordinate Y: %.1f\n", triangle.point_3.coordinate_y);
}
