#include <stdio.h>
char ch;
scanf("%c",&ch);
if((ch=64) && (ch=91)){
    printf("Uppercase");
}
// else if((ch>="a")&&(ch<="z")){
//     printf("Lowercase");
// }
else{
    printf("Not an alphabet");
}