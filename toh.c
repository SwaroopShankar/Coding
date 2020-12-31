//program to illustrate tower of hanoi
#include<stdio.h>
#define N 3
void toh(int,char,char,char);
void main(){
   toh(N,'A','C','B');
}
void toh(int n,char A,char C,char B){
   if(n==1){
      printf("\n Move disk 1 from rod %c to rod %c",A,C);
   }
   else{
      toh(n-1,A,B,C);
      toh(1,A,C,B);
      toh(n-1,B,C,A);
   }
}
