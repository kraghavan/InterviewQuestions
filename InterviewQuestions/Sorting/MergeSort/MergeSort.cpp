/*
# split the input into 2 arrays.
# split point is always the middle of the array
# merge the two sorted arrays
# best solution found online in: http://quiz.geeksforgeeks.org/merge-sort/
*/
#include <iostream>
using namespace std;

void printArray(int *a, int n)
{
	for(int k=0;k<n;k++)
	{
		cout << a[k] << "\t";
	}
	cout<<endl;	
}

void merge(int *a,int left,int middle,int right)
{
	int n1=middle-left+1, n2=right-middle, i, j, k;

	int L[n1],R[n2];

	for(i=0;i<n1;i++)
	{
		L[i]=a[left+i];
	}
	for(j=0;j<n2;j++)
	{
		R[j]=a[middle+1+j];
	}

	i=0,j=0,k=left;
	while((i<n1) && (j<n2))
	{
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
		k++;
	}

	if(i<n1)
	{
		for(int p=i;p<n1;p++)
		{
			a[k]=L[p];
			k++;
		}
	}
	if(j<n2)
	{
		for(int p=j;p<n2;p++)
		{
			a[k]=R[p];
			k++;
		}
	}

}
void mergeSort(int *a, int left, int right)
{
	if(left<right)
	{
		int m=left+(right-left)/2;
		//call mergeSort Recursively
		mergeSort(a,left,m);
		mergeSort(a,m+1,right);
		//merge the two arrays
		merge(a,left,m,right);
	}
}

int main()
{
	int a[10] = {12,34,56,11,99,66,7,4,76,21};
	cout<<"Input array:"<<endl;
	printArray(a,10);
	mergeSort(a,0,10-1);
	cout<<"Sorted array:"<<endl;
	printArray(a,10);
	return 0;
}

