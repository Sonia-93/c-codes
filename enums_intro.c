#include <stdio.h>
enum Light{
RED,
YELLOW,
GREEN

};
int main (){
 enum Light signal;
 signal=GREEN;

switch(signal){

 case RED:
 printf("Stop");
 break;

 case YELLOW:
 printf("Ready");
 break;
 case GREEN:
 printf("Go");
 break;
}
return 0;
}
