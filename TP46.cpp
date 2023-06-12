#include <iostream>
using namespace std;

bool EsNumeroPerfecto(int a);

int main()
{
    int i=1;
    while (i<=10000)
    {
        if (EsNumeroPerfecto(i))
        {
            cout<<i<<endl;
        }
        i++;
    }
    return 0;
}

bool EsNumeroPerfecto(int a)
{
    bool flag=false;
	int divisor=0;
    for (int i=1; i<a; i++)
    {
        if (a%i==0)
        {
            divisor+=i;
        }
    }
    if (a==divisor)
    {
    	flag=true;
	}
    return flag;
}
