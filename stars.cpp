#include<simplecpp>
main_program{
	int n;
	cin>>n;
	int i=1;
	repeat(n){
		if(i==1||i==n)
			cout<<"*****"<<endl;
		else cout<<"+++++"<<endl;
		i++;
	}
}