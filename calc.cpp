// CLCalc Ver 1.0 :)
// By dRX Jason
// Revised October 18

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Call the Calculator class and define basic calculator functions

class Calculator {
    public:
        double add(double x, double y);
        double subtract(double x, double y);
        double multiply(double x, double y);
        double divide(double x, double y);
};


double Calculator::add(double x, double y) {
    cout << x + y << endl;
    return 0;
}

double Calculator::subtract(double x, double y) {
    cout << x - y << endl;
    return 0;
}

double Calculator::multiply(double x, double y) {
    cout << x * y << endl;
    return 0;
}

double Calculator::divide(double x, double y) {
    cout << x / y << endl;
    return 0;
}

int main() {
    Calculator calc;
    char op;
    double x;
    double y;

    system("clear");

    cout << "CLCalc v1.0" << endl;
    
    while (true) {
        cout << "clcalc$ ";
        cin >> op;

        // Custom Commands 
        if (op == 'c') {
            system("clear");
            continue;
        }
        else if (op == 'l') {
            cout << "list of operators {+, -, *, /}" << endl;
            continue;
        }
        else if (op == 'cmd') {
            
        }

        // Calculator Operations
        else if (op == '+') {
            cout << "enter numbers (add): ";
            cin >> x >> y;
        }
        else if (op == '-') {
            cout << "enter numbers (subtract): ";
            cin >> x >> y;
        }
        else if (op == '*') {
            cout << "enter numbers (multiply): ";
            cin >> x >> y;
        }
        else if (op == '/') {
            cout << "enter numbers (divide): ";
            cin >> x >> y;
        }
        else {
            cout << "err1: unknown operator" << endl;
            continue;
        }

        switch (op) {
            case '+':
                calc.add(x, y);
                break;
            case '-':
                calc.subtract(x, y);
                break;
            case '*':
                calc.multiply(x, y);
                break;
            case '/':
                calc.divide(x, y);
                break;
            default:
                break;
        };
    }
    return 0;
}
