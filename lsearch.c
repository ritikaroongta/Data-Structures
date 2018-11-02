#include<stdio.h>


int main(){
	int n=7;
	int a[n]={3,21,45,67,8,5};
	int search,i=0;
	printf("Enter item to be searched:");
	scanf("%d",&search);
	for(;i<n;i++)
	{
		if(a[i]==search)
		{
			printf("found at position: %d ",i+1);
			break;
		}
		if(i==n)
		printf("\nItem not found");
	}
}
