#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "composite_types.h"
#include "geometric_operators.h"

void print_triangle_sides(Triangle triangle) {
  printf("\t\n Os lados do triângulo são: \n");
  printf("\tLado A: %.2f\n", triangle.side_a);
  printf("\tLado B: %.2f\n", triangle.side_b);
  printf("\tLado C: %.2f\n", triangle.side_c);
}

float calcule_triangle_perimeter(Triangle triangle) {
  float perimeter = triangle.side_a + triangle.side_b + triangle.side_c;
  return perimeter;
}

/*
  Triangle sides D = sqrt((x - x)² + (y - y)²)
  A = point_1 e point_2     B = point_1 e point_3      C = point_2 e point_3
*/
float triangle_side(Point point_1, Point point_2) {
  float side = 0.0;
  float delta_x = 0.0;
  float delta_y = 0.0;

  delta_x = point_1.coordinate_x - point_2.coordinate_x;
  delta_y = point_1.coordinate_y - point_2.coordinate_y;
  side = sqrt(pow(delta_x,2)+pow(delta_y,2));

  return side;
}

void set_triangle_sides(Triangle *triangle) {
  float side_a = triangle_side(triangle->point_1, triangle->point_2);
  float side_b = triangle_side(triangle->point_1, triangle->point_3);
  float side_c = triangle_side(triangle->point_2, triangle->point_3);

  triangle->side_a = side_a;
  triangle->side_b = side_b;
  triangle->side_c = side_c;
}


/*
  Array positions
  A -> 0, B -> 1, C -> 2

  Validate triangles
  | b - c | < a < b + c
  | a - c | < b < a + c
  | a - b | < c < a + b

  return 0 or 1    0 if it is not a triangle  and  1 if is is a triangle
 */

int validade_triangle(Triangle triangle) {
  float a = triangle.side_a;
  float b = triangle.side_b;
  float c = triangle.side_c;
  int result = 0;

  if (abs(b-c) < a && a < b + c) {
    result++;
  }
  if (abs(a-c) < b && b < a + c) {
    result++;
  }
  if (abs(a-b) < c && c < a + b) {
    result++;
  }


  if (result == 3) {
    return 1;
  } else {
    return 0;
  }
}

/*
  Calculating triangle area by determinat
    main_diagonal = x1*y2 + x3*y1 + x2*y3
    secundary_diagonal = x3*y2* + x1*y3 + x2*y1
    D = main_diagonal - secundary_diagonal
    A = |D|/2

*/
float calcule_triangle_area(Triangle triangle) {
  float x1 = triangle.point_1.coordinate_x;
  float y1 = triangle.point_1.coordinate_y;
  float x2 = triangle.point_2.coordinate_x;
  float y2 = triangle.point_2.coordinate_y;
  float x3 = triangle.point_3.coordinate_x;
  float y3 = triangle.point_3.coordinate_y;

  float main_diagonal = (x1*y2) + (x3*y1) + (x2*y3);
  float secundary_diagonal = (x3*y2) + (x1*y3) + (x2*y1);

  float determinat = main_diagonal - secundary_diagonal;
  float area = abs(determinat)/2;
  return area;
}

