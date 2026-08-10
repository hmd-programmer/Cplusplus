 #include<iostream>
 #include<conio.h>
 using namespace std;
 main()
 {
 	int i,x[6],y[6],z[6];
 	
 	//read array x
 	
 	for(i=0;i<=5;i++)
 	 {
 	 	cout<<"Enter x"<<"["<<i<<"]: ";
 	 	cin>>x[i];
	  }
	  
	  
 	//read array y
 	
 	for(i=0;i<=5;i++)
 	 {
 	 	cout<<"Enter y"<<"["<<i<<"]: ";
 	 	cin>>y[i];
	  }

	for(i=0;i<=5;i++)
	  z[i]=x[i]*y[i];
	  
	//print array x
	for(i=0;i<=5;i++)
		cout<<x[i]<<"\t";
		
	
	//print array y
	cout<<"\n\n";
	for(i=0;i<=5;i++)
	 cout<<y[i]<<"\t";
	
	//print array z
	cout<<"\n\n";
	for(i=0;i<=5;i++)
		cout<<z[i]<<"\t";
	
	getch();
	return 0;
	
 }