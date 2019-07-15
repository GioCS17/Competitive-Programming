#include<iostream>
#include<cmath>
using namespace std;

void countways(int n,int p,int num,int value,int &cont){
	if(num>value){
		if(n==0)
			cont++;
		return;
	}
	if(n<0)
		return;
	countways(n-pow(num,p),p,num+1,value,cont);
	countways(n,p,num+1,value,cont);
}
int main(){
	int t,n,p;

	cin>>t;
	while(t--){
		cin>>n>>p;
		int value=pow(n,1.0/p)+1;
		int cont=0;
		countways(n,p,1,value,cont);
		cout<<cont<<endl;
	}

	return 0;
}
