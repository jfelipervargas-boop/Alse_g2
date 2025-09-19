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
    int arr[5] = {10,20,30,40,50};
    
    int* pToInt;
    pToInt = &arr[5];
    std::cout << "valor apuntado por pToInt"<<*pToInt << std::endl;
    for (int i = 0; i < 5;i++,pToInt++)
    {
        std::cout << "Elemento " << i << ": " << *pToInt << std::endl;
    }
    pToInt=&a;
    std::cout << "valor apuntado por pToInt"<<*pToInt << std::endl;

    //while and do while

    int count = 0;
    char userInput = 'y';
    while(userInput== 'y' || userInput == 'Y'){
        std::cout << "Ingrese un caracter (y/n): ";
        std::cin >> userInput;
        std::cout << "Caracter # "<<count+1 << "ingresado: "<<userInput <<std::endl;
    }
    while (1){
    //while infinito (1) while (count>0)
    break;
    }

    return 0;
}