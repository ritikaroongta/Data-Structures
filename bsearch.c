#include<stdio.h>


int main(){
	int n=7;
	int a[n]={3,21,45,67,8,5};
	int start,end,mid,i,data;
	printf("Enter item to be searched:");
	scanf("%d",&data);
	start=0;
	end=n-1;
	mid=(start+end)/2;
	while(data!=a[mid] && start<=end)
	{
		if(data>a[mid])
			start=mid+1;
		else
			end=mid-1;
		mid=(start+end)/2;
	}
		if(data==a[mid])
		{
			printf("found at position: %d ",i+1);
			break;
		}
		if(start>end)
		printf("\nItem not found");
	}
}
