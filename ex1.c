#include<stdio.h>


int main(void){
int n;
printf("I chose a namber between one and five\nLets see if you can guess it??\n");

scanf("%d",&n);
if(n==3){
printf("congratulations, you guessed it right");
}
else if (1<=n && n<6 && n!=3){
printf("sorry, you didnt guess corretly");
}
else if( 1>n || n>5)
{
printf("nooo broo ,you have to enter number between 1 and 5");
}

}
