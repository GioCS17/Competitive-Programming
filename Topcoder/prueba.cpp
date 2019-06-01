#include<iostream>
#include<vector>

using namespace std;

void method1(vector<int> v){
  for(auto x:v)
    cout<<x<<endl;
}
int main(){

  //int arr[]={34,45,68,243};
  vector<int> arr={34,45,68,243};

  method1(arr);

  return 0;
}
