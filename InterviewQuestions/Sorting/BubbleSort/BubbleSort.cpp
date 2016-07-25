
#include <iostream>
using namespace std;


void BubbleSort(int *a,int n)
{
	cout<<"Input Array:"<<endl;
	for(int k=0;k<n;k++)
	{
		cout << a[k] << "\t";
	}
	cout<<endl;

	bool notSorted = true;
	int temp=0;
	for(int j=1;(j<=n) && notSorted; j++)
	{
		notSorted=false;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]<a[i+1])
			{
				//swap elements
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;

				notSorted=true;
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

	BubbleSort(a,10);
	
	return 0;
}