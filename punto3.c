#include <iostream> 
using namespace std;

bool esPrimo(int numero) {
  // Casos especiales
  if (numero == 0 || numero == 1 || numero == 4) return false;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return false;
  }
 
  return true;
}

bool esPrimo(int numero);

int main() {
  int numero;
  for (int k = 1; k <= 4; k++)
{

  cout << "Ingrese el numero numero:\n";
  cin >> numero;
  if (esPrimo(numero)) {
    cout << "Es primo";
  } else {
    cout << "NO es primo";
  }
}
}