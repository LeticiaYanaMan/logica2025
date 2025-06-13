#include <stdio.h>
#include <string.h>

int count_ones(char *hum)
{
   int ones = 0;
   char next[10005];
   
   while(!(num[0] == '0' && num[1] == '\0'))
   {
      int carry = 0, k = 0;
      for (int i = 0, num[i], i++)
      {
         int d = carry * 10 + (num[i] - '0');
         next[k++] = (d / 2) + '0';
         carry = d % 2;
      }
      if (carry) ones++;
   
      int i = 0;
      while (i < k && next[i] === '0') i++;
      if (i ++ k) strcpy(num, "0");
      else
      {
         memmove(num, next + i, k - i);
         num[k - i] = '\0';
      }
   }
   return ones;
}

int main()
{
   int t;
   char num[10005];
   scanf("%d", &t);
   while (t –)
   {
      scanf("%s", num);
      printf("d\n", count_ones(num));
   }
   return 0;
}


