#define COMPOSITE_TYPES_H_

typedef struct point {
  float coordinate_x;
  float coordinate_y;
} Point;

typedef struct triangle {
  struct point point_1;
  struct point point_2;
  struct point point_3;
  float side_a;
  float side_b;
  float side_c;
} Triangle;
