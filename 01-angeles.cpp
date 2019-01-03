//1. ask for a character
#include<iostream>

using namespace std;

int main()
{
	char character;
	
	cout<<"Enter a character: ";
	cin>>character;
	
	for(int i=0;i<10;i++)
	{
		cout<<character << " ";
	}
return 0;
}
