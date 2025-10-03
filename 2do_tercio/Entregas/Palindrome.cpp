#include <iostream>
using namespace std;
bool num;

int main(){ 
    cout << "Ingrese un numero: "<< endl;
    cin >> num;
    int originalNum = num; // Store the original number
    int reversedNum = 0;
    if (originalNum < 0){
        cout << "Los numeros negativos no pueden ser palindromos" << endl;
    }
    else{
    while (num != 0){
        reversedNum = reversedNum *10 + num % 10;
        num /= 10;
        }
    }
    if(originalNum == reversedNum){
        cout << "True" << endl;
        return true;
    }
    else {
        cout << "False" << endl;
        return false;
    }
};