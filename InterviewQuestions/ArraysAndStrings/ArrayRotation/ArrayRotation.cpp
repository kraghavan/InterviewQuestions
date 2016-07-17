/**************************************************************
#
#
# O(n^2) time and O(1) space algorithm 
# (without any workarounds and hanky-panky stuff!)
# 1. Rotate by +90:
#	a. Transpose
#	b. Reverse each row
# 2. Rotate by -90:
#	a. Transpose
#	b. Reverse each column
# 3. Rotate by +180:
#	Method 1: Rotate by +90 twice
#	Method 2: Reverse each row and then reverse each column
# 4. Rotate by -180:
#	Method 1: Rotate by -90 twice
#	Method 2: Reverse each column and then reverse each row
#	Method 3: Reverse by +180 as they are same
#
# code source weblink - http://ideone.com/yO6ST2
# writing a code here for only 1 a and b.
**************************************************************/

#include <iostream>
using namespace std;

void Rotate(int ** matrix, int m, int n)
{
	//initial matrix form
	for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout<<matrix[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;

	int ** temp = new int *[n];

	for(int i=0;i<n;i++)
		temp[i]=new int[m];

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			temp[j][i]=matrix[i][j];
		}
	}

	for(int i=0;i<n;i++)
	{
		int j=0,k=m-1;
		while(j<k)
		{
			int x=temp[i][j];
			temp[i][j]=temp[i][k];
			temp[i][k]=x;
			j++;k--;
		}
	}

	//display matrix after rotation
	for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<temp[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;
    
    delete [] temp;
}


int main()
{
	 int image[3][4] = {{1,2,3,4},
                      {5,6,7,8},
                     {9,10,11,12}};
 
    int **Source = new int*[3];
 
    for(int i=0;i<3;i++)
        Source[i]=new int[4];
 
    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++)
            Source[i][j]=image[i][j];
 
    Rotate(Source,3,4);
 
    delete[] Source;
 
    return 0;
}