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
    
    for(j=0;j<5;)
    {
    	for(i=j+1;i<5;)
    	{
    		if(arr[i]<arr[j])
    		{
    		a=arr[j];
    		arr[j]=arr[i];
    		arr[i]=a;
    		i++;
    		}
    		else
    			i++;
    	}
    	j++;
    }
    
    printf("the array elements are:\n");
    for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	
    }
}
