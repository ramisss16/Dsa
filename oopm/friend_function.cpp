#include <iostream>
using namespace std;

class Box
{
private:
    int width;

public:
    Box(int w)
    {
        width = w;
    }

    // declare friend function
    friend void printWidth(Box b);
};

// Friend function definition
void printWidth(Box b)
{
    cout << "Width of box: " << b.width << endl;
}

int main()
{
    Box b1(20);

    // friend function is not called with b1.printWidth()
    printWidth(b1);

    return 0;
}

// 🔹 What is a Friend Function ?

//                              A friend function in C++ is a function that is not a member of a class,
//     but it can access the private and protected members of that class.

//     Normally,
//     only member functions of a class can access its private / protected data.But sometimes, we want an external function(not inside the class) to access those members.
// 👉 For that, we declare it as a friend.

// 🔹 Key Points about Friend Function

// Declared inside class using friend keyword.

// Not a member of class (so it’s not called using object.function()).

// Can access private & protected members of the class.

// Can be declared in one or multiple classes (useful for operator overloading).

// Its definition does not use ClassName:: scope resolution.