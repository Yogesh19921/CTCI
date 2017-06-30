
#include<stdio.h>
#include<iostream>

using namespace std;


class Stack
{
	int seq;
	int size;
	int lastIndex;
	public:
		Stack(int number)
		{
			seq=number;
			lastIndex=number-3;
			size=0;
		}
		void push(int arr[],int value)
		{
			arr[lastIndex+3]=value;
			lastIndex=lastIndex+3;
		}
		int pop(int arr[])
		{
			int ret=arr[lastIndex];
			arr[lastIndex]=0;

			//if(lastIndex>seq)
			lastIndex=lastIndex-3;
			return ret;
		}

};

int main(int argc, char **argv)
{
	int arr[30];

	Stack S1(1);

	Stack S2(2);

	Stack S3(3);

	S1.push(arr,1);
	S3.push(arr,3);
	S2.push(arr,2);
	S1.push(arr,4);
	S2.push(arr,5);
	S3.push(arr,6);
	S2.push(arr,8);
	S1.push(arr,7);
	S3.push(arr,9);
	
	cout<<"S1"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<S1.pop(arr)<<endl;
	}

	cout<<"S2"<<endl;
        for(int i=0;i<3;i++)
        {
                cout<<S2.pop(arr)<<endl;
        }


	cout<<"S3"<<endl;
        for(int i=0;i<3;i++)
        {
                cout<<S3.pop(arr)<<endl;
        }



}
