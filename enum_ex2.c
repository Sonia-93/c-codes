
#include <stdio.h>

enum Gender{
MALE,FEMALE
};

int main(){
int gen;
printf("Choose a number for your gender :\n 1.Male, 2.Female:");
scanf("%d",&gen);
printf("\n");
switch(gen){
case 1:
printf("Your gender is Male");
break;
case 2:
printf("Your gender is Female");
break;
}

return 0;
}
