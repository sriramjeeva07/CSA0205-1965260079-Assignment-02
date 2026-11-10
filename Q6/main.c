#include <stdio.h>
int main(void){double principal,rate,payment;printf("Enter principal monthly_rate_percent fixed_payment: ");if(scanf("%lf%lf%lf",&principal,&rate,&payment)!=3||principal<=0||rate<0||payment<=0){puts("Invalid input");return 1;}
 double balance=principal,total_interest=0;int month=0;const int limit=360;
 printf("Month Interest Payment Balance\n");
 while(balance>0.005 && month<limit){month++;double interest=balance*rate/100.0;total_interest+=interest;balance+=interest;double actual=payment<balance?payment:balance;balance-=actual;if(balance<0.005)balance=0;printf("%d %.2f %.2f %.2f\n",month,interest,actual,balance);if(payment<=interest){puts("Repayment does not exceed interest; loan will not amortize.");return 2;}}
 if(balance==0)printf("Paid in %d months; total interest=%.2f\n",month,total_interest);else printf("Safety limit reached: balance=%.2f\n",balance);return 0;}