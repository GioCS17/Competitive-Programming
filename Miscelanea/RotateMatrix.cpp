#include <stdio.h>
#include <queue>
#include <iostream>
#include <bitset>
#include <deque>
using namespace std;
typedef int i;
typedef long long ll;
#define REP(i,a,b) for(int i=a;i<b;i++)
#define PB push_back
#define M 2010



void cyclic_roll(char &a, char &b, char &c, char &d)
{
    char temp = a;
    a = b;
    b = c;
    c = d;
    d = temp;
}

int main(){
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    int n=3;
    char matrix[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    for(int i=0; i<n/2; i++){
        for(int j=0; j<(n+1)/2; j++)
            cyclic_roll(matrix[i][j], matrix[n-1-j][i], matrix[n-1-i][n-1-j], matrix[j][n-1-i]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<<matrix[i][j]<<" ";
        cout<<endl;
    }


    return 0;
}
