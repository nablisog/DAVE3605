#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){

  if(argc != 4){
      printf(" Error 3 arguments must be given \n");
      return -1;
  }
  char* setning=argv[1];
  char first=*argv[2];
  char second=*argv[3];
  int length = (int)strlen(argv[1]);
  

  char newString[length];
  for(int i=0;i<length;i++){
      char s=setning[i];
       if(s == first){
           newString[i]= second;
       }
       else if(s == second){
           newString[i]=first;
       }
       else{
           newString[i]=s;
       }
        
  }
    printf(" %s \n",newString);
    return 0;
}