// CLCalc 2.0
// By dRX Jason 
// Revised October 18

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <vector>

using namespace std;

class Operations {
    public:
        double add(double x, double y);
        double subtract(double x, double y);
        double multiply(double x, double y);
        double divide(double x, double y);
        double exponent(double x, double y);
};

double Operations::add(double x, double y) {
    double z;
    z = x + y;
    cout << z << endl;
    
    return 0;
}

double Operations::subtract(double x, double y) {
    double z;
    z = x - y;
    cout << z << endl;

    return 0;
}

double Operations::multiply(double x, double y) {
    double z;
    z = x * y;
    cout << z << endl;

    return 0;
}

double Operations::divide(double x, double y)  {
    double z;
    z = x / y;
    cout << z << endl;

    return 0;
}

double Operations::exponent(double base, double exp) {
    double z;
    z = pow(base, exp);
    cout << z << endl;

    return 0;
}

int main(int argc, char *argv[]) {
    Operations op;

    if (argc != 4) {
        cout << "Usage: " << argv[0] << " [operation] " << "[number] " << "[number]" << endl;
        cout << "Operation:" << endl;
        cout << "   add             add 2 numbers" << endl;
        cout << "   sub             subtract 2 numbers" << endl;
        cout << "   mul             multiply 2 numbers" << endl;
        cout << "   div             divide 2 numbers" << endl;
        cout << "   exp             find the power of a number" << endl;
        cout << "Err: not enough arguments" << endl;
        return 0;
    }

    const string operation = argv[1];
    double x = atoi(argv[2]);
    double y = atoi(argv[3]);
    double z;

    if (operation == "add") {
        z = op.add(x, y);
    }
    
    else if (operation == "sub") {
        z = op.subtract(x, y);
    }
    
    else if (operation == "mul") {
        z = op.multiply(x, y);
    }
    
    else if (operation == "div") {
        z = op.divide(x, y);
    }
    
    else if (operation == "exp") {
        z = op.exponent(x, y);
    }
}
