#include<stdio.h>
int main(){
    int N,K,A;
    scanf("%d %d %d", &N, &K, &A);

    for(int i=1; i< K; i++){
        if(A<=N) A++;
        if(A>N){
            A=1;
        } 
    }
    printf("%d\n",A);
    return 0;
}