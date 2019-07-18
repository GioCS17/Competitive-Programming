#include<iostream>

using namespace std;

int partition(int arr[],int l,int h){
	int pivot=arr[h];
	int i=l-1;

	for(int j=l;j<h;j++){
		if(arr[j]<=pivot)
		{
			i++;
			int aux=arr[i];
			arr[i]=arr[j];
			arr[j]=aux;
		}
	}
	int aux=arr[i+1];
	arr[i+1]=arr[h];
	arr[h]=aux;
	return i+1;
}
void quicksort(int arr[],int l,int h){
	if(l<h){
		int p=partition(arr,l,h);
		quicksort(arr,l,p-1);
		quicksort(arr,p+1,h);
	}
}
int main(){

	int arr[7]={4,7,8,2,9,5,8};
	quicksort(arr,0,6);
	for(int a:arr)
		cout<<a<<endl;

	return 0;
}
