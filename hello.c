
# include <stdio.h>
#include <stdlib.h>
 #include <string.h>

 #define buf_size 512

 char *read_name(void){

   char buf[buf_size];
   printf("skriv: ");
   fgets(buf, buf_size, stdin);
   char* name = malloc(strlen(buf)+1);
   strcpy(name,buf);
   return name;
 }

 int get_age(){
   int age;
   printf("Enter age ");
   scanf("%d", &age);

   return age;
 }

int main(){
  char* name = read_name();
  int age = get_age();
  printf("name :%s ",name);
  printf("age: %d\n",age);
  struct person* Nablis = person_init();
  free(name);

  return 0;
}
