#include <iostream>
using namespace std;

int main(){
  //Long variables
  long n,m,a;
  long r;
  cin>>n>>m>>a;
  cout<<((n+a-1)/a*(m+a-1)/a)<<endl;
  return 0;
}
