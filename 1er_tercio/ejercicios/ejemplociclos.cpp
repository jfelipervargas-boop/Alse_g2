#include <iostream>//srdio.h
//#define debug

int main() {
    int a = 5;
    int b = 10;
    if (a < b)
    {
        std::cout << "a es menor que b" << std::endl;
    }
    else if (a > b)
    {
        std::cout << "a es mayor que b" << std::endl;
    }
    else
    {
        std::cout << "a es igual que b" << std::endl;
    }

    int num1, num2;
    std::cout << "Ingrese dos numeros: ";
    std::cin >> num1 >> num2;
    if (num1%2==0 && num2%2==0){
        std::cout << "Ambos numeros son pares" << std::endl;
    }
    else if (num1%2!=0 && num2%2!=0){
        std::cout << "Ambos numeros son impares" << std::endl;
    }
    else if (num1%2==0 && num2%2!=0){
        std::cout << "El primer numero es par y el segundo es impar" << std::endl;
    }
    else
    {
        std::cout << "El primer numero es impar y el segundo es par" << std::endl;
    }
    int arr[5] = (10,20,30,40,50);
    
    return 0;
}