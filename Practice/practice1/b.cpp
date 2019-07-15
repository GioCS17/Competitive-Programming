#include<iostream>
#include<queue>
#include<string.h>

using namespace std;

int n,m,k;

int movx[]={-1,0,1,0};
int movy[]={0,-1,0,1};

bool valid(int posx,int posy){
  return posx>0 && posx<=n && posy>0 && posy<=m;
}

int main(){

  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

  cin>>n>>m;
  cin>>k;
  int x,y,i,j;
  queue<pair<int,int>> q;
  int arr[n+1][m+1];
  memset(arr,50,sizeof arr);
  for(i=1;i<=k;i++){
    cin>>x>>y;
    arr[x][y]=0;
    q.push(make_pair(x,y));
  }
  while(!q.empty()){
    pair<int,int> p=q.front();
    q.pop();
    for(i=0;i<4;i++){
      if(valid(p.first+movx[i],p.second+movy[i])){
          if(arr[p.first+movx[i]][p.second+movy[i]]-1>arr[p.first][p.second]){
            arr[p.first+movx[i]][p.second+movy[i]]=arr[p.first][p.second]+1;
            q.push(make_pair(p.first+movx[i],p.second+movy[i]));
          }
      }
    }
  }
  //hola
  int maxi=-1;
  for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
      if(arr[i][j]>maxi){
      maxi=arr[i][j];
      x=i;y=j;
      }
    }
  }
  cout<<x<<" "<<y<<endl;

  return 0;
}
