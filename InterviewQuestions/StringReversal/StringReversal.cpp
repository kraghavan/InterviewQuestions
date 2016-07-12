#include <iostream>
#include <stdio.h>

using namespace std;

//an approach is also possible by creating a recursive function 
// inputs will be string, pointer to a start and pointer to the end
//I have not tested this 3rd type of function
char * ReverseStrings(char str,char *start, char *end)
{
	if(*end)
	{
		start = ReverseStrings(*end,start,end+1);
	}
	*start = str;

	return (start+1);
}


//this function is the simplest of all, requires string and its length
//access randomly first and last characters and moves in opposite direction
void ReverseStrings(char *str, int len)
{
	int i = 0,j = len-1;

	while(i<j)
	{
		char temp = str[i];
		str[i]=str[j];
		str[j]=temp;

		i++;
		j--;
	}

}

//optimal solution requires a pointer to the input string
//loops through the end of the string. Assumes string terminates with a null ptr
//that is very imp assumption here.
void ReverseStrings(char * str)
{
	
	char * end = str;
	char temp;
	if(*str)
	{
		while(*end)
		{
			++end;
		}
	}
	while( str < end)
	{
		temp=*str;
		*str++ = *end;
		*end-- = temp;
	}
}


int main()
{
	
	char sample[]={'K','A','R','T','H','I','K','A','\0'};

	int i=0,len=9;
	cout << "Before reversal: ";
	while(i<len)
	{
		cout<<sample[i];
		i++;		
	}	
	cout<<endl;

	ReverseStrings(sample,len);

	i=0;
	cout << "After reversal: ";
	while(i<len)
	{
		cout<<sample[i];
		i++;
	}
	cout<<endl;


	return 0;

}