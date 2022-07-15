#include<stdio.h>
#include<conio.h>
void arm(int);
void main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    arm(n);
}
 void arm(int h)                     //TSRN
 {
     int b,c=0,i,a;
     a=h;
    while(a!=0)
        {
          b=a%10;
          c=c+b*b*b;
          a=a/10;
        }
        if(h==c)
            printf("%d is a Armstrong Number",h);
        else
            printf("%d is Not a Armstrong Number",h);
}
