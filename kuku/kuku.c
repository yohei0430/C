#include <stdio.h>

int main(void){

  int i,j;
  
  printf("---------九九の表------------\n");
  for(i=1;i<10;i++){
    for(j=1;j<10;j++)
      printf("%3d",i*j);
      putchar('\n');
    
}
  return 0;
}
