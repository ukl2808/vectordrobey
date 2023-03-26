/*Создать вектор дробных числе и все числа которые больше 5 увеличить на 1.2*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));

    vector<double> numbers(10);
    for (int i = 0; i < 10; ++i) {
        numbers[i] = static_cast<double>(rand()) / RAND_MAX * 10.0;
    }

    cout << "Vector before: ";
    for (const double& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    for (double& num : numbers) {
        if (num > 5) {
            num += 1.2;
        }
    }

    cout << "Vector after: ";
    for (const double& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Vector with numbers after decimal point greater than 5: ";
    for (const double& num : numbers) {
        if (num - static_cast<int>(num) > 0.5) {
            cout << num << " ";
        }
    }
    cout << endl;

    system("pause");
    return 0;
}

