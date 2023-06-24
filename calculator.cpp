#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    return x / y;
}

int main()
{
    int x, y;
    
    cout << "Enter a number: " << endl;
    cin >> x;
    
    cout << "Enter another number: " << endl;
    cin >> y;
    
    cout << "The sum of " << x << " and " << y << " is " << add(x, y) << endl;
    cout << "The difference of " << x << " and " << y << " is " << subtract(x, y) << endl;
    cout << "The product of " << x << " and " << y << " is " << multiply(x, y) << endl;
    cout << "The quotient of " << x << " and " << y << " is " << divide(x, y) << endl;
    
    cout << "Hello World!" << endl;
    
    return 0;
}
