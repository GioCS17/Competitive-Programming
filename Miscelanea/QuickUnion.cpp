#include<iostream>

using namespace std;
static const int N=1000;
int main(){

	int i,j,p,q,arr[N];
	for(i=0;i<N;i++) arr[i]=i;

	while(cin>>p>>q){
		for(j=p;j!=arr[j];j=arr[j]);
		for(i=q;i!=arr[i];i=arr[i]);
		if(i==j) continue;
		arr[i]=j;
		cout<<i<<" "<<j<<endl;
	}

	return 0;
}
