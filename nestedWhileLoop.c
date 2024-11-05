//nested while loop example:

#include <stdio.h>
int main(){
  int i = 1, j = 1;
  while (i<=3){
    printf("outer loop iteration %d\n",i);
    while(j<=3){
      printf("inner loop iteration %d\n",j);
      j++;
    }
    j = 1;
    i++;
    
  }
  return 0;
}

//Output: 

outer loop iteration 1
inner loop iteration 1
inner loop iteration 2
inner loop iteration 3
outer loop iteration 2
inner loop iteration 1
inner loop iteration 2
inner loop iteration 3
outer loop iteration 3
inner loop iteration 1
inner loop iteration 2
inner loop iteration 3
