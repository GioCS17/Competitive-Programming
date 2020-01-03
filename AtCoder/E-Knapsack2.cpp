#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<map>
#include<cmath>

using namespace std;
typedef long long ll;
int main(){

  int sizeC;
  int maxiW;
  cin>>sizeC;
  cin>>maxiW;
  int arrW[sizeC+1],arrV[sizeC+1];

  for(int i=0;i<sizeC;i++)
    cin>>arrW[i]>>arrV[i];

  map<pair<int,int>,int> dict;
  for(int i=0;i<=sizeC;i++){
    for(int j=0;j<=maxiW;j++){
      if(i==0 || j==0)
        dict[i][j]=0;
      else if(arrW[j]<=j)
        dict[i][j]=max(dict[i-1][w-arrW[i]]+arrV[i],dict[i-1][w]);
      else
        dict[i][j]=dict[i-1][w];
    }
  }

  cout<<dict[sizeC][maxiW]<<endl;

  return 0;
}
