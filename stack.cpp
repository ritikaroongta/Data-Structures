#include<iostream>
using namespace std;
int main()
{
	int op,n=6,top=0,z,i=0;
	int a[n];
	while(1)
	{
		cout << "Enter the operation: 1. push 2. pop 3. no operation : ";
		cin >> op;
		switch(op)
		{
			case 1:		
					if(top==n-1)
					{
						cout << "stack is full.";
						break;
		 			} 
					else if(top== -1)
					{
						 top = 0;
					}
					cout<<"Enter a element : ";
					cin >> a[i];
					i++;
					top++;
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
							top++;
						}
						else
						 break;
					}
					break;
			case 2:
		
		
					if(top==-1)
					{
						cout << "stack is empty.";
		 			} 
					else
					{
						top=top-1;
					}
					for(int k=0; k<top; k++)
					{
						cout << a[k] << endl;
					}
					break;
		
			case 3:
					for(int k=0; k<top; k++)
					{
						cout << a[k] << endl;
					}
					exit(0);
		}
	}
	
	
}
