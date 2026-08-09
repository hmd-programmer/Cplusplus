
#include<iostream>

using namespace std;
main()
{
	int i;
	i=1;
	label:
		if(i<=5)
		{
			cout<<i<<"\n";
			i=i+1;
			goto label;
		}
return 0;	
}