#include<stdio.h>
int main()
{
	float b=0,c=0,d=0;
	int a[1000],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	  if(a[i]>0)
	  b=b+1;
	  else if(a[i]<0)
	  c=c+1;
	  else
	  d=d+1;
	  
    }
      b=b/n;
      c=c/n;
      d=d/n;
    printf("%f\n%f\n%f",b,c,d);
}