#include<iostream>

using namespace std;

int main(){
	int A[7]={8,4,2,6,4,8,2};
	for(int i=0;i<6;i++){
		for(int j=6;j>i;j--){
			if(A[j]<A[j-1]){
				int temp=A[j];
				A[j]=A[j-1];
				A[j-1]=temp;
			}
		}
	}
	for(auto x:A)
		cout<<x<<endl;

	return 0;
}
