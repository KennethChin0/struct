#include<stdio.h>
#include <stdlib.h>
#include "headers.h"
#include <time.h>
#include <string.h>

void main(){
  struct ppg kd;
  strcpy(kd.name, "Durant");
  kd.points = 27;
  display(kd);
  printf("\nExample 1 of random player:\n");
  display(example());
  printf("\nExample 2 of random player:\n");
  display(example());
  modify(&kd, "Williamson", 40);
  printf("\nAfter Modifying Durant\n");
  display(kd);
}
