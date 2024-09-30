#include <stdio.h>
#include <stdlib.h>

int compare(const void*a , const void*b){
return (*(int*)a - *(int*)b);
}

void solve(){
int n,i;
printf("enter n:\n");
scanf("%d",&n);
int tab[n];

printf("enter numbers:\n");
for(i=1 ; i<=n ; i++){
    printf("i=%d\n",i);
    scanf("%d",&tab[i]);
}
qsort(tab+1 , n , sizeof(int) , compare);

for(i=1 ; i<=n ; i++)
    printf("%d",tab[i]);
}

int main(){

solve();

return 0;



}
