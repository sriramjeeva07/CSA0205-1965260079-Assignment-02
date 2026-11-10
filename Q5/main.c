#include <stdio.h>
unsigned long checks;
int prime_sqrt(unsigned long n){checks=0;if(n<2)return 0;for(unsigned long i=2;i<=n/i;i++){checks++;if(n%i==0)return 0;}return 1;}
int prime_naive(unsigned long n,unsigned long *c){*c=0;if(n<2)return 0;for(unsigned long i=2;i<n;i++){(*c)++;if(n%i==0)return 0;}return 1;}
int main(void){unsigned long a[]={97,100,7919,1000003};for(int k=0;k<4;k++){unsigned long naive;int p=prime_sqrt(a[k]);printf("%8lu %-9s divisions = %lu; naive divisions = ",a[k],p?"prime":"not prime",checks);prime_naive(a[k],&naive);printf("%lu\n",naive);}return 0;}