#include<iostream>
#include<stdio.h>

using namespace std;

string a;
int i;int n;

int eval(){

	int x=0;


	while(a[i]==' ')
		i++;

	if(a[i]=='+'){
		i++;
		return eval()+eval();
	}

	if(a[i]=='*'){
		i++;
		return eval()*eval();
	}


	while(a[i]>='0' && a[i]<='9')
		x=10*x+(a[i++]-'0');
	
	return x;
}
int main(){

	getline(cin,a);
	n=a.size();
	cout<<eval()<<endl;


	return 0;
}
