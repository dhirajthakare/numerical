#include<iostream>
using namespace std;
int main() {
	int n,i,j,k;
	int a[100];
	
	cout<<"Enter the the array size";
	cin>>n;
	//take a element from user
	cout<<"Enter the array element";
	for(i=0;i<n;i++)
	cin>>a[i];
	//for odd number
	for(i=0;i<n;i++){
		cout<<"The odd number bet "<<a[i]<<"=[";	
	for(k=1;k<=a[i];k=k+2){
		
		cout<<k;
			if(k+2 > a[i])
		cout<<"]";
		else
		cout<<",";
	
		
	}
	
	cout<<endl;
}
cout<<endl;
	//for even number
	for(i=0;i<n;i++){
		cout<<"The even number bet "<<a[i]<<"=[";	
	for(k=0;k<=a[i];k=k+2){
		
		cout<<k;
		if(k+2 > a[i])
		cout<<"]";
		else
		cout<<",";
		
		
	}
	
	
	cout<<endl;
}
	
cout<<endl;


	
	return 0;
}
