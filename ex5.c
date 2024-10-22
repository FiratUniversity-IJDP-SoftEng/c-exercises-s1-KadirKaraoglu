
#include<stdio.h>
void sayHello(){
  char name[10];
  printf("what is your name?\n");
  scanf("%s",name);
  printf("Hello,%s",name);
}
int main(void){
  
  sayHello();


}
