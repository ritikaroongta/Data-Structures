#include<iostream>
using namespace std;

int main(){
	int n=7;
	int a[n]={3,21,45,67,8,5};
	int pos = 2,i,count=1;
	i=pos;
	for(int j=0; a[j] !='\0'; j++)
	{
	cout << a[j] << "\n";
	count++;
	}
	cout << "size1= " << count << "\n";
	count=1;
	while(i<n-1)
	{
		a[i]=a[i+1];
		i++;
	}
	for(int j=0; a[j] !='\0'; j++)
	{
	cout << a[j] << "\n";
	count++;
	}
	cout << "size2= " << count << "\n";
	n=count;
}
