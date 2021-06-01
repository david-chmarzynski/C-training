#include <stdio.h>
#include "exo5.h"

int main(void)
{

  int tableau[4] = { 15,81,22,13 };

  // BEFORE
  for(int i = 0; i<4; i++)
    printf("%d", tableau[i]);
  printf("\n");

  ordonnerTableau(tableau, 4);

  // AFTER
  for(int i = 0; i<4; i++)
    printf("%d", tableau[i]);
  printf("\n");

  return 0;
}