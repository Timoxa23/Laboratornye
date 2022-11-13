#include <stdio.h>
 
main() {
    int a,b,c;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    if (a==b&&b==c&&a==c)
printf("Ravnostoronnyu\n");
   else
   printf("NEravnostoronnyu\\n");
}