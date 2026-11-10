#include <stdio.h>
enum {LIGHT=0,FAN=1,AC=2,HEATER=3,PUMP=4};
unsigned char switch_on(unsigned char r,int d){return (unsigned char)(r | (1u<<d));}
unsigned char switch_off(unsigned char r,int d){return (unsigned char)(r & ~(1u<<d));}
unsigned char toggle(unsigned char r,int d){return (unsigned char)(r ^ (1u<<d));}
int is_on(unsigned char r,int d){return (r & (1u<<d))!=0;}
void show(unsigned char r){for(int b=7;b>=0;b--)putchar(((r>>b)&1u)?'1':'0');putchar('\n');}
int main(void){unsigned char r=0;r=switch_on(r,LIGHT);r=switch_on(r,AC);show(r);r=toggle(r,FAN);r=switch_off(r,LIGHT);show(r);printf("AC is %s, PUMP is %s\n",is_on(r,AC)?"ON":"OFF",is_on(r,PUMP)?"ON":"OFF");return 0;}