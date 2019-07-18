#include<iostream>

using namespace std;

static const int N=1000;

int main(){

	int i,p,q,arr[N];

	for(i=0;i<N;i++) arr[i]=i;


	while(cin>>p>>q){
		int t=arr[p];
		if(t==arr[q])
			continue;
		for(i=0;i<N;i++) if(arr[i]==t) arr[i]=arr[q];

		cout<<p<<" - "<<q<<endl;

	}
	return 0;
}
