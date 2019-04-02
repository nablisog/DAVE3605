#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  char** array;
  array=malloc(sizeof(char*)*(argc+1));
  for (int i = 0; i < argc; i++) {
    array[i]=malloc(strlen(argv[i])+1);
    strcpy(array[i],argv[i]);
  }
  array[argc]=NULL;
  for (int i = 0; i < argc; i++) {
    printf("array[%d]: %s\n", i, array[i]);
  }
  free(array);
  return 0;
}
