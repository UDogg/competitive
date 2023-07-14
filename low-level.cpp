int x = 5;
int* ptr = &x;  // Pointer to x
int& ref = x;   // Reference to x

*ptr = 10;      // Modifying x indirectly using the pointer
ref = 15;       // Modifying x indirectly using the reference

cout << x << endl;  // Output: 15
int* p = new int;   // Allocate memory for an integer
*p = 5;             // Assign a value to the allocated memory

// ...

delete p;           // Deallocate the memory

// ...

// It's crucial to deallocate memory to avoid memory leaks
class Shape {
public:
    virtual float area() = 0;  // Pure virtual function
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    float area() override {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle c(5);
    Shape* shapePtr = &c;

    cout << shapePtr->area() << endl;  // Output: 78.5
    return 0;
}

/*Templates allow writing generic code that can work with different data types.
Template syntax and error messages can be confusing for beginners.*/

template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 20;
    int maxInt = getMax(x, y);

    double a = 3.14, b = 2.71;
    double maxDouble = getMax(a, b);

    cout << maxInt << endl;      // Output: 20
    cout << maxDouble << endl;   // Output: 3.14

    return 0;
}
