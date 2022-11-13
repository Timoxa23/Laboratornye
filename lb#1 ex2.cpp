#include <iostream> 
#include <cmath>

using namespace std;
int main()
{
float x = -2.235e-2;
float y = 2.23;
float z = 15.221;
float s;
int n;
s = exp(fabs(x-y))*pow(fabs(x-y),(x+y))/(atan(x)+atan(z))
+pow((pow(x,6)+pow(log(y),2)),1/3);
cout << s << endl;

//system("pause");
return 0;
}