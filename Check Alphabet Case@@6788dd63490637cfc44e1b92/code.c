#include <stdio.h>
char ch;
scanf("%c",&ch);
if((ch>64) && (ch<91)){
    printf("Uppercase");
}
else if((ch>97)&&(ch<122)){
    printf("Lowercase");
}

else{
    printf("Not an alphabet");
}