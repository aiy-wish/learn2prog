#include <stdio.h>
#include <stdlib.h>

void rotate(char matrix[10][10]){
  for(int i=0; i<10; i++){
    for(int j =10-1; j>=0; j--){
      printf("%c", matrix[j][i]);
    }
    printf("\n");
  }
  exit(0);
}
