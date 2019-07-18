#include <stdio.h>
#include <map>
#include <iostream>
using namespace std;
void filldict(map<long,pair<int,int>> &dict,int n) {
    long cont=1,level=2;
    long posx=n/2,posy=n/2;
    dict[1].first=posx;
    dict[1].second=posy;
    while(cont<=n*n) {
        for (long i = 0; i < level; ++i) {
            ++cont;
            dict[cont].first=n-posx+1;
            dict[cont].second=posy+1-i;
        }
        posx--;
        posy-=level-1;
        for (long j = 0; j < level; ++j) {
            ++cont;
            dict[cont].first=n-(posx+j+2)+1;
            dict[cont].second=posy+1;

        }

        posx+=level;

        for (long j = 0; j < level; ++j) {
            ++cont;
            dict[cont].first=n-posx;
            dict[cont].second=posy+2+j;
        }
        posy+=level;
        for (long j = 0; j < level; ++j) {
            ++cont;
            dict[cont].first=(n-(posx-j)+1);
            dict[cont].second=posy+1;
        }
        posx-=level;
        level+=2;
    }
}
int main(){
    long p,n;
    map<long,pair<int,int>> dict;

    while(scanf("%ld %ld",&n,&p),n){
        filldict(dict,n);
        printf("Line = %ld, column = %ld.\n",dict[p].first,dict[p].second);
    }

    return 0;
}
