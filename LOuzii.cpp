#include<iostream>
using namespace std;
main(){
	
	int satr,soton,n;
	cout<<"Enter n=? ";
	cin>>n;
	char c;
	cout<<"\n"<<"Enter character=? ";
	cin>>c;
	cout<<endl;
	
	for(satr=1;satr<=n;satr++)
	{
		for(int space=n-satr;space>0;space--)
			cout<<" ";
		for(soton=1;soton<=satr;soton++)
			cout<<c<<" ";
		cout<<endl;
	}
	
	for(satr=n;satr>0;satr--)
	{
		for(int space=n-satr;space>0;space--)
			cout<<" ";
		for(soton=1;soton<=satr;soton++)
			cout<<c<<" ";
		cout<<endl;
	}	
	
	
	
	
	
	
	
	return 0;
}