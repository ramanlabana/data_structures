#include<stdio.h>
int main(){
	int size=0;
	int ele=0;
	printf("Enter the size");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Number to be searched");
	scanf("%d",&ele);
	int index=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==ele)
		{
			index=i;
			break;
		}
	}
	printf("The Index of the number is %d",index);
	return 0;
}
