#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystruct.h"

struct food * new_food(char *n, int r, double p)
{
  struct food *foo;

  foo = malloc( sizeof(struct food) );

  strncpy(foo->name, n, sizeof(foo->name)-1);
  foo->rating = r;
  foo->price = p;

  return foo;
}

void modify_food(struct food *ood, char *n, int r, double p)
{
  strncpy(ood->name, n, sizeof(ood->name)-1);
  ood->rating = r;
  ood->price = p;
}

void print_food(struct food *ood)
{
  printf("name: ");
  int i;
  for(i=0; *(ood->name+i); i++) {
    printf("%c", *(ood->name+i));
  }
  printf("\n");
  printf("rating: %d\n", ood->rating);
  printf("price: %lf\n", ood->price);
}
