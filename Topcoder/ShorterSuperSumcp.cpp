#include<iostream>
#include<vector>
class ShorterSuperSum{

  public:
    int arr[15][15];
    int arr2[15][15];
    void fill(int k,int n){
      if(k==0){
        arr[k][n]=n;
        return;
      }
      for(int i=1;i<=n;i++){
        if(arr[k-1][i]==0)
          fill(k-1,i);
        arr[k][n]+=arr[k-1][i];
      }
      return;
    }
    void fill2(){
      int i,j,k;
      for(i=0;i<15;i++)
        for(j=0;j<15;j++)
          arr2[i][j]=0;
      for(i=1;i<15;i++)
        arr2[0][i]=i;

      for(i=1;i<15;i++){
        for(j=1;j<15;j++){
          for(k=1;k<=j;k++)
            arr2[i][j]+=arr2[i-1][k];
        }
      }
    }
    ShorterSuperSum(){
      int i,j;
      for(i=0;i<15;i++)
        for(j=0;j<15;j++)
          arr[i][j]=0;
      for(i=1;i<15;i++)
        fill(14,i);
      fill(14,14);
      fill2();
    }
    int calculate(int k,int n){
      return arr[k][n];
    }
    int calculate2(int k,int n){
      return arr2[k][n];
    }

};
