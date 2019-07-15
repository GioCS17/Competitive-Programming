#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

  vector<int> nums;
  bool arr[1000000]={0};
  int j;
  for(int i=2;i<1000000;i++){
    j=2;
    while(j*i<1000000){
      arr[i*j]=1;
      j++;
    }
  }

  return 0;
}
