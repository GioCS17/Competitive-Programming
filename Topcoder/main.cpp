#include<iostream>
#include<vector>
#include<string>
#include "TheFlippingGame2.cpp"

using namespace std;

int main(){

  vector<string> v;
  string line;

  while(getline(cin,line)){
    v.push_back(line);
  }

  TheFlippingGame2 f;
  cout<<f.MinimumMoves(v.size(),v[0].size(),v)<<endl;



  return 0;
}
