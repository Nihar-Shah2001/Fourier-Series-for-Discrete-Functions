// Fourier Series for Discrete Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
constexpr auto pi = 3.14159265;
using namespace std;
int main()
{
    cout << "\n\t\t FOURIER SERIES FOR DISCRETE FUNCTIONS\n";
    cout << "Enter the value upto which you want to calculate upto Nth Harmonic to: ";
    int N;
    cin >> N;
    cout << "Enter the number of values: ";
    short int n, i, j, l;
    double k;
    cin >> n;
    long double* cosvalues = new long double[N];
    long double* sinvalues = new long double[N];
    long double* x = new long double[n];
    long double* y = new long double[n];
    long double sum = 0;
    cout << "Please enter all the input values: \n";
    for (i = 0; i < n; i++)
    {
        cout << " Enter the " << i + 1 << " value of X(in Degrees): ";
        cin >> x[i];
        cout << " Enter the " << i + 1 << " value of Y: ";
        cin >> y[i];
        sum += y[i];
    }
    k = 0;
    cout << "\n x \t y";
    for (l = 0; l < n; l++)
    {
        cout << "\n " << x[l] << "\t" << y[l];
    }
    cout << "\n sum = \t" << sum;
    for (i = 0; i < N; i++)
    {
        cosvalues[i] = 0;
        sinvalues[i] = 0;
        cout << "\n\n \t cos(" << i + 1 << "x)" << "\t\t ycos(" << i + 1 << "x)" << "\t\t sin(" << i + 1 << "x)" << "\t\t ysin(" << i + 1 << "x)";
        for (j = 0; j < n; j++)
        {
            cout << "\n \t" << cos((k + 1) * x[j] * (pi / 180));
            cout << "\t\t\t" << y[j] * cos((k + 1) * x[j] * (pi / 180));
            cosvalues[i] += y[j] * cos((k + 1) * x[j] * (pi / 180));
            cout << "\t\t\t " << sin((k + 1) * x[j] * (pi / 180));
            cout << "\t\t\t" << y[j] * sin((k + 1) * x[j] * (pi / 180));
            sinvalues[i] += y[j] * sin((k + 1) * x[j] * (pi / 180));
        }
        cout << "\n \t \t \t \t " << cosvalues[i];
        cout << " \t \t \t \t " << sinvalues[i];
        cout << "\n \n";
        k++;
    }
    cout << "\n\t The Solution is: \n";
    cout << "\n y = " << sum / n;
    for (i = 0; i < N; i++)
    {
        cout << " + " << 2 * cosvalues[i] / n << "cos" << (i + 1) << "x";
        cout << " + " << 2 * sinvalues[i] / n << "sin" << (i + 1) << "x";
    }
    cout << "\n\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
