//Anagram function

#include <iostream>
#include <string>
using namespace std;

bool Anagram1(string one, string two)
{

	bool isAnagram = false;

	if(one.length()!=two.length())
	{
		return isAnagram;
	}

	std::sort(one.begin(),one.end());
	std::sort(two.begin(),two.end());

	if(one.compare(two)!=0)
	{
		return isAnagram;
	}
	else
	{
		isAnagram = true;
	}

	return isAnagram;
}

//identical count on unique characters in each string
bool Anagram2(string one, string two)
{
	bool isAnagram = false;

	if(one.length()!=two.length())
	{
		return isAnagram;
	}
	int [] letters = new int [256];
	int unique =0,complete=0;

	char [] array = one.c_str();
	

}

int main()
{

	string s1="BOB";
	string s2="BOB";

	if(Anagram1(s1,s2))
	{
		cout<<s1 <<" is an anagram of " << s2 << endl;
	}
	
	else
	{
		cout<<s1 <<" is NOT an anagram of " << s2 << endl;
	}

	return 0;
}