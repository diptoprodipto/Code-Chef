#include<iostream>
using namespace std;
int main()
{
	int n, k, i, m, count=0;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>m;
		if(m%k==0)
			count++;
	}
	cout<<count<<endl;
	return 0;
}