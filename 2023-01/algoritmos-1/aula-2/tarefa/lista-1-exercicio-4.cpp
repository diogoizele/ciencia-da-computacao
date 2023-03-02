#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

   setlocale(LC_ALL, "Portuguese");

   const float DISCOUNT = 5 / 100;

   int id_vendor, product_code, quantity;
   float total, price, bonus;
	char nome[100];

   cout << "Digite o código do vendedor: ";
   cin >> id_vendor;
	fflush(stdin);

	cout << "Digite o nome do vendedor: ";
	fgets(nome, 100, stdin);
	fflush(stdin);

   cout << "Digite o código do produto: ";
   cin >> product_code;

   cout << "Digite a quantidade vendida: ";
   cin >> quantity;

   cout << "Digite o preço unitário do produto: ";
   cin >> price;

   total = quantity * price;

   bonus = total * DISCOUNT;

   cout << fixed;      // define a notação
   cout.precision(2);  // define a precisão

   cout << "O vendedor " << nome << " vendeu " << quantity
        << " unidades do produto " << product_code << " no valor de R$ "
        << price << " cada, totalizando R$ " << total << " de vendas." << endl;

   return 0;
}
