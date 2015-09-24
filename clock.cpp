#include <time.h>
#include <stdio.h>

int main(void)
{
   clock_t start, end;
   long l;

   start = clock();

   for (l=0; l<100000000; l++);

   end = clock();
   printf("‹óƒ‹[ƒv1‰­‰ñ‚ÌŽžŠÔ: %f•b\n", (double)(end - start) / CLOCKS_PER_SEC);

   return 0;
}