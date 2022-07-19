/* 
2!/5 + 3!/5^2 + 4!/5^3 + 5!/5^4 + N!/5^5
*/
#include <iostream>

using namespace std;

double Factorial(int num)
{
     double fac=1;
     //ejemplo: 5! = 1x2x3x4x5 =120
    for(int k=1; k<=num; k++)
    {
      fac=fac*k;
    }
    return fac;
}

int potencia(int base, int exp)
{
    int resul=1;
    for(int e=1; e<=exp; e++)
        resul=resul*base;
    return resul;
}
double serie05(int N)
{
    double suma = 0;
    
    for(int i=2; i<=N; i++)
    {
        suma=suma +(Factorial(i)/potencia(5, i-1));
    }
    return suma;
}
int main()
{
   cout<<endl<<"El factorial de 6 es: "<<Factorial(6);
   cout<<endl<<"La potencia de 5 a la 5 es: "<<potencia(5,5);
   cout<<endl<<serie05(6);

}
