#include<iostream>

using namespace std;

struct tuplex{
	int low;
	int high;
	int sum;
};

tuplex findMaxCrossingSubArray(int *arr,int low,int mid,int high){
	int maxleft,maxright;
	int leftsum=-(1<<30);
	int sum=0;
	for(int i=mid;i>=0;i--){
		sum+=arr[i];
		if(sum>leftsum){
			leftsum=sum;
			maxleft=i;
		}
	}
	int rightsum=-(1<<30);
	sum=0;
	for(int i=mid+1;i<high;i++){
		sum+=arr[i];
		if(sum>rightsum){
			rightsum=sum;
			maxright=i;
		}
	}
	return tuplex{maxleft,maxright,leftsum+rightsum};
}

tuplex findMaxSubArray(int *arr,int low,int high){

	if(high==low)
		return tuplex{low,high,arr[low]};
	else{
		int mid=(low+high)/2;
		tuplex left=findMaxSubArray(arr,low,mid);
		tuplex right=findMaxSubArray(arr,mid+1,high);
		tuplex cross=findMaxCrossingSubArray(arr,low,mid,high);

		if(left.sum>=right.sum && left.sum>=cross.sum)
			return left;
		else if(right.sum>=left.sum && right.sum>=cross.sum)
			return right;
		else
			return cross;
	}
	
}
int main(){

	int arr[16]={13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,-7};
	int arr2[16]={13,3,25,20,-3,-16,-23,-18,-20,-7,12,-5,-22,15,-4,-7};
	int arr3[16]={-13,-3,-25,-20,-3,-16,-23,-18,-20,-7,-12,-5,-22,-15,-4,-7};
	tuplex t=findMaxSubArray(arr3,0,15);
	cout<<t.low<<endl;
	cout<<t.high<<endl;
	cout<<t.sum<<endl;


	return 0;
}
