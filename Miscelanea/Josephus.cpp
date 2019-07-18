#include<iostream>

using namespace std;

struct node{
	int item; node* next;
	node(int x,node *t){ item=x; next=t;}
};
typedef node* link;

int sizeLinkedList(link x){
	int cont=1;
	int value=x->item;
	x=x->next;
	while(x->item!=value){
		cont++;
		x=x->next;
	}
	return cont;
}

int main(){

	int n,m;
	cin>>n>>m;

	link t=new node(1,0); t->next=t;
	link x=t;

	for(int i=2;i<=n;i++)
		x=(x->next=new node(i,t));	

	while(x!=x->next){
		for(int i=1;i<m;i++)	x=x->next;
		x->next=x->next->next;
	}
	cout<<x->item<<endl;
	

	return 0;
}
