#include <stdio.h>
int main(){
    char word;
    scanf("%c",&word);
    if(word=='R'){
        printf("Stop");
    }
    else if(word=='G'){
        printf("Go");
    }
    else if(word=='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
}