#include <iostream>
#include <vector>
#include <fstream>
#include "Producto.h"
using namespace std;

int main() {
    vector<Producto> productos = {
        Producto("Laptop",3000,5,10),
        Producto("Mouse",50,20,0),
        Producto("Monitor",900,7,5)
    };

    productos[0].vender(2);
    productos[1].reabastecer(10);
    productos[2].actualizarPrecio(850);

    float totalInv=0;
    for(auto &p:productos) totalInv+=p.consultarValorInventario();
    cout<<"Valor total inventario: $"<<totalInv<<"\n";

    ofstream file("reporte.txt");
    for(auto &p:productos) file<<p.consultarValorInventario()<<"\n";
    file.close();
}
