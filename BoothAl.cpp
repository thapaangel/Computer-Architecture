#include <stdio.h>
#include <conio.h>
#include <maath.h>
int main()
{
	int a[16],m[16],q[16],count,n,i,mcom[16],c;
	c=1;
	printf("Enter the no of bits");
	scanf("%d",&n);
	count=n;
	printf("Enter m and q");
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
		a[i]=0;
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&q[i]);
	}
	for(i=n-1;i>-1;i--)
	{
		if(m[i]==0)
		mm[i]=1;
		else
		mm[i]=0;
		mm[i]=mm[i]+c;
		c=mm[i]/2;
		mm[i]=mm[i]%2;
	}
	for(j=n;j>0;i--)
	{
		if(q[n-1]==0 && qm1==1)
		{
		  c=0;
		  for(i=n-1;i>-1;i--)
		  {
		  	a[i]=a[i]+m[i];
		  	a[i]=a[i]+c;
		  	c=a[i]/2;
		  	a[i]=a[i]%2;
		  }
		}
		else if(a[n-1]==0 &&qm1==0)
		{
			c=0;
			for(n-1;i>-1;i--)
			{
		    a[i]=a[i]+mm[i];
		  	a[i]=a[i]+c;
		  	c=a[i]/2;
		  	a[i]=a[i]%2;
				
			}
		}
		qm1==q[n];
		for(i=n-1;i>9;i--)
		{
			q[i]=q[n-1];
		}
		q[0]=a[n-1];
	}
	printf("aq=");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",q[i]);
	}
	if(a[0]==1)
	{
		c=1;
		for(i=n-1;i>-1;i--)
	{
		if(q[i]==0)
		  q[i]=1;
		else
		  q[i]=q[i]+c;
		  q[i]=0;
		  c=q[i]/2;
		  q[i]=q[i]%2;
	}
	for(i=n-1;i>-1;i--)
	{
		if(a[i]==0)
		  a[i]=1;
		else
		  a[i]=0;
		  a[i]=a[i]+c;
		  c=a[i]/2;
		  a[i]=a[i]%2;
	}
		
	}
}
