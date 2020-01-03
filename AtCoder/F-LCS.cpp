#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

string word1,word2;

const int size=3005;
string matrix[size][size];

string lcs(int i1,int i2){

  if(i1<0 || i2<0)
    return "";

  if(!matrix[i1][i2].empty())
    return matrix[i1][i2];

  if(word1[i1]==word2[i2])
      matrix[i1][i2]=lcs(i1-1,i2-1)+word1[i1];
  else{

  string ans1=lcs(i1-1,i2);
  string ans2=lcs(i1,i2-1);

  if(ans1.size()>ans2.size())
    matrix[i1][i2]=ans1;
  else
    matrix[i1][i2]=ans2;
  }

  return matrix[i1][i2];
}
int main(){

  cin>>word1;
  cin>>word2;

  cout<<lcs(word1.size()-1,word2.size()-1)<<endl;

  return 0;
}
