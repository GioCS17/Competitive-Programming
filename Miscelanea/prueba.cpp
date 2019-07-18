#include<iostream>

using namespace std;

void value(long long  num){
  if(num<0)
    return;
  if(~num%2)
    cout<<num<<endl;
  value(num-1);
  if(~num%2)
    cout<<num<<endl;
}
int main(){

  long long var;
  cin>>var;
  cout<<~var<<endl;
  cout<<~var%2<<endl;
  cout<<~(var%2)<<endl;
  cout<<!var<<endl;
  cout<<!var%2<<endl;
  cout<<!(var%2)<<endl;
  int newval=!var;
  cout<<"newval"<<endl;
  cout<<newval<<endl;
  while(newval){
    if(newval%2)
      cout<<0;
    else
      cout<<1;
    newval>>=1;
  }
  cout<<endl;
  //value(var);
	return 0;
}
