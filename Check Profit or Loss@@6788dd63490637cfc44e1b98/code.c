#include <stdio.h>
int main(){
    int costprice;
    int sellingprice;
    scanf("%d%d",&costprice,&sellingprice);
    if(sellingprice> costprice){
        printf("Profit");
    }
    else if(sellingprice==costprice){
        printf("No Profit No Loss");
    }
    else{
        printf("Loss");
    }
    return 0;
}