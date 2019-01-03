#include<iostream>

using namespace std;

void linechar(int x);
int linechar(int y, int z)
{
	for(int i=0;i<10;i++)
	{
		cout<<"*";
	}
	cout<<"\n";
	for(int i=0;i<15;i++)
	{
		cout<<"#";
	}
}
int main()
{
		int x, y, z;
		linechar(x);
		linechar(y,z);
return 0;
}

void linechar(int x)
{
	for(int i=0;i<=20;i++)
	{
		cout<<"*";
	}
	cout<<"\n";
	for(int i=0;i<=20;i++)
	{
		cout<<"@";
	}
	cout<<"\n";
}

