#include <iostream>
#include <cmath>
using namespace std;

int main() {
double a, b, c;


cout << "Enter the coefficients of the quadratic equation (a, b, c): "<<endl;
cin >> a >> b >> c;


double discriminant = b * b - 4 * a * c;


if (discriminant > 0) {

double root1 = (-b + sqrt(discriminant)) / (2 * a);
double root2 = (-b - sqrt(discriminant)) / (2 * a);
cout << "Root 1 = " << root1 <<endl;
cout << "Root 2 = " << root2 <<endl;
} else if (discriminant == 0) {

double root = -b / (2 * a);
cout << "Double Root = " << root <<endl;
} else {

double realPart = -b / (2 * a);
double imaginaryPart = sqrt(-discriminant) / (2 * a);
cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" <<endl;
cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" <<endl;
}

return 0;
}
