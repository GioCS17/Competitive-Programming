#include<iostream>

using namespace std;

int main(){

  int t,n,i,j=0;
  cin>>n>>t;
  int nums[n];

  for(i=0;i<n;i++)
    cin>>nums[i];

  int suma=0,cont=0;

  for(i=0;i<n && suma<=t;i++){
    if(suma+nums[i]>t)
      break;
    suma+=nums[i];
    cont++;
  }


  int maxb=cont;

  while(j<n && i<n){
    suma-=nums[j];
    j++;
    cont--;
    while(i<n){
      if(suma+nums[i]>t)
        break;
      suma+=nums[i];
      i++;
      cont++;
    }

    if(cont>maxb)
      maxb=cont;
  }

  cout<<maxb<<endl;


  return 0;
}
