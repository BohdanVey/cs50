#include <stdio.h>
 // function prototype
 int cube(int a);
 
 int main(void)
 {
     int x = 2;
     printf("x is now %i\n", x);
    printf("Cubing...\n");
    x = cube(x);
    printf("Cubed!\n");
    printf("x is now %i\n", x);
}
/**
17 * Cubes argument.
18 */
int cube(int n)
{
  return n * n * n;
