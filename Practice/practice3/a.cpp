#include<stdio.h>
#include<unordered_map>
#include<vector>

using namespace std;

void dfs(unordered_map<int,vector<int>> dict,int key,bool *states,int& cont1,int& cont2,bool faro){


  if(faro)
    cont1++;
  else
    cont2++;

  for(int x:dict[key])
    if(states[x]){
      states[x]=false;
      dfs(dict,x,states,cont1,cont2,!faro);
    }

}
int main(){

  int t,n,u,v,i;
  int cont,aux1,aux2;
  scanf("%d",&t);
  for(int j=1;j<=t;j++){
    scanf("%d",&n);
    bool states[20001]={0};
    unordered_map<int,vector<int>> dict;
    for(i=0;i<n;i++){
      scanf("%d %d",&u,&v);
      dict[u].push_back(v);
      dict[v].push_back(u);
      states[u]=true;
      states[v]=true;
    }
    cont=0;
    for(i=1;i<=20000;i++)
      if(states[i]){
        states[i]=false;
        aux1=aux2=0;
        dfs(dict,i,states,aux1,aux2,true);
        if(aux1>aux2)
          cont+=aux1;
        else
          cont+=aux2;
      }
    printf("Case %d: %d\n",j,cont);

  }

  return 0;
}
