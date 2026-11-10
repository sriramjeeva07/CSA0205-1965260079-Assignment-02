#include <stdio.h>
unsigned long long count;
int original(unsigned long n){count=0;if(n<2)return 0;for(unsigned long i=2;i<n;i++){count++;if(n%i==0)return 0;}return 1;}
int optimized(unsigned long n){count=0;if(n<2)return 0;if(n==2)return 1;if(n%2==0){count++;return 0;}for(unsigned long i=3;i<=n/i;i+=2){count++;if(n%i==0)return 0;}return 1;}
int main(void){unsigned long a[]={97,100,7919,1000003};puts("n original_divisions optimized_divisions");for(int i=0;i<4;i++){original(a[i]);unsigned long long x=count;optimized(a[i]);printf("%lu %llu %llu\n",a[i],x,count);}return 0;}