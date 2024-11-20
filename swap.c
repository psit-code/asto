#include <stdio.h>
  int main() {
  int a , b,temp;
  printf("enter a and b value : \n");
  scanf("%d%d",&a,&b);
  int *ptrA=&a,*ptrB=&b;
  temp = *ptrA;
  *ptrA = *ptrB;
  *ptrB = temp;

  printf("a value is : %d and b is : %d\n",a,b);

  return 0;
}
