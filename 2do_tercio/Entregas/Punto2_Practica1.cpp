#include <iostream>
using namespace std;
char operador;
double num1, num2;

// Callback functions for different operations
int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int subtract(int a, int b)
{
    return a - b;
}

int divide(int a, int b)
{
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero." << endl;
        return 0; // or handle error as appropriate
    }
}

// Function that performs an operation using a callback
void performOperation(int (*callback)(int, int), int x, int y)
{
    cout << "The result of the operation is: " << callback(x, y) << endl;
    cout << "The result of the operation is: " << callback(1, y) << endl;
    cout << "The result of the operation is: " << callback(x, 1) << endl;
}

int main()
{
    std::string txt_operador = "¿Que operaciones desea realizar?(+, -, *,/): ";
    std::cout << txt_operador << std::endl;
    std::cin >> operador;
    std::string numeros = "Que valores desea operar? (N1,N2): ";
    std::cout << numeros;
    std::cin >> num1 >> num2;

    if (operador == '+'){
        cout << "El resultado de la operacion es: "<<endl;
        performOperation(add, num1, num2);
    }
    else if (operador == '-'){
        cout << "El resultado de la operacion es: "<<endl;
        performOperation(subtract, num1, num2);
    }
    else if (operador == '*' or operador == 'x'){
        cout << "El resultado de la operacion es: "<<endl;
        performOperation(multiply, num1, num2);
    }
    else if (operador == '/'){
        if (num2 != 0){
            cout << "El resultado de la operacion es: "<<endl;
            performOperation(divide, num1, num2);
        }
        else{
            cout << "Error: No es posible dividir entre 0." << endl;
        }
    }
    else{
        cout << " Uso ./<ejecutable><num1><num2>" << endl;
    }   
    
    return 0;
}