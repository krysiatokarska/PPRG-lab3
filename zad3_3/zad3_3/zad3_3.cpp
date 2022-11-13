// zad3_3 Napisz program rozwiązujący równanie kwadratowe. Ma wypisać postać, pobierze liczby 
// pokaże postać uwzględniając podane współczynniki i obliczy pierwiastki.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "The form of a quadratic equation is ax^2 + bx + c." << endl;
    float a, b, c;
    cout << "Enter coefficents a, b and c separated by space: ";
    cin >> a >> b >> c;
    cout << "Now, the form of this specific quadratic equation, given your coefficients is: "
        << a << "x^2 + " << b << "x + " << c << endl;
    // Wyliczanie delty
    float delta = b * b - 4 * a * c;
    float x1, x2, x, x1_2, x2_2;

    // Wariant 1 - delta mniejsza od 0, 2 rozwiązania w zbiorze liczb zespolonych
    if (delta < 0) {
        delta = abs(delta);
        x = -b / (2 * a);
        x1_2 = sqrt(delta);
        x2_2 = -sqrt(delta);
        cout << "There are two solutions in a complex number set, x1 = " << x << " + "
            << x1_2 << "i and x2 = " << x << " " << x2_2 << "i";
    }
    // Wariant 2 - delta równa 0, pokazuje się jedno rozwiązanie
    else if (delta == 0) {
        x1 = -b / (2 * a);
        cout << "There is one solution, x1= " << x1;
    }
    // Wariant 3 - pozostałe przypadki => delta większa od 0, 2 rozwiązania w zbiorze liczb rzeczywistych
    else {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        cout << "There are two solutions, x1 = " << x1 << " and x2 = " << x2;
    }
}
