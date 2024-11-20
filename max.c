// i have to do this with pointer , 
// mere paas 2 number honge a aur b


#include <stdio.h>
void max(int *a,int *b);  
int main() {
int i,j;
  printf("enter i , j: \n");
  scanf("%d%d",&i,&j);

  max(&i,&j);



  return 0;
}
   
void max(int *a,int *b){

    char *res = (*a > *b)?"i is bigger ": "j is bigger";
    printf("%s\n",res);

  }
