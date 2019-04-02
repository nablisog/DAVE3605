#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

#define childcount 3

int child_file(int childnr, int sum){
  char* filename = malloc(sizeof(char)* 1 + 1);
  sprintf(filename, "%d", childnr);
  printf("filename: %s\n",filename);
  File* f = fopen(filename, "w+");
  fwrite();
  fclose(f);

}
int child_sum(int start, int end){
  int sum=0;
  for (int i = start; i <= end; i++) {
    sum = sum + i;
  }
  return sum;
}

int child(int c, int start, int end){
  printf("Hei child %d \n" , c);
  sleep(rand()%5);
  int sum = child_sum(start,end);
  printf("child %d : sum %d\n", c , sum);
  child_file(c, sum);
  return 0;
}

int main(int argc, char const *argv[]) {
  for (int i = 0; i < childcount; i++) {
    pid_t pid = fork();
    if (pid==-1) {
      exit(EXIT_FAILURE);
    }
    else if(pid ==0){
      int start = 1 + 1000*i;
      int end = (i+1)*1000;
      child(i,start,end);
      exit(EXIT_SUCCESS);
    }
    else{
      continue;
    }
  }

  return 0;
}
