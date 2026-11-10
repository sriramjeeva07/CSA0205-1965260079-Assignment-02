#include <stdio.h>
int main(void){
 double price; int qty, senior; 
 printf("Enter price, quantity, senior(1/0): ");
 if(scanf("%lf%d%d",&price,&qty,&senior)!=3 || price<0 || qty<0){puts("Invalid input");return 1;}
 double gross=price*qty, discount=senior?gross*15.0/100.0:0.0, tax=gross*5.0/100.0;
 double total=gross-discount+tax, net=total>1000.0?total-50.0:total;
 printf("Gross=%.2f Discount=%.2f Tax=%.2f Total=%.2f Net=%.2f\n",gross,discount,tax,total,net);
 return 0;
}