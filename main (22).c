/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int i, j, end, sum;
 printf("Enter upper limit: ");
 scanf("%d", &end);
 printf("All Perfect numbers between 1 to %d:\n", end);
for(i=1; i<=end; i++)
 {
 sum = 0;
 for(j=1; j<i; j++)
 {
 if(i % j == 0)
 {
 sum += j;
 }
 }
 if(sum == i)
 {
 printf("%d, ", i);
 }
 }
return 0;
}
