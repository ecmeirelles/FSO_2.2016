#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Assumindo-se que o triangulo possua um ângulo de 90º

// , receba do usuário 3 coordenadas
// cartesianas dos vértices de um triângulo e, como saída, calcule e imprima na tela o tamanho
// dos lados,o perímetro e a área do triângulo. Sua implementação deverá atender os seguintes
// requisitos:

int set_value(int number1, int number2) {
  int value = 0;

  if(number1 > number2) {
    value = number1 - number2;
  }
  else {
    value = number2 - number1;
  }

  return value;
}

int calculate_triangle_side(int first_coordinate_x, int first_coordinate_y, int second_coordinate_x,
  int second_coordinate_y, int third_coordinate_x, int third_coordinate_y){
  int side_value = 0;

  // Calculate side A
  if(first_coordinate_x == second_coordinate_x) {
    side_value = set_value(first_coordinate_y, second_coordinate_y);
  }

  else if(first_coordinate_x ==  third_coordinate_x) {
    side_value = set_value(first_coordinate_y, third_coordinate_y);

  }

  else if(second_coordinate_x == third_coordinate_x) {
    side_value = set_value(second_coordinate_y, third_coordinate_y);
  }

  else {
    side_value = -1;
  }

  return side_value;
}

float* find_triangle_sides(int first_coordinate_x, int first_coordinate_y, int second_coordinate_x,
  int second_coordinate_y, int third_coordinate_x, int third_coordinate_y) {
  int side_a = 0;
  int side_b = 0;
  float hypotenuse = 0;

  // Find side A
  side_a = calculate_triangle_side(first_coordinate_x, first_coordinate_y, second_coordinate_x, second_coordinate_y, third_coordinate_x, third_coordinate_y);

  // Find side B
  side_b = calculate_triangle_side(first_coordinate_y, first_coordinate_x, second_coordinate_y, second_coordinate_x, third_coordinate_y, third_coordinate_x);

  if (side_a < 0 || side_b < 0)
  {
    printf("Invalid coordinates!\n");
    exit(0);
  }

  // Find Hypotenuse
  int hypotenuse_aux = pow(side_a, 2) + pow(side_b, 2);
  hypotenuse = sqrt(hypotenuse_aux);

  float triangle_sides[] = {side_a, side_b, hypotenuse};

  return triangle_sides;
}

void print_triangle_sides(float *triangle_sides) {
  int i;

  for (i = 0; i < 3; i++) {
      printf(" Lados: %.2f\n", i, *(triangle_sides + i));
  }
}

int main() {

  int first_coordinate_x = 0;
  int first_coordinate_y = 0;
  int second_coordinate_x = 0;
  int second_coordinate_y = 0;
  int third_coordinate_x = 0;
  int third_coordinate_y = 0;

  // Data entries
  printf("Please enter the first coordinate X: \n");
  scanf("%d", &first_coordinate_x);

  printf("Please enter the first coordinate Y: \n");
  scanf("%d", &first_coordinate_y);

  printf("Please enter the second coordinate X: \n");
  scanf("%d", &second_coordinate_x);

  printf("Please enter the second coordinate Y: \n");
  scanf("%d", &second_coordinate_y);

  printf("Please enter the third coordinate X: \n");
  scanf("%d", &third_coordinate_x);

  printf("Please enter the third coordinate Y: \n");
  scanf("%d", &third_coordinate_y);

  // Triangle sides
  float *triangle_sides_ptr = find_triangle_sides( first_coordinate_x, first_coordinate_y, second_coordinate_x,
   second_coordinate_y,  third_coordinate_x, third_coordinate_y);

  print_triangle_sides(triangle_sides_ptr);

  return 0;
}
