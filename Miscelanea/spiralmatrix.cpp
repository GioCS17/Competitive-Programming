#include <iostream>
#include <vector>
using namespace std;
int main(){
    unsigned int p,n;
    bool faro;
    while(cin>>n>>p,n){
        vector<vector<unsigned int>> matrix(n,vector<unsigned int>(n));
        unsigned int cont=1,level=2;
        unsigned int posx=n/2,posy=n/2;
        if(p==1)
            cout<<"Line = "<<posx+1<<", column = "<<posy+1<<"."<<endl;
        else{
            matrix[posx][posy]=cont++;
        while(cont<=n*n && level<=n){
            cout<<cont<<endl;
            faro=false;
            for (long i = 0; i < level; ++i) {
                matrix[posx-1][posy-i]=cont++;
                if(matrix[posx-1][posy-i]==p){
                    cout<<"Line = "<<n-posx+1<<", column = "<<posy+1-i<<"."<<endl;
                    faro=true;
                    break;
                }
            }
            if(faro)
                break;
            posx--;
            posy-=level-1;
            for (long j = 0; j < level; ++j) {
                matrix[posx+j+1][posy]=cont++;
                if(matrix[posx+j+1][posy]==p){
                    cout<<"Line = "<<n-(posx+j+2)+1<<", column = "<<posy+1<<"."<<endl;
                    faro=true;
                    break;
                }
            }


            if(faro)
                break;
            posx+=level;

            for (long j = 0; j < level; ++j) {
                matrix[posx][posy+j+1]=cont++;
                if(matrix[posx][posy+j+1]==p){
                    cout<<"Line = "<<n-posx<<", column = "<<posy+2+j<<"."<<endl;
                    faro=true;
                    break;
                }
            }
            if(faro)
                break;
            posy+=level;
            for (long j = 0; j < level; ++j) {
                matrix[posx-j-1][posy]=cont++;
                if(matrix[posx-j-1][posy]==p){
                    cout<<"Line = "<<(n-(posx-j)+1)<<", column = "<<posy+1<<"."<<endl;
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
