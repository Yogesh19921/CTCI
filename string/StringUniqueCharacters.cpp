#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;

bool isUnique(string s);
int main(int argc,char **argv)
{
	bool h;
	if(argc>1)
		cout<<isUnique(argv[1]);
}

bool isUnique(string s)
{
	bool arr[26];

	for(int i=0;i<26;i++)
	{
		arr[i]=true;
	}

	for(int i=0;i<s.size();i++)
	{
		if(islower(s[i]))
		{
			int index=(int(s[i])) %26;
			if(!arr[index])
				return false;
			else
				arr[index]=false;
		}
	}

	return true;

}
