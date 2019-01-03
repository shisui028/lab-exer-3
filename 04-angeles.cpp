//4.two char
#include<iostream>

using namespace std;

int main()
{
	char cha1, cha2, ans;
	int x, val;
	
	cout<<"Enter the first character: ";
	cin>>cha1;
	cout<<"Enter the second character: ";
	cin>>cha2;
	
	x=int(cha2) - int(cha1);
	val=int(cha1)+1;
	
	for(int ctr=x;ctr > 1;ctr--)
	{
		ans=char(val);
		val=val+1;
		cout<<ans<<"  ";
	}
return 0;
}
