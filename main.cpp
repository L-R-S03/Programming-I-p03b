#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//function Monthly  accepts no parameters and returns the entered Monthly Payment
double Monthly(void)
{
        double m;
        cout << "Enter the monthly payment. ";
        cin >> m;
        return m;
}
//-----------------------------------------------------------------------
//function Interest accepts no parameters and returns the monthly interest rate using the entered APR
double Interest(void)
{
        double apr;
        cout << "Enter the APR. ";
        cin >> apr;
        //divides APR by 1200 to calculate monthly interest rate
        return apr/1200;
}
//-------------------------------------------------------------------------
//function term accepts no parameters and returns the amount of months in the term
int Term(void)
{
        int t;
        double yr;
        cout << "Enter the terms in years. ";
        cin >> yr;
        t=yr*12;
        return t;
}
//function Borrowed accepts parameters for the montly payment, monthly interest rate, and the number of terms and returns the amount that can be borrowed
double Borrowed(double M, double i, int n)
{
        return M*(1-pow(1+i,-n))/i;
}
//function main calculates how much can be borrowed using the above functions
int main ()
{
        double m=Monthly();
        double i=Interest();
        int t=Term();
        double borrowed=Borrowed(m,i,t);
        cout <<"You can borrow $"<< fixed << setprecision(2) << borrowed<<".";
        cout << endl;
        return 0;
}

