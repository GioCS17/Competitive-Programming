#include<iostream>
#include<cmath>
#include<set>
#include<vector>

using namespace std;

int n,m;
void dfs(bool state[],int ind,int &cont,vector<int> *arr){

  state[ind]=1;
  for(auto x:arr[ind]){
    if(!state[x]){
      cont++;
      dfs(state,x,cont,arr);
    }
  }
}
int main(){

  cin>>n>>m;
  vector<int> arr[n+1];
  int x,y;
  for(int i=0;i<m;i++){
    cin>>x>>y;
    arr[x].push_back(y);
    arr[y].push_back(x);
  }
  long long dang=1ll;
  int cont;
  bool state[n+1]={0};
  for(int i=1;i<=n;i++){
    if(!state[i]){
      cont=0;
      dfs(state,i,cont,arr);
      dang*=1ll<<cont;
    }
  }
  cout<<dang<<endl;

  return 0;
}
