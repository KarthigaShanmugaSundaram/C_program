#include<stdio.h>
#include<conio.h>
#include<math.h>
int prime(int);
int main()
{
int n,i,f;
clrscr();
printf("\nEnter n");
scanf("%d",&n);
f=1;
f=prime(n);
if(f==1)
printf("\nPrime");
else
for(i=n-1;i>=2;i--)
{
f=1;
f=prime(i);
if(f==1)
{
printf("\n%d is nearest prime",i);
break;
}
}
return 0;
}
int prime(int n)
{
int i,f;
f=1;
for(i=2;i<=sqrt(n);i++)
if(n%i==0)
{
f=0;
break;
}
return(f);
}



