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

	for(int i=0;i<n;i++)
	{
		int min=i,temp;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
				min=j;
			if(min!=i)
			{
				temp=a[i];
				a[i]=a[min];
				a[min]=temp;
			}
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