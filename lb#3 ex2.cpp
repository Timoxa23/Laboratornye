#include <stdio.h>
 
typedef unsigned int m_type;
 
int main()
{
    register m_type x = 2;
    while (x <= 1000000)
    {
        x *= x;
        ++x;
        printf("%u\n", x);
    }
    return 0;
}