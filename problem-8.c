#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n/2-1; i++){
        if(n%2 == 0){
            printf("I hate that ");
            printf("I love that ");
        }
    }
    if(n%2 == 0){
        printf("I hate that ");
        printf("I love it"); 
    }
    for(int i=1; i<=n/2; i++){
        if(n%2 != 0){
            printf("I hate that ");
            printf("I love that ");
        }
    }
    if(n%2 != 0){
        printf("I hate it "); 
    }
    
    return 0;
}


