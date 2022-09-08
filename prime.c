#include <stdio.h>
#include <time.h>
int main(){
int cont=5;
int prime=0;

while(1){

 prime=0;
for (int i = 1; i <= cont; i++)
{ 
    float result=cont%i;
    if(result==0){
        prime++;
    }
}

if(prime==2){
    printf("prime -> %d\n",cont);
}

cont++;
}

return 0;
}
