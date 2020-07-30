#include<iostream>
using namespace std;
int main()
{
	int a,b,c,i,j,d,g,h;
	cout<<"Enter Odd Number\n";
	cin>>a;
	int f[a][a];
	b=a*a;
	i=a/2;
	j=a-1;
	d=a-1;
	for(int p=0;p<a;p++)
	{
		for(int q=0;q<a;q++)
		f[p][q]=-1;
	}
	f[i][j]=1;
	for(c=2;c<=b;c++)
	{
			if(j==d)
			{
				j=0;
			}
			else
			{
				j++;
			}
			if(i==d)
			{
				i=0;
			}
			else
			{
				i++;
			}
		if(g==d && h==d)
		{
			i=d;
			j=d-1;
		}
		 if(g==0 && h==1)
		{
			i=0;
			j=0;
		}
		if(f[i][j]==-1)
		{
			f[i][j]=c;
		}
		else
		{
			i=i-1;
			j=j-2;
			f[i][j]=c;
		}
		g=i;
		h=j;
	}
	cout<<"\n\n";
	for(int l=0;l<a;l++)
	{
		for(int m=0;m<a;m++)
		cout<<f[l][m]<<" ";
		cout<<"\n\n";
	}
	cin.get();
	system("pause");
}
