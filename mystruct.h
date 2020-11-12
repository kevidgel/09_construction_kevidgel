#ifndef MYSTRUCT_H
#define MYSTRUCT_H

struct food
{
  char name[256];
  int rating;
  double price;
};

struct food * new_food(char *n, int r, double p);
void modify_food(struct food *ood, char *n, int r, double p);
void print_food(struct food *ood);

#endif
