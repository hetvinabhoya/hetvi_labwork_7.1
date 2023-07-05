#include<stdio.h>
#include<conio.h>

void main(){
int i,j;
int n=1;
clrscr();
for(i=1;i<=5;i++){
   for(j=1;j<=i;j++){
      printf("%d",n++);

   }
     printf("\n");
}

getch();
}

/* 1
   23
   456
   78910
   1112131415  */