#include <stdio.h>
#include <time.h>
int main(){
int cont=5;
int primo=0;

while(1){

 primo=0;
for (int i = 1; i <= cont; i++)
{
      //printf("%d (percentagem) %d -> %d \n",cont,i,cont%i);
    
    float resultado=cont%i;
    if(resultado==0){
        primo++;
    }
}


if(primo==2){
    printf("prime -> %d\n",cont);
   
}

cont++;
}

return 0;
}
