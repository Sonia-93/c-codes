#include <stdio.h>

enum Week{
MON,
TUE,
WED,
THUR,
FRI,
SAT,
SUN
};
int compare(enum Week day){
switch(day){
case MON:
case TUE:
case WED:
case THUR:
case FRI:
return 1;
case SAT:
case SUN:
return 0;

}

}

int main(){

printf("Monday---> %d\n",MON);
printf("Tuesday---> %d\n",TUE);
printf("%d\n", compare(MON));
printf("%d\n", compare(SAT));
return 0;
}
