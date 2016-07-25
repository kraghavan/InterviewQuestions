/*
# split the input into 2 arrays.
# split point is always the middle of the array
# merge the two sorted arrays
# best solution found online AT: http://www.dailyfreecode.com/code/perform-quick-sort-1140.aspx
#
*/
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void printArray(int *a, int n)
{
	for(int k=0;k<n;k++)
	{
		cout << a[k] << "\t";
	}
	cout<<endl;	
}

void QuickSort(int *k,int lb,int ub)
{
	int i,j,key,flag=0,temp;
 	if (lb<ub)
    {
     i=lb;
     j=ub+1;
     key=k[i];
     while(flag!=1)
      {
       i++;
       while(k[i]<key)
        {
         i++;
        }
       j--;
       while(k[j]>key)
        {
         j--;
        }
       if (i<j)
          {
           temp=k[i];
           k[i]=k[j];
           k[j]=temp;
          }
       else
          {
           flag=1;
           temp=k[lb];
           k[lb]=k[j];
           k[j]=temp;
          }
      }
     QuickSort(k,lb,j-1);
     QuickSort(k,j+1,ub);
    }
}
int main()
{
	int a[10] = {12,34,56,11,99,66,7,4,76,21};
	cout<<"Input array:"<<endl;
	printArray(a,10);
	QuickSort(a,0,9);
	cout<<"Sorted array:"<<endl;
	printArray(a,10);
	return 0;
}

