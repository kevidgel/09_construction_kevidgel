#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct food
{
  char name[256];
  int rating;
  double price;
};

struct food * new_food(char *n, int r, double p)
{
  struct food *foo;

  foo = malloc( sizeof(struct food) );

  strncpy(foo->name, n, sizeof(foo->name)-1);
  foo->rating = r;
  foo->price = p;

  return foo;
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
