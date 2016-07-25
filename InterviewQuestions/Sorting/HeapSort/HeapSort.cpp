/*
#
# heap - completely balanced binary tree. 
# this implementation is a min heap 
# starts at index 0
#
# source of logic online: http://quiz.geeksforgeeks.org/heap-sort/
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

void swap(int & a,int & b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void heapify(int *a, int n, int i)
{
	int largest = i;
	int left = 2*i+1;
	int right = 2*i+2;

	if(left < n && a[left] > a[largest])
		largest = left;
	if(right < n && a[right] > a[largest])
		largest = right;

	if(largest!=i)
	{
		swap(a[i],a[largest]);

		heapify(a,n,largest);
	}
}


void heapSort(int *a, int n)
{
	//rearrange the heap
	for(int i=n/2;i>=0;i--)
	{
		heapify(a,n,i);
	}

	for(int i=n-1;i>=0;i--)
	{
		//
		swap(a[0],a[i]);

		heapify(a,i,0);
	}
}

int main()
{
	int a[10] = {12,34,56,11,99,66,7,4,76,21};
	cout<<"Input array:"<<endl;
	printArray(a,10);
	heapSort(a,10);
	printArray(a,10);
	return 0;
}


