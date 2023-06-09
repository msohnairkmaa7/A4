#include <stdio.h>
int main() {
   int i;
   for(i=10;i<=10;i--)
   {
      printf("%d\n",2*i-1);
      if(i<=1)
      break;
   }
   return 0;
}
