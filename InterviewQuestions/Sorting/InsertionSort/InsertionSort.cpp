
#include <iostream>
using namespace std;


void InsertionSort(int *a,int n)
{
	cout<<"Input Array:"<<endl;
	for(int k=0;k<n;k++)
	{
		cout << a[k] << "\t";
	}
	cout<<endl;

	int key,j;
	for(int i=1;i<n;i++)
	{
		j=i;
		while(a[j]<a[j-1] && j>0)
		{
			key=a[j];
			a[j]=a[j-1];
			a[j-1]=key;
			j--;
		}
	}

	cout<<"Sorted Array:"<<endl;
	for(int k=0;k<n;k++)
	{
		cout << a[k] << "\t";
	}
	cout<<endl;
}


int main()
{

	int a[10] = {12,34,56,11,99,66,7,4,76,21};

	InsertionSort(a,10);
	
	return 0;
}