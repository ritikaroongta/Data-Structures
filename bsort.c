#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[5];
	int i,a,j;
	for(i=0;i<5;i++)
	{
	printf("Enter the %d array element:",i+1);
	scanf("%d",&arr[i]);
    }
    
    for(j=0;j<5;j++)
    {
    
	for(i=0;i<=5;)
    {
    	if(arr[i+1]<arr[i])
    	{
    		a=arr[i];
    		arr[i]=arr[i+1];
    		arr[i+1]=a;
    		i++;
    	}
    	else
    		i++;
    }
}
	printf("the array elements are:\n");
    for(i=0;i<5;i++)
	{
	printf("%d\n",arr[i]);
	
    }
}
