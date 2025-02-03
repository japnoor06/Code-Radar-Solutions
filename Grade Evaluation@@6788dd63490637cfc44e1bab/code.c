#include <stdio.h>
int main(){
    char grade;
    scanf("%c",&grade);
    if(grade=='A'){
        Printf("Excellent");
    }
    else if(grade=='B'){
        Printf("Good");
    }
    else if(grade=='C'){
        printf("Average");
    }
    else if(grade=='D'){
        printf("Below Average");
    }
    else if(grade=='F'){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }


}