/*  Program treba ispisat Floydov trokut koristeci for petlju.  */

#include<stdio.h>

int main(){

  int i,j,r,k=1;

  printf("Unesi domet : ");
  scanf("%d",&r);

  printf("\nFLOYD-OV TROKUT : \n\n");
  for(i=1;i<=r;i++){
      for(j=1;j<=i;j++,k++)
           printf(" %d",k);
      printf("\n");
  }

  return 0;
}

