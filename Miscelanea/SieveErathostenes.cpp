#include<iostream>
#include<vector>

using namespace std;

void setnumber(int *num,int size){
	for(int i=2;i<size;i++)
		num[i]=1;
	
}
void getprimes(vector<bool> &a,int &size){
	for(int i=2;i<size;i++){
		if(a[i]){
			for(int j=i;j*i<size;j++)
				a[j*i]=0;
		}
	}
}
void getprimes2(int *a,int &size){
	for(int i=2;i<size;i++){
		if(a[i]){
			for(int j=i;j*i<size;j++)
				a[j*i]=0;
		}
	}
}
int main(){

	int n,m;
	cin>>n>>m;
	int *arr=new int [n];
	setnumber(arr,n);
	//vector<bool> arr(n,1);

	//getprimes(arr,n);
	getprimes2(arr,n);

	int num;
	while(m--){
		cin>>num;
		cout<<arr[num]<<endl;
	}



	return 0;
}
