#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i,n,t;
	
	cout<<"Enter n=? ";
	cin>>n;
	cout<<endl;
	
	for(i=1;i<=n;i++)
	{
		
		t=0;
		
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
				t++;
		}
		
		if(t==2)
			cout<<i<<"\t";
	}
	
	return 0;
}