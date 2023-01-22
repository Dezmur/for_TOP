// Спирькин Денис (Заголовки).cpp 
//

#include <iostream>
#include "Math_functions01.h"
#include "Cut_functions01.h"
using namespace std;

int main()
{
    cout << Factorial(5) << endl;
    cout << Average(5.5, 10) << endl;

    int mass[10] = {0,1,-2,3,4,-5,-6,7,8,9};
    int firstPart[10] = {0}, secondPart[10] = {0};

    
    //EvenAndOdd(mass, firstPart, secondPart, 10);
    //PosAndNeg(mass, firstPart, secondPart, 10);
    //ArrDiv(mass, firstPart, secondPart, 10, 4);

    for (int i = 0; i <= 9; i++) {
        cout << firstPart[i] << " ";
    }
    cout << endl;
    for (int i = 0; i <= 9; i++) {
        cout << secondPart[i] << " ";
    }

    return 0;
}


