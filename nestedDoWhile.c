//nested do while loop example  :
#include <stdio.h>
int main(){
  int i = 1,j;
  do{
    j = 1;
    do{
      printf("%d*%d  = %d\n",i,j,i*j);
      j++;
    }
    while(j<=10);
    i++;
  }
  while(i<=2);

  return 0;
}


//output: 
1*1  = 1
1*2  = 2
1*3  = 3
1*4  = 4
1*5  = 5
1*6  = 6
1*7  = 7
1*8  = 8
1*9  = 9
1*10  = 10
2*1  = 2
2*2  = 4
2*3  = 6
2*4  = 8
2*5  = 10
2*6  = 12
2*7  = 14
2*8  = 16
2*9  = 18
2*10  = 20
