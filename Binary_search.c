#include<stdio.h>
void main()
{
   int size;
   printf("Enter the size of the array");
   scanf("%d",&size);
   int arr[size];
   printf("Enter the numbers");
   for(int i=0;i<size;i++)
   {
           scanf("%d",&arr[i]);
   }
   int ele;
   printf("Enter the number to be searched");
   scanf("%d",&ele);
   int flag=0;
   int low=0;
   int mid;
   int high=size-1;
   while(low<=high)
   {
           mid=(low+high)/2;
           if(ele==arr[mid])
           {
                   flag=1;
                   break;
           }
           else if(ele<arr[mid])
           {
                   high=mid-1;
           }
           else
                   low=mid+1;
   }
   if(flag==1)
           printf("The number is found at %d",mid);

}
  
