#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    int number,size=0;

    while(cin>>number){
        arr.push_back(number);
        sort(arr.begin(),arr.end());
        size++;
        if(size==1)
            cout<<arr[0]<<endl;
        else if(size%2)
            cout<<arr[arr.size()/2]<<endl;
        else
            cout<<int((arr[size/2-1]+arr[size/2])/2)<<endl;

    }

    return 0;
}
