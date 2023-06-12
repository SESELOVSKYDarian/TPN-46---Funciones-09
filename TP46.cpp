#include <iostream>
#include <string>
using namespace std;
bool EsNumeroPerfecto(int a);
int main ()
{
	int n;
	string msg="NO";
	cout<<"Ingrese numero: ";
	cin>>n;
	if(EsNumeroPerfecto(n)){
		msg="SI";
	}
	cout<<msg<<endl;
	return 0;
}
bool EsNumeroPerfecto(int a)
{
	bool flag=false;              
	int i=1;
	int divisor=0;
	while (i<=a)
	{
		if (a%i==0){
			divisor=divisor+i;
		}
		i++;
	}
	if(a==divisor)
	{
			flag=true;
	}
	return flag;
}