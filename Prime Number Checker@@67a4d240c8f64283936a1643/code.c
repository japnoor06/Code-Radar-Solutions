#include<stdio.h>
int prime(int x){
    for(int i=2;i<=x/2;i++){
        if(x%2==0){
            return 0;
        }
        else if (x==2){
            return 1;
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