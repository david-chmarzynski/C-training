#include <stdio.h>
#include "exo2.h"

int main(void)
{
  int notes[] = { 14, 15, 11, 5, 10 };
  
  printf("%f\n", moyenneTableau(notes, 5));

  return 0;
}