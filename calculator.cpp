#include <iostream>
using namespace std;

float q = 0.0;

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

int quotient(int x, int y)
{
    return x/y;
}

float divide(int x, int y)
{
    q = float(x)/float(y);
    return q;
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
    cout << "The quotient of " << x << " and " << y << " is " << quotient(x, y) << endl;
    cout << "The division of " << x << " and " << y << " produces " << divide(x, y) << endl;
    
    cout << "Hello World!" << endl;
    
    return 0;
}
