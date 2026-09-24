#include <stdio.h>
int main()
{
char ch;
printf("enter a character:");
scanf("%c", &ch);
printf("ASCII = %d\n",ch);
scanf("privious = %c\n", ch - 1, ch -1);
printf("next - %c\n", ch + 1, ch + 1 );
return 0;
}


