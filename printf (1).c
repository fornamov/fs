#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){

int unsigned code = atoi(argv[1]);

if(code <= 0x7f){  // 0 - 0x7f 0xxxxxxx
 printf("code <= 0x7f");
}

else if(code <= 0x7ff ){ // 0x80-0x7ff 110xxxxx 10xxxxxx
 printf("code <= 0x7ff");
}
  else   if(code <= 0xffff ){ // 0x800-0xffff 1110xxxx 10xxxxxx 10xxxxxx

 printf("code <= 0xffff");
}
   else if(code <= 0x1fffff ){ // 0x10000-0x1fffff  11110xxx 10xxxxxx 10xxxxxx 10xxxxxx

 printf("code <= 0x1fffff");
}

return 0;


} 