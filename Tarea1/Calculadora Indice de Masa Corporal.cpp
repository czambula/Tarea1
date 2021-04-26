#include <iostream>
using namespace std;
//CALCULADORA DE ÍNDICE DE MASA CORPORAL
int main()
{
	
	//Declaracion de variables
	double IMC = 0;
	double alturapulgadas = 0, pesolibras = 0;
	double alturametros = 0, pesokilogramos = 0;
	string valor;
	int opcion;
	
	
	//Ingresar de datos
	cout<<"***Bienvenido a la calculadora de IMC***";
	cout<<"\n1. Pulgada / Libra"<<"\n2. Metro / Kilogramo";
	cout<<"\nIngrese una opcion: ";
	cin>>opcion;
	system("cls");
	
	if(opcion == 1)
	{
		cout<<"Ingrese su altura en pulgadas: ";
		cin>>alturapulgadas;
		cout<<"Ingrese su peso en libras: ";
		cin>>pesolibras;
		system("cls");
		IMC = (pesolibras * 703) / (alturapulgadas * alturapulgadas);
	}
	else if(opcion == 2)
	{
		cout<<"Ingrese su altura en metros: ";
		cin>>alturametros;
		cout<<"Ingrese su peso en kilogramos: ";
		cin>>pesokilogramos;
		system("cls");
		IMC = (pesokilogramos) / (alturametros * alturametros);
	}else
	{
		cout<<"¡¡El comando ingresado es INCORRECTO!!\n\n"<<"Solo se permiten las opciones: 1 o 2\n\n";
	}
	
	if(IMC < 18.5)
		{
			valor = "Bajo peso";
		}
		else if(IMC >= 18.5 && IMC <= 24.9)
		{
			valor = "Normal";
		}
		else if(IMC >= 25 && IMC <= 29.9)
		{
			valor = "Sobre peso";
		}
		else
		{	
			valor = "Obeso";
		}
	
	
	
	//Salida de datos
	if(opcion == 1 || opcion == 2)
	{
		cout<<"INSTITUTO NACIONAL DE LA SALUD";
		if(opcion == 1)
		{
			printf("\nSu altura es %.2f Pulgadas y su peso %.2f Libras",alturapulgadas,pesolibras);
		}
		else if(opcion == 2)
		{
			printf("\nSu altura es %.2f Metros y su peso %.2f Kilogramos",alturametros,pesokilogramos);
		}
		cout<<"\nSu Indice de Masa Corporal es: "<<IMC;
		cout<<"\nEstado: "<<valor;
		cout<<"\n";
	}
	else
	{
		cout<<"";
	}
	
	system("pause");
		
	return 0;
}
