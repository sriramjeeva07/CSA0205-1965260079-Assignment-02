#include <stdio.h>
int calls;
int verify(int id){calls++; return id%3==0;}
int main(void){
 int n=1000, eligible=0;
 for(int i=0;i<n;i++){int senior=(i%2)==0, classok=(i%5)!=0;
  if((senior && classok) || verify(i)) eligible++;
 }
 printf("Passengers=%d eligible=%d verify_calls=%d\n",n,eligible,calls);
 calls=0; eligible=0;
 for(int i=0;i<n;i++){int senior=(i%2)==0, classok=(i%5)!=0;
  if(verify(i) || (senior && classok)) eligible++;
 }
 printf("Reordered eligible=%d verify_calls=%d\n",eligible,calls);
 return 0;
}