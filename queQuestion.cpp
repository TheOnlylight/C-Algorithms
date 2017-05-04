#include<iostream>
int a[16],b[1000][16],n,d;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		a[i]=0;
	}
	for(int i=n+1;i<=2*n;i++)
	{
		a[i]=1;
	}
	
}
void compare(int x)
{
	int five,ten;
	bool q=true;
	for(int i=1;i<=2*n;i++)
	{
		if (a[i]==0)
			five++;
		ten++;
		if (five<ten)
		{
			q=false;
			break;	
		}
	}
	if(q==true)
	{
		d++;
		for(int i=1;i<=2*n;i++)
		{
			b[d][i]=a[i];
		}
	}
	
}
int change(int x)
{
	~a[x];
	x++;
}
