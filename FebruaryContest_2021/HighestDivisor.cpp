#include<iostream>
using namespace std;
int main()
{
	int n, max=0, i;
	cin>>n;
	for(i=1;i<=10;i++)
	{
		if(n%i==0)
			if(max<i)
				max=i;
	}
	cout<<max<<endl;
	return 0;
}