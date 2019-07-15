#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main(){

    int n,q,cont,ocurr,num;
    while(cin>>n>>q){
        cont=1;
        map<int,vector<int>> adj;
        for (int i = 0; i < n; ++i) {
            cin>>num;
            adj[num].push_back(cont);
            cont++;
        }
        for (int j = 0; j < q; ++j) {
            cin>>ocurr>>num;

            if(adj[num].size()<ocurr)
                cout<<0<<endl;
            else
                cout<<adj[num][ocurr-1]<<endl;

        }

    }


    return 0;
}
