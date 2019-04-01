#include <stdio.h>

int main(void) {
  printf("ONLY INTERGER NUMBERS ARE ALLOWED\n");
  int input = 10;
  int array[input];//size of the array

  for(int i = 0; i < input; i++){

    printf("Input number %d: ", i+1);

    scanf("%d", &array[i]);
  }

  int max=array[0];
  int min=array[0];

  for(int i=0;i < input;i++){
    
    if(array[i] < min){
      min=array[i];
    }
    else if(array[i]> max){
      max=array[i];
    }
  }
  printf("Minimum number from the inputs %d\n",min);
  printf("Maximum number from the inputs %d\n",max);
  return 0;
}
