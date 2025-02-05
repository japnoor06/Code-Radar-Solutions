#include <stdio.h>
int main(){
    int star;
    scanf("%d",&star);
    for(int i=star;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}