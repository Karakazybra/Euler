// about prime factors https://www.mathsisfun.com/prime-factorization.html
#include <stdio.h>

int main(void)
{
long num = 600851475143;
int answer = 0;
int i = 2;

 while(num != 1) 
  {
   if(num % i == 0)
    {
     if(answer < i) answer = i;
     num = num / i;
     i = 2;
    } else {
     i++;
    } 
  }

 printf("%d\n", answer);
 return 0;
}
