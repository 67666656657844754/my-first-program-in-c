#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

srand(time(NULL));

int x;

int min = 0;
int max = 10;

int rnum  =  rand() % 10;

printf("guess the number (0-10)\n");
printf("press ctrl + x to exit\n");

while(printf(":") && scanf("%d", &x))
{

printf("guess the number (0-10)\n");

if (x == rnum){
printf("you win\n");
break;
}
else{
printf("try again\n");
}
if(x  > max){
printf("number is to big\n");
}
if (x < min){
printf("number is to small\n");
}
}
return 0;
}
