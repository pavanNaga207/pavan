#include<stdio.h>
int main()
{
	int a[100],i,n,h,j;
	printf("enter");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(a[i]>a[j])
		{
			h=a[i];
			a[i]=a[j];
			a[j]=h;
		}
    	}
    }
    for(i=0;i<n;i++)
    {
    	printf("%d\n",a[i]);
	}
}
