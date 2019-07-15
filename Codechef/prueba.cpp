#include<iostream>
#include<cmath>

using namespace std;

float sol(string eq,int l,int r){

  int i;
  for(i=r;i>=l;i--){
    if(eq[i]=='+')
      return sol(eq,l,i-1)+sol(eq,i+1,r);
    else if(eq[i]=='-')
      return sol(eq,l,i-1)-sol(eq,i+1,r);
  }
  for(i=r;i>=l;i--){
    if(eq[i]=='*')
      return sol(eq,l,i-1)*sol(eq,i+1,r);
    else if(eq[i]=='/')
      return sol(eq,l,i-1)/sol(eq,i+1,r);
  }
  float value=0;
  int cont=0;
  bool faro=false;
  for(i=l;i<=r;i++){
    if(eq[i]=='.'){
      faro=true;
      continue;
    }
    value*=10;
    value+=eq[i]-'0';
    if(faro)
      cont++;
  }
  value/=pow(10,cont);
  return value;
}
int main(){

  string eq;
  cin>>eq;
  cout<<sol(eq,0,eq.size()-1)<<endl;

  return 0;
}
