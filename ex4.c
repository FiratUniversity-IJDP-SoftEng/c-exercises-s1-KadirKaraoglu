#include<stdio.h>
int main(void){
  
  int a =10;
  for(int i=0;i<a;i++){
    int n=i%2;
    if (n==0){
      printf("%d",i);
    }
  }

}

