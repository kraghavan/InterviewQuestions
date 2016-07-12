//this logic has been already implemented and 
//can be found in this weblink. This is file exposes 
//my practice sessions alone. 
//Thanks!
// http://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/

#include <stdio.h>
#include <string.h>
#include <iostream>     // std::cout
#include <algorithm>    // std::swap

using namespace std;
#define sampleSize 6

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Permutation (char * str, int start, int end)
{
	int i=0;
	if(start==end)
	{
		printf("%s\n", str);
		return;
	}
	else
	{
		for(i=start;i<=end;i++)
		{
			swap(str+start,str+i);
			Permutation(str,start+1,end);
			swap(str+start,str+i);
		}
	}

	cout << endl;
}


int main()
{
	char sample[sampleSize] = {'F','R','U','I','T','\0'};

	cout<<"String before Permutation:"<<endl;
	for(int i=0;i<sampleSize;i++)
	{
		cout<<sample[i];	
	}
	cout<<endl;
	Permutation(sample,0,sampleSize-1);

	return 0;
}