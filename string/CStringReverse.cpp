#include<iostream>
#include<string.h>

using namespace std;

string reverse(char *s,int size);
int main(int argc,char **argv)
{
//	cout<<argv[1];
	string s=argv[1];
	char* a=argv[1];
	cout<<reverse(argv[1],s.size())<<endl;
}

string reverse(char *s,int size)
{
	int i=0;
	int j=size-1;
	

	while(i<j)
	{
		char temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		i++;
		j--;
	}
	return s;

}
