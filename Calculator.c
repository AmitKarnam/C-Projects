#include <stdio.h>
#include<math.h>
int add(int,int);
int subtract(int,int);
int multiply(int,int);
int divide(int,int);
int power(int,int);

int main()
{
    int i,a,b,res;                           
    printf("\n                  !!!  INTEGER  CALCULATOR !!!          \n");
    printf("\nMathematical operations avilable (Provided below is the key):");
    printf("\n");
 
    printf("\n1 = '+'");
    printf("\n2 = '-'");
    printf("\n3 = '*'");
    printf("\n4 = '/'");
    printf("\n5 = 'power operator'");
    printf("\n");
    printf("\nEnter the operation to be performed (1-5):");
    scanf("%d",&i);
   

    switch(i)
    {
    case 1:
        printf("\n");
        printf("Enter two numbers to be ADDED (with space between them):");
        scanf("%d %d",&a,&b);
        res=add(a,b);
      
        printf("\nResult of ADDITION=%d units",res);
        break;
    case 2:
        printf("\n");
        printf("Enter two numbers to be SUBTRACTED (with space between them):");
        scanf("%d %d",&a,&b);
        res=subtract(a,b);
    
        printf("\nResult of SUBTRACTION=%d units",res);
        break;
    case 3:
        printf("\n");
        printf("Enter two numbers to be MULTIPLIED (with space between them):");
        scanf("%d %d",&a,&b);
        res=multiply(a,b);
                printf("\nResult of MULTIPLICATION=%d units",res);
        break;
    case 4:
        printf("\n");
        printf("Enter two numbers to b DIVISION (with space between them):");
        scanf("%d %d",&a,&b);
        res=divide(a,b);
      
        printf("\nResult of DIVISION=%d units",res);
        break;
    case 5:
        printf("\n");
        printf("Enter the base and power(with space between them):");
        scanf("%d %d",&a,&b);
        res=power(a,b);
  
        printf("\nThe base %d to the power %d is %d",a,b,res);
        break;
    default:
        printf("\nNo mathematical operation found and do look at the key CAREFULLY!!");
    }
}
int add(int x,int y)
{
    int add1;
    add1=x+y;
    return (add1);
}
int subtract(int x,int y)
{
    int sub1;
    
        sub1=x-y;
    
    
    return (sub1);
}
int multiply(int x,int y)
{
    int mul1;
    mul1=x*y;
    return (mul1);
}
int divide(int x,int y)
{
    int div1;
    div1=x/y;
    return (div1);
}
int power(int x,int y)
{
    int pow1;
    pow1=pow(x,y);
    return pow1;
}


