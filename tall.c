#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  /* code */
  int *tall_array;
  int tall[]= {1,2,3,4,5};
  tall_array= malloc(sizeof(int));
  for(int i =0; i < 5; i++){
    tall_array[i]=tall[i];

  }
  for(int i =0; i< 5 ; i++){
    printf("tall[%d]: %d\n",i, tall[i]);
  }
  char** str_array = malloc(argc * sizeof(char *));
  for(int i; i < argc; i++){

  }
  free(tall_array);
  return 0;
}
