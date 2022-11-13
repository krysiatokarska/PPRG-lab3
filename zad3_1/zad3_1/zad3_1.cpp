// zad 3.1 Napisz program który oblicza sumę, różnicę, iloczyn i iloraz dla dwóch
// liczb x i y wprowadzanych z klawiatury. W programie przyjmujemy, że liczby x i y
//są typu float(rzeczywistego). Dla zmiennych x, y suma, różnica, iloczyn i iloraz
// należy przyjąć format wyświetlania ich na ekranie z dokładnością do dwóch miejsc
// po kropce.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float x, y;
	cout << "Enter two numbers separated by space : ";
	cin >> x;
	cin >> y;
	float suma = x + y;
	float roznica = x - y;
	float iloczyn = x * y;
	float iloraz = x / y;

	//fixed ustala 2 miejsca po przecinku nawet jeśli są to 0.
	cout << fixed << setprecision(2);
	cout << "Sum of your numbers is equal to " << suma << endl;
	cout << "Difference of your numbers is equal to " << roznica << endl;
	cout << "Product of your numbers is equal to " << iloczyn << endl;
	cout << "Quotient of your numbers is equal to " << iloraz << endl;

	return 0;
}

