#include "mystruct.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  srand( time(NULL) );
  struct food *bacon;
  
  bacon = new_food("bacon", rand() % 10, 3.49);

  printf("printing bacon:\n");
  print_food(bacon);

  printf("\nprinting modified bacon:\n");
  modify_food(bacon, "newbacon", 7, 2.49);
  print_food(bacon);

  free(bacon);
}
