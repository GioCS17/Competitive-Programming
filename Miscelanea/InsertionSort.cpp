#include<iostream>

using namespace std;

int main(){
	int arr[7]={3,7,8,2,9,4,5};
	for(int i=1;i<7;i++){
		int j=i;
		while(arr[j]<=arr[j-1] && j!=0){
			int aux=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=aux;
			j--;
		}
	}
	for(int i=0;i<7;i++){
		cout<<arr[i]<<endl;
	}

	return 0;
}
