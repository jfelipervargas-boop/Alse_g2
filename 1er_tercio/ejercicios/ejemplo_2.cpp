#include <iostream>
using namespace std;
// Global variable
long double bigfloat=0x151215612751;
//aux function
void aux_fun(){
    std::cout<<"loung doble global var"<<bigfloat<<endl;
    //std::cout << "printing x" <<x<<std::endl;
}
int main(){
    /*Multi
    line
    comment
    Swap x and y values
    */
    int x, y;
    int aux;
    cout<<"ingrese 2 mumeros"<<endl;
    cin>>x>>y;
    aux = x;
    x=y;
    y=aux;
    cout<<x<<" "<< y<<endl;
    //declaring multiple variable types
    double pi=3.141692;
    float height = 1.6;
    char character = 'a';
    bool flag=false;
    short count = 0;
    unsigned long largeInteger = 1234567890;

    std::cout<<"doble variable "<<pi<<endl;
    std::cout<<"float variable "<<height<<endl;
    std::cout<<"bool variable "<<flag<<endl;
    std::cout<<"short variable "<<count<<endl;
    std::cout<<"unsigned long variable "<<largeInteger<<endl;
    {
        int a=2;
        std::cout<<"a: "<<a<<endl;
        std::cout<<"x: "<<x<<endl;
    }
    aux_fun();
    return 0;
}