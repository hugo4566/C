#include <stdio.h>

typedef struct {
  int x;
  int y;
} point;

int main() {
  point * mypoint;
  
  double a[3][3];
  
  a[0][0] = 0;

  /* Dynamically allocate a new point
  struct which mypoint points to here */
  mypoint = malloc(sizeof(point));

  mypoint->x = 10;
  mypoint->y =5 ;
  printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);
  printf("%g\n",a[0][0]);
  free(mypoint);
  return 0;
}