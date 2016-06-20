#include <iostream>

using namespace std;

void leggi_numeri(int& pri, int& sec)
{
do
	{cout << "Scrivi il primo numero positivo:" << endl;
	cin >> pri;}	
	while (pri<0); // verifica se l'utente ha digitato un numero positivo
	do
	{cout << "Scrivi il secondo numero positivo:" << endl;
	cin >> sec;}	
	while (sec<0); // verifica se l'utente ha digitato un numero positivo
	
}
int quoziente(int num1, int num2) 
{
	int b=1;
	int c;
for(int i=1;b<num1 && b!=num1;i++) { 
// controlla in ogni ciclo se b è minore di num1 e se è diverso da num1, quando b sarà maggire num1 o uguale a num1,si stoppa il ciclo
b=num2*i; //b è uguale a num2*i(che cresce ad ogni ciclo)
// cout << b << " " << i << endl; è un test, che ho utilizzato per vedere tutto il processo ciclo per ciclo;
if (b>num1 || b!=num1) // serve a gestire il valore di i
c=i-1;
else c=i;
}	
 return c;
}
int resto(int num1, int num2)
{
int d=quoziente(num1,num2); //prendo il risultato dalla divsione intera 
//cout << "son" << d << endl;;
d=num2*d; //  moltiplico d per il divisore(num2) 
return num1-d; // faccio la sottrazione e ciò che avanza è il resto
}

int main()
{
	char risposta;
do
{
	int num1,num2;
	int pri,sec;
	leggi_numeri(pri,sec);
	// ordina i numeri digitati(prima il grande e poi il piccolo)
	if (pri>sec) 
	{
	num1=pri;
	num2=sec;
	}
	else 
	{
		num1=sec;
		num2=pri;
	}
	cout << "Il quoziente della divisione del maggiore dei due per il minore e': " << quoziente(num1,num2) <<endl;
	cout << "mentre il resto della stessa divisione intera e': " << resto(num1,num2) << endl;
	cout << "vuoi continuare[s/n]" << endl;
	cin >> risposta;
	}
	while(risposta == 's');
}
