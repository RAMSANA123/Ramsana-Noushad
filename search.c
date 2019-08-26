#include<stdio.h>
void sort(int a[], int n)
{
int i,temp,j;
for (j=0;j<n;j++)
	for(i=0;i<n;i++)
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
}
int binary(int a[],int n, int item)
{
	int first=0,mid,last,f=0;
	last=n;
	while(first<last)
		{
		mid=(first+last)/2;
		if (a[mid]==item)
		{
			f=1;
			break;
		}
		else if (item<mid)
			last=mid-1;
		else
			first=mid+1;
		}
return f;
}
int linear(int a[],int n,int item)
{
	int f=0,i;
	for(i=0;i<n;i++)
		{
		if(a[i]==item)
			{
			
			f=i+1;
			break;
			}
		}
return f;
}				
void main()
{
int a[10],n,i,item,f=0,x;
printf("enter the limit");
scanf("%d",&n);
printf("enter the numbers");
for( i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("enter the element to be searched");
scanf("%d", &item);
printf("menu\n1.linear\n2.binary");
scanf("%d",&x);
switch (x)
{
	case 1:f=linear(a,n,item);
	break;
	case 2:f=binary(a,n,item);
	break;
}

if (f==0)
	printf("element not present");
else
	printf("element found");
}


