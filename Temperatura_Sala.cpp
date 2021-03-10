//Desenvolver uma função de controle de temperatura de uma sala. Resposta deve ser Liga ou Desliga o Ar Condicionado

#include <conio.h>
#include <iostream>
#include <math.h>
#include <locale.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
 
int temperatura(int menor, int maior) 
{
	return rand()%(maior-menor+1) + menor;
}

int main (int argc, char const* argv[])
{
	char x,resp;
	
	
	cout << "As portas e janelas estao fechadas? "<< "S = Sim / N = Nao\n";
	cin >> x;
	do
	{
	if (x == 'N')
	{
		cout << "**********Ar condicionado desligado**********\n";
		cout << "\nFechar portas e janelas!";
		Sleep(5000);
		cout << "\n\nForam fechadas as portas e janelas? "<< "S = Sim / N = Nao\n";
		cin >> resp;
	}	
	}while (resp == 'N');
	
	{
		cout << "**********Ar condicionado ligado**********\n";
		cout << "\nSelecionando temperatura de acordo com o ambiente...\n";
		Sleep(5000);
		srand((unsigned)time(0)); 
		int temp = temperatura(16,30);
		cout << "\nTemperatura selecionada para o momento: " << temp << " graus Celsius";
	}
	
getch();
}
