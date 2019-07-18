#include<iostream>

using namespace std;
int binarySearch4(int A[],int p,int r,int value){
	int m;
	while(p<r){
		m=p+(r-p+1)/2;
	if(A[m]>=value)
		r=m-1;
	else
		p=m;
	}

	return p;
}
int binarySearch3(int A[],int p,int r,int value){
	int m;
	while(p<r){
		m=p+(r-p)/2;
	if(A[m]>=value)
		r=m;
	else 
		p=m+1;
	}

	if(A[p]<value)
		return -1;
	return p;
}
//Trabaja siempre y cuando los valores de p y r pertenezcan a positivos o 0
int binarySearch2(int A[],int p,int r,int value){
	if(p<=r){
	int m=(p+r)/2;
	if(A[m]==value)
		return m;
	else if(A[m]<value)
		return binarySearch2(A,m+1,r,value);
	return binarySearch2(A,p,m-1,value);
	}

	return -1;
}
int binarySearch(int A[],int p,int r,int value){
	if(p<=r){
	int m=p+(r-p)/2;
	if(A[m]==value)
		return m;
	else if(A[m]<value)
		return binarySearch(A,m+1,r,value);
	return binarySearch(A,p,m-1,value);
	}

	return -1;
}

int main(){
	int A[10]={1,2,3,4,4,4,4,5,7,8};
	int B[6]={1,2,2,2,3,3};
	cout<<binarySearch(B,0,5,2)<<endl;
	cout<<binarySearch2(B,0,5,2)<<endl;
	cout<<binarySearch2(A,0,9,4)<<endl;
	cout<<"new"<<endl;
	cout<<"Search 3"<<endl;
	cout<<binarySearch3(A,0,9,4)<<endl;
	cout<<"Search 4"<<endl;
	cout<<binarySearch4(A,0,9,4)<<endl;
	cout<<binarySearch(A,0,9,4)<<endl;
	cout<<binarySearch2(A,0,9,6)<<endl;
	cout<<binarySearch2(A,0,9,2)<<endl;

	return 0;
}
