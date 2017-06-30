#include<iostream>
#include<stdio.h>
#include "Stack.h"
using namespace std;

int main(int argc, char **argv)
{
	Stack S1;

	S1.push(10);
	S1.push(1);
	S1.push(4);
	S1.push(17);
	S1.push(-1);
	S1.push(20);

	for(int i=0;i<6;i++)
	{
		//S1.pop();
		cout<< S1.getMin()<<endl;
		S1.pop();

	}

}
