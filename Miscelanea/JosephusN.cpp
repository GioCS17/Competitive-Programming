#include<iostream>

using namespace std;

struct node{
	int item;
	node *next;


	node(int t,node *n){
		item=t;
		next=n;
	}
};

typedef node* link;

int main(){

	int n;
	cin>>n;

	for(int i=2;i<=n;i++){
		link t=new node(1,0); 
		link x=t;

		for(int j=2;j<=i;j++)
			x=(x->next=new node(j,t));

		while(x!=x->next){
			for(int k=1;k<2;k++)
				x=x->next;

			link aux=x->next;

			x->next=x->next->next;
			delete aux;
		}
		cout<<"---"<<i<<endl;
		cout<<x->item<<endl;
	}

	return 0;
}

