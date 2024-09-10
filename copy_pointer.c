#include <stdio.h>
//copy string using pointers
void copy(char *,char *);
int main() {
   char source[15]="Hello World";
   char target[15];
   copy(target,source);
   printf("target=%s",target);
    return 0;
}
void copy(char *target,char *source){
    while(*source!='\0'){
        *target=*source;
        source++;
        target++;
    }
    *target='\0';
}