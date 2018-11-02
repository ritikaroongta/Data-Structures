#include <iostream>

using namespace std;

int main()
{
   int i,j,a[3][3],b[3][3];
   for(i = 0; i < 3; i++)
   {
       for(j = 0; j < 3; j++)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }
   }
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < 3; i++)
    {
       for(j = 0; j < 3; j++)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }
    }
    i=n;
    j=0;
    while(b[j]!='\0')
    {
    	a[i]=b[j];
    	i++;
    	j++;
    }
    cout<<"Elements of merged array are: "<<endl;
    for(i = 0; i < 3; ++i)
    {
        for(j = 0; j < 3; ++j)
        {
            cout << a[i][j] << "  ";
        }
    }
   return 0;
