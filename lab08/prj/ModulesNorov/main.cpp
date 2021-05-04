#include <iostream>
#include <math.h>
#include <clocale>
#include <stdlib.h>
#include <string>
#include <wchar.h>
#include "ModulesNorov.h"

using namespace std;

float s_calculation(float x, float y, float z){
    const double P = 3.141592653589793;
    float S = 0.5 *((pow(y,2) + 2 * z)/(sqrt(7*P + x))) - sqrt(exp(abs(x)) + (sqrt(abs(y - z))/sin(z*y)));
    return S;
}

double Beaufortmark(double W){
    if (W < 0.3){
        return 0.0;
    }else if (W >= 0.3 && W <= 1.5){
        return 1.0;
    }else if (W >= 1.6 && W <= 3.3){
        return 2.0;
    }else if (W >= 3.4 && W <= 5.4){
        return 3.0;
    }else if (W >= 5.5 && W <= 7.9){
        return 4.0;
    }else if (W >= 8.0 && W <= 10.7){
        return 5.0;
    }else if (W >= 10.8 && W <= 13.8){
        return 6.0;
    }else if (W >= 13.9 && W <= 17.1){
        return 7.0;
    }else if (W >= 17.2 && W <= 20.7){
        return 8.0;
    }else if (W >= 20.8 && W <= 24.4){
        return 9.0;
    }else if (W >= 24.5 && W <= 28.4){
        return 10.0;
    }else if (W >= 28.5 && W <= 32.6){
        return 11.0;
    }else if (W >= 32.7){
        return 12.0;
    }
    return W;
}
std::string  Helmetsize(std::string length){
    std::string sizesh;
    int d = atoi(length.c_str());
    if (d == 53 || d == 54){
        sizesh = "XS";
        return sizesh;
    }
    if (d == 55 || d == 56){
        sizesh = "S";
        return sizesh;
    }
    if (d == 57 || d == 58){
        sizesh = "M";
        return sizesh;
    }
    if (d == 59 || d == 60){
        sizesh = "L";
        return sizesh;
    }
    if (d == 61 || d == 62){
        sizesh = "XL";
        return sizesh;
    }
    if(d > 62 || d < 53){
        sizesh = "E";
        return sizesh;
    }
}

int BinD15(int N){
    int result = 0;
    bool flag = false;
    for (int n=sizeof(int)*8-1; n>-1; n--)  {
        if((N>>n)&1)
            if(!flag) {
                flag = true;
            }
        if (flag){
            if((N>>15)&1){
                result += ((N>>n)&1)? 1 : 0;
            }else{
                result += ((N>>n)&1)? 0 : 1;
            }
        }
    }
    return result;
}
