#include <stdio.h>
#include <map>
using namespace std;
int main(){
    long p,n;
    bool faro;
    map<long,pair<int,int>> dict;
    while(scanf("%ld %ld",&n,&p),n){
        long cont=1,level=2;
        long posx=n/2,posy=n/2;
        if(p==1)
            printf("Line = %ld, column = %ld.\n",posx+1,posy+1);
        else{
            while(cont<=n*n && level<=n){
                faro=false;
                for (long i = 0; i < level; ++i) {
                    if(++cont==p){
                        printf("Line = %ld, column = %ld.\n",n-posx+1,posy+1-i);
                        faro=true;
                        break;
                    }

                }
                if(faro)
                    break;
                posx--;
                posy-=level-1;
                for (long j = 0; j < level; ++j) {
                    if(++cont==p){
                        printf("Line = %ld, column = %ld.\n",n-(posx+j+2)+1,posy+1);
                        faro=true;
                        break;
                    }

                }


                if(faro)
                    break;
                posx+=level;

                for (long j = 0; j < level; ++j) {

                    if(++cont==p){
                        printf("Line = %ld, column = %ld.\n",n-posx,posy+2+j);
                        faro=true;
                        break;
                    }
                }
                if(faro)
                    break;
                posy+=level;
                for (long j = 0; j < level; ++j) {
                    if(++cont==p){
                        printf("Line = %ld, column = %ld.\n",(n-(posx-j)+1),posy+1);
                        faro=true;
                        break;
                    }

                }
                if(faro)
                    break;
                posx-=level;
                level+=2;
            }

        }

    }
    return 0;
}
