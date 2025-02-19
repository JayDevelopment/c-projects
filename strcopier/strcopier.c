#include<stdio.h>
#include<string.h>
 
void copy(char* dst, char* src){
  while (*src != '\0'){
    *dst = *src;
    src++;
    dst++;
  }
  *dst = '\0';
}
 
int main(){
  char srcString[] = "Welcome to the coding lab!";
  char dstString[strlen(srcString)+1];
  copy(dstString, srcString);
  printf("%s", dstString);
}