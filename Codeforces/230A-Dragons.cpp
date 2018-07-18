#include<stdio.h> 
#include<map>
using namespace std;
int main(){
  int s,n;
  scanf("%d %d",&s,&n);
  std::map<int,int> dragons;
  while(n--){
    int x,y;
  scanf("%d %d",&x,&y);
  if(s>x)
    s+=y;
  else
    dragons.insert(std::pair<int,int>(x,y));
 }
 int cont=0;
 while(cont!=dragons.size()){
   cont=0;
   auto it=dragons.begin();
   while(it!=dragons.end()){
     if(s>it->first)
     {
       s+=it->second;
       dragons.erase(it);
       cont--;
     }
     cont++;
     it++;
   }
 }
 if(dragons.size())
   printf("NO");
 else
   printf("YES");

   return 0;
}
