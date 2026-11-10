#include <stdio.h>
char grade_ladder(int m){if(m<0||m>100)return '?';if(m>=90)return 'S';if(m>=80)return 'A';if(m>=70)return 'B';if(m>=60)return 'C';if(m>=50)return 'D';return 'F';}
char grade(int m){if(m<0||m>100)return '?';switch(m/10){case 10:case 9:return 'S';case 8:return 'A';case 7:return 'B';case 6:return 'C';case 5:return 'D';default:return 'F';}}
int main(void){int a[]={100,95,83,50,49,-5,90,89,0,101};for(int i=0;i<10;i++)printf("%d:%c ",a[i],grade(a[i]));puts("");return 0;}