#include<iostream>

using namespace std;

void mergeSort(int A[], int p,int q, int r){
	int n1=q-p+1;
	int n2=r-q;
	int L[n1];
	int R[n2];

	for(int i=0;i<n1;i++)
		L[i]=A[p+i];
	
	for(int i=0;i<n2;i++)
		R[i]=A[q+i+1];

	int i=0,j=0,k=p;
	while(i<n1 && j<n2){
		if(L[i]<=R[j])
		{
			A[k]=L[i];
			i++;
		}
		else
		{
			A[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		A[k]=L[i];
		i++;
		k++;
	}

	while(j<n2){
		A[k]=R[j];
		j++;
		k++;
	}
}
void merge(int A[],int p,int r){
	if(p<r){
		int q=(p+r)/2;
		merge(A,p,q);
		merge(A,q+1,r);
		mergeSort(A,p,q,r);
	}
}
int main(){
	int arr[7]={5,9,3,1,5,2,8};
	int arr2[8]={7,5,9,3,1,5,2,8};
	merge(arr,0,6);
	for(auto a:arr)
		cout<<a<<endl;
	merge(arr2,0,7);
	for(auto a:arr2)
		cout<<a<<endl;
	return 0;
}
