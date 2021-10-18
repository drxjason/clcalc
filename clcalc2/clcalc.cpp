#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class Operations {
    public:
        double add(double x, double y);
        double subtract(double x, double y);
        double multiply(double x, double y);
        double divide(double x, double y);
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

int main(int argc, char *argv[]) {
    Operations op;
    if (argc != 4) {
        cout << "Usage: " << argv[0] << " [operation] " << "[number] " << "[number]" << endl;
        cout << "Operation:" << endl;
        cout << "   add             add 2 numbers" << endl;
        cout << "   subtract        subtract 2 numbers" << endl;
        cout << "   multiply        multiply 2 numbers" << endl;
        cout << "   divide          divide 2 numbers" << endl;
        cout << "Operation may be: \"add\"" << endl;
        return 0;
    }

    const string operation = argv[1];
    double x = atoi(argv[2]);
    double y = atoi(argv[3]);
    double z;

    if (operation == "add") {
        z = op.add(x, y);
    }
    
    else if (operation == "subtract") {
        z = op.subtract(x, y);
    }
    
    else if (operation == "multiply") {
        z = op.multiply(x, y);
    }
    
    else if (operation == "divide") {
        z = op.divide(x, y);
    }
}
