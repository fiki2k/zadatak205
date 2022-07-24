/*  Program treba ispisat Floydov trokut koristeci for petlju.  */

#include<stdio.h>

int main(){

  int i,j,d,k=1;

  printf("Unesi domet : ");
  scanf("%d",&d);

  printf("\nFLOYD-OV TROKUT : \n\n");
  for(i=1;i<=d;i++){
      for(j=1;j<=i;j++,k++)
           printf(" %d",k);
      printf("\n");
  }

  return 0;
}

