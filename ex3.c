#include<stdio.h>
int main(void){
char str[3] ;
printf("Do you have a 'cat' or 'dog'?\n");
  do{
scanf("%s",str);
if(strcmp(str , "cat") ==0){
    printf("meow\n");
  break;

}
 else if(strcmp(str , "dog") ==0){
    printf("woofff\n");
   break;
}
  else {
    printf("I didnt understant what you wrote,please try again\n");
  }
  }while(strcmp(str , "cat") !=0 && strcmp , (str , "dog" !=0));
  }
