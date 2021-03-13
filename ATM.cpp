#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	float m;
	cin>>n>>m;

	if(n%5==0 && n<=m-0.50)
	{
		m = m-n-0.50;
	}
	
	printf("%.2f\n", m);

	return 0;
}