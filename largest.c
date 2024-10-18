#include <stdioh>
int main()
{
int x, y,z;
printf("enter x value: \n",x);
scanf("%d",&x);
printf("enter y value: \n",y);
scanf("%d",&y);

printf("enter z value: \n",z);
scanf("%d",&z);


if(x>y && x>z){
  printf("x is largest");
}
else{
  
  if(y>x && y>z){
    printf("y is largest");
    
  }
  else{
    printf("z is largest");
  }
  return 0;
}
}
