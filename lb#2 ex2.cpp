#include <stdio.h>
 
main() {
    int a,b,c;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    if((a+b==2*c)||(a+c==2*b)||(b+c==2*a)) 
    printf("Mozno obrazovat posledovatelnost");
    else
    printf("Nelzy obrazovat posledovatelnost");
}
    