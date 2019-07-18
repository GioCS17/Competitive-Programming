#include<iostream>
#include<vector>

using namespace std;

bool arr[100];

void bestsieve(){
	vector<int> primes;

	for(int i=2;i<100;i++){
		if(not arr[i])
			primes.emplace_back(i);

		for(int p:primes){
			if(p*i>100) break;
			arr[i*p]=1;
			if(i%p==0) break;
		}
	}

}
void cantprimes(){

	vector<int> primes;
	int cnt[100];
	int ex[100];

	for(int i=2;i<100;i++){
		if(not arr[i]){
			cnt[i]=2;
			ex[i]=1;
		}
		for(int p:primes){
			if(i*p>n) break;

			if(i%p==0){
				ex[i*p]=ex[i]+1;
				cnt[p*i]=cnt[i]/(ex[i]+1)*(ex[i]+2);
				//cnt[p*i]=cnt[i]+cnt[i]/(ex[i]+1); otra forma de hacer lo de arriba
				break;
			}
			else{
				exp[i*p]=1;
				cnt[p*i]=2*cnt[i];
			}
		}

	}

int main(){

	return 0;
}
