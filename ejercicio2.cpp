#include<iostream>
#include<conio.h>

using namespace std;


float calculacostoH(int edad)
{
	float costo;
	costo = (edad < 25) ? 1000 : (edad >= 25) ? 700 : 0;
	return costo;	
	
	
}

float calculacostoM(int edad)

{

	float costo;
	costo = (edad < 21) ? 800 : (edad >= 21) ? 500 : 0;
	return costo;
}




int main()

{
	int edad;
	char sexo;
	float costo;
	cout << "ingrese edad ";
	cin >> edad;
	cout << "ingrese sexo ";
	cin >> sexo;
	costo= (sexo == 'H') ? calculacostoH(edad) : (sexo == 'M') ? calculacostoM(edad) : 0;
    cout<<"el costo es "<< costo;
	
	_getch();




}
