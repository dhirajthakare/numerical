#include<iostream>
using namespace std;
int main(){
	
	int i,rem,cube=0,n;
	cout<<"Enter the number";
	cin>>n;
	
		i=n;
		while(i!=0){
		rem=i%10;
		cube=cube+rem*rem*rem;
		i=i/10;
	}
		if(n==cube)
		cout<<n<<" number is armstrong number ";
		else
		cout<<n<<" number is not armstrong number";
	
return 0;
}
