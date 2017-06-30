#include<iostream>
using namespace std;

bool anagram(string s1,string s2);

int main(int argc, char **argv)
{
	string s1=argv[1];
	string s2=argv[2];

	cout<<anagram(s1,s2);

}

bool anagram(string s1,string s2)
{
	int arr[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	if(s1.size() == s2.size())
	{
		for(int i=0;i<s1.size();i++)
		{
			char temp=s1[i];
			int ind=(int(temp)) % 26;
			arr[ind]=arr[ind]+1;
			
			temp=s2[i];
			ind=(int(temp)) % 26;
                        arr[ind]=arr[ind]+1;
		}
		bool flag=false;

		for(int i=0;i<26;i++)
                {
			//cout<<arr[i]<<endl;
		}

		for(int i=0;i<26;i++)
		{
			if(arr[i]%2 ==0 )
				flag=true;
			else
			{
				flag=false;
				break;
			}
		}
		return flag;

	}
	else
		return false;

}
