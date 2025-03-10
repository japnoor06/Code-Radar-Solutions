#include<stdio.h>
int prime(int x){
    for(int i=1;i<=x/2;i++){
        if(x%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int z=prime(n);
    printf("%d",z);
    return 0;
}