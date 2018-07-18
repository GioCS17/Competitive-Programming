#include<stdio.h>

int main(){
  unsigned long n,aux,aux2,aux3,temp;
  unsigned long long acum=0;
  scanf("%lu", &n);
  for(int i=0;i<n;i++)
  {
    if(i%3==0)
      scanf("%lu", &aux);
    else if(i%3==1)
      scanf("%lu", &aux2);
    else if(i%3==2)
      scanf("%lu", &aux3);
    else{
      if(aux>aux2 && aux>aux3)
        acum+=aux;
      else{
        if(aux2>aux3)
          acum+=aux2;
        else
          acum+=aux3;
      }
        aux=0;aux2=0;aux3=0;
    }
  }

      if(aux>aux2 && aux>aux3)
        acum+=aux;
      else{
        if(aux2>aux3)
          acum+=aux2;
        else
          acum+=aux3;
      }

   printf("%llu",acum);
  return 0;
}
     
