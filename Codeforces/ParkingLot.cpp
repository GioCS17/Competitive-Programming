#include<iostream>

using namespace std;

long long int factorial(long long int n){
	if(n==2)
		return 2;
	return factorial(n-1)*n;
}
int main(){
	long long int n;
	cin>>n;
	long long res=factorial(n);

	cout<<res<<endl;


	return 0;
}
