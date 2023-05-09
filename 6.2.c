#include <stdio.h>
#define ROWS 6
#define NUM 5
int row,num;
int main(void){
  for(row = 1;row<ROWS+1;row++){
    for(num =row;num>0;num--){
      printf("$");
    }
    printf("\n");
  }
  return 0;
}
