#include<iostream>
using namespace std;
int main()
{
	int op,n=6,f=0,r=0,i=0,m,z;
	int a[n];
	while(1)
	{
		cout << "Enter the operation: 1. enqueue 2. dequeue 3. no operation : ";
		cin >> op;
		switch(op)
		{
			case 1:		
					if(r==n)
					{
						cout << "Queue is full.";
						break;
		 			} 
					
						cout<<"Enter a element : ";
						cin >> a[i];
						i++;
						r++;
					for(int p=0; ; p++)
					{
						z=0;
						cout<<"Do you want to enter more elements : 1 yes 2 no ";
						cin >> z;
						if(z!=2)
						{
							cout<<"Enter a element : ";
							cin >> a[i];
							i++;
							r++;
						}
						else
						 break;
					}
					break;
			case 2:
		
		
					if(r==0)
					{
						cout << "Queue is empty.";
		 			} 
					else
					{
						int h=a[f];
						for(int k=f; k<r; k++)
						{
						a[k] =a[k+1];
						}
					r--;
					}
					for(int k=0; k<r; k++)
					{
						cout << a[k] << endl;
					}
					break;
		
			case 3:
					for(int k=0; k<r; k++)
					{
						cout << a[k] << endl;
					}
					exit(0);
		}
	}
	
	
}
