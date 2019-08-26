#include<stdio.h>
void insertion(int arr[30],int num)
{
int i;
for(i=1;i<num;i++)
 {
  int temp=i;
  int element=arr[i];
  while(temp>0 & arr[temp-1]>element)
  {
   arr[temp]=arr[temp-1];
   temp=temp-1;
  }
  arr[temp]=element;
 }
}
int main()
{
int num,i,j,arr[30],no;
printf("Enter the number of elements in the array :");
scanf("%d",&num);
for(i=0;i<num;i++)
{
 printf("Enter the element :\n");
 scanf("%d",&no);
 arr[i]=no;
}
printf("\n\n");
insertion(arr,num);
for(j=0;j<num;j++)
 {
  printf("%d\n",arr[j]);
 }
return 0;
}
