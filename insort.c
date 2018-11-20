#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[8];
	int i,a,j,f;
	for(i=0;i<8;i++)
	{
	printf("Enter the %d array element:",i+1);
	scanf("%d",&arr[i]);
    }

	for(j=0;j<8;)
    {
    	for(i=j+1;i<8;)
    	{
    		if(arr[i]<arr[j])
    		{
    		f=i;
			a=arr[i];	
			while(i!=j)
				{
    				arr[i]=arr[i-1];
    				i--;
    			}
    			arr[i]=a;
    			i=f;
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
