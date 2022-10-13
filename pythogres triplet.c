#include<stdio.h>
#include<conio.h>
#include<math.h>
void main() {
  int max; 
  int a, b; 
  printf("Enter max value of sides a, b: ");
  scanf("%d", &max);
  for (a = 1; a <= max; a++) {
    for (b = a; b <= max; b++) {
      float c = sqrt(a *a+ b * b); 
      if (c == (int) c)
        printf ("%2d %2d %2d\n", a, b, (int) c);
    }
  }
   getch();
}

