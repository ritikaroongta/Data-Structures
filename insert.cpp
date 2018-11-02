#include<iostream>
using namespace std;

int main(){
	int n=7;
	int a[n]={3,21,45,67,8,5};
	int pos = 4,i=n,val=56,count=1;
	for(int j=0; a[j] !='\0'; j++)
	{
	cout << a[j] << "\n" ;
	count++;
	}
	cout << "size1= " << count << "\n";
	count=1;
	while(i>=4)
	{
		a[i]=a[i-1];
		i--;
	}
	a[4]=val;
	for(int j=0; a[j] !='\0'; j++)
	{
	cout << a[j] << "\n" ;
	count++;
	}
	cout << "size2= " << count << "\n";
	
	n=count;
	count=1,i=n;
	while(i>6)
	{
		a[i]=a[i-1];
		i--;
	}
	a[6]=81;
	for(int j=0; a[j] !='\0'; j++)
	{
	cout << a[j] << "\n" ;
	count++;
	}
	cout << "size3= "<< count << "\n";
}
