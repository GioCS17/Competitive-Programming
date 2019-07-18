#include<iostream>

using namespace std;

int main(){
	int arr[7]={6,2,5,8,2,1,7};
	int menor;

	for(int i=0;i<6;i++){
		menor=i;
		for(int j=i+1;j<7;j++){
			if(arr[menor]>arr[j])
				menor=j;
		}
		int valor=arr[i];
		arr[i]=arr[menor];
		arr[menor]=valor;
	}
	for(int i=0;i<7;i++)
		cout<<arr[i]<<endl;
	return 0;
}
