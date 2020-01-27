#include <stdio.h>
float tri(float,float);
float circle(float);
float sq(float);
float rect(float,float);
void main()
{
    float  L,H,l,b,r,a,area;
    int i;
  printf("Key: ");
  printf("\n 1.Right Triangle.");
  printf("\n 2.Circle.");
  printf("\n 3.Square.");
  printf("\n 4.Rectangle.");
  printf("\n Goementry of the area u wanna find (1-4): ");
  scanf("%d",&i);
  switch(i)
  {
      case 1:
      printf("Input length nd height:");
      scanf("%f %f",&L,&H);
      area=tri(L,H);
      printf("Area of the triangle = %f sq units.",area);
      break;
      case 2:
      printf("Input the radius:");
      scanf("%f",&r);
      area=circle(r);
      printf("Area of the circle = %f sq units.",area);
      break;
      case 3:
      printf("Input the length of square:");
      scanf("%f",&a);
      area=sq(a);
      printf("Area of the square = %f sq units.",area);
      break;
      case 4:
      printf("Input the length nd breadth of rect:");
      scanf("%f %f",&l,&b);
      area=rect(l,b);
      printf("Area of the Rectanglei is = %f sq units.",area);
      break;
      default:
      printf("PLEASE!! have a look at the KEY CAREFULLY!!");
      
  }
}
float tri(float x,float y) 
{
   float p,area1;
    p=x*y;
    area1=p/2;
    return area1;
     
    
}
float circle(float x)
{
    float area1;
    area1=3.14*x*x;
    return area1;
    
}
float sq(float x)
{
    float area1;
    area1=x*x;
    return area1;
}
float rect(float x,float y)
{
    float area1;
    area1=x*y;
    return area1;
}


