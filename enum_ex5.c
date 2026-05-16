
#include <stdio.h>

enum ErrorCode{
OK=0,
FILENOTFOUND=1,
ACCESSDENIED=2
};

void printError(enum ErrorCode code){
switch(code){
case OK:
printf("Operation successfull\n");
break;

case FILENOTFOUND:
printf("File not found\n");
break;

case ACCESSDENIED:
printf("Access Denied\n");
break;

default:
printf("unkown Error\n");
}
}
int main(){
printError(OK);
  printError(FILENOTFOUND);
    printError(ACCESSDENIED);
return 0;
}
