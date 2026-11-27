#include <stdio.h>

int main() {
int day;

 printf("Enter day number (1 - 7): ");
scanf("%d" , &day);

switch(day)
{
case 1:
printf("Saturday\n");
break;
case 2 :
printf("sunday\n");
break;

default:
printf("Weekday or Invalid day\n");

}
return 0;
}

