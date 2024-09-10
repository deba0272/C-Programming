#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h>
//Lowest byte is the most significant byte
unsigned int end(unsigned int value);
int main(){
    unsigned int value=0x12345678;
    printf("0x%08"PRIx32"\n",end(value));
    return 0;
}
unsigned int end(unsigned int value){
    unsigned int ans=0;
    ans|=(value&0x000000FF)<<24;//byte 0 to 3;
    ans|=(value&0x0000FF00)<<8;//byte 1 to 2;
    ans|=(value&0x00FF0000)>>8;//byte 2 to 1;
    ans|=(value&0xFF000000)>>24;//byte 3 to 0;
    return ans;
}