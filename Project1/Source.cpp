#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

void checkValidInput()
{
    if (cin.fail())
    {
        throw "Error.";
    }
}

void checkValidParams(double n)
{
    if (n < 3)
    {
        throw " n is only greatest of 3";
    }
}

void checkValidPathX(double a, double b)
{
    if (b <= a)
    {
        throw " b is only greatest of a";
    }
}

void checkValidStep(double h)
{
    if (h <= 0)
    {
        throw " h is only greatest of 0";
    }
}

double calc(double n, double x)
{
    double y;
    if (x >= 0)
    {
        {
            y = 0;
            for (int i = 1; i <= (n - 2); i++)
            {
                y += ((i - x) * (i - x));
            }
        }
    }
    else if (x < 0)
    {
        y = 0;
        for (int i = 0; i <= n; i++)
        {
            double p = 1;
            for (int j = i; j <= n - 1; j++)
            {
                p *= (i - x * j);
            }
            y += p;
        }

    }
    return y;
}

int main()
{
    double a, b, h, n;

    try
    {
        cout << "Please set variable n: ";
        cin >> n;
        checkValidInput();
        checkValidParams(n);

        cout << "Please set variable a: ";
        cin >> a;
        checkValidInput();
        checkValidParams(a);

        cout << "Please set variable b: ";
        cin >> b;
        checkValidInput();
        checkValidParams(b);

        cout << "Please set variable h: ";
        cin >> h;
        cout << endl;
        checkValidInput();
        checkValidParams(h);

        double x = a;
        cout << "Result: x = " << x << endl;
        cout << "Result: y = " << calc(n, x) << endl;

        ofstream fout("result.txt");
        for (double x = a; x <= b; x += h)
        {
            fout << "Result: x = " << x << endl;
            fout << "Result: y = " << calc(n, x) << endl;

            cout << "Result: x = " << x << endl;
            cout << "Result: y = " << calc(n, x) << endl;
        }
    }
    catch (const char* ex)
    {
        cout << ex << endl;
        return -1;
    }
    catch (...)
    {
        cout << "Unknown error" << endl;
        return -2;
    }
}