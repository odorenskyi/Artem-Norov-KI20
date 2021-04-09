#include <iostream>
#include <math.h>
#include <clocale>

using namespace std;

double s_calculation(float x, float y, float z){
    const double P = 3.141592653589793;
    float S = 0.5 *((pow(y,2) + 2 * z)/(sqrt(7*P + x))) - sqrt(exp(abs(x)) + (sqrt(abs(y - z))/sin(z*y)));
    return S;
}
