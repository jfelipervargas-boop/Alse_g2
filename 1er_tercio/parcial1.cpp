#include <iostream>
#include <cmath>

// Definir la estructura de un punto en 2D
struct Point
{
    double x, y;
};

// Función para calcular la distancia entre dos puntos

double calcularDistancia(Point p1, Point p2)
{
    double distancia = std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));
    return(distancia);
}

// Función para leer las coordenadas de varios puntos
void leerPuntos(Point puntos[], int n)
{
    char respuesta;
    std::cout << "¿Desea ingresar los puntos manualmente? (s/n): ";
    std::cin >> respuesta;
    // Completar: Verificar si la respuesta es 's' o 'n', tener en cuenta mayúsculas y minúsculas
    if (respuesta == 's' || respuesta == 'S')
    {
        // Completar: Leer las coordenadas de cada punto
        for (int i=0 <= n;i++,i<n; i++)
        {
            std::cout << "Ingrese las coordenadas del punto " << i << " (x, y): ";
            std::cin >> puntos[i] >> puntos;
        }
    }
    else
    {
        // Usar puntos predeterminados
        std::cout << "Usando puntos predeterminados...\n";
        puntos[0] = {0, 0};  // Punto 1 (0, 0)
        puntos[1] = {3, 4};  // Punto 2 (3, 4)
        puntos[2] = {6, 8};  // Punto 3 (6, 8)
        puntos[3] = {9, 12}; // Punto 4 (9, 12)
    }
}

// Función para calcular la distancia más cercana desde un punto específico
double calcularDistanciaMasCercana(Point puntos[], int n, const Point &pUsuario, int &indiceMasCercano)
{
indiceMasCercano=0;
double distanciaMinima = calcularDistancia(puntos[0], pUsuario);
for (int i = 1; i < n; i++)
{
    double distanciaActual = calcularDistancia(puntos[i], pUsuario);
    if (distanciaActual < distanciaMinima)
    {
        distanciaMinima = distanciaActual;
        indiceMasCercano = i;
    }
}
    return distanciaMinima;
}
/*BONO:
Escribir una función que reciba un arreglo de puntos y devuelva la distancia total de los puntos que conforman el arreglo si estos fueran recorridos en orden.
*/

// Función para mostrar el punto más cercano y la distancia
void mostrarResultado(Point puntos[], int indiceMasCercano, double distancia)
{
    std::cout << "El punto más cercano es: (" << puntos[indiceMasCercano].x << ", " << puntos[indiceMasCercano].y << ")\n";
    std::cout << "La distancia al punto más cercano es: " << distancia << std::endl;
}

int main()
{
    int n;

    std::cout << "Ingrese el número de puntos (mínimo 2): ";
    // Leer el número de puntos
    std::cin >> n;

    if (n < 2)
    {
        std::cout << "Se necesitan al menos 2 puntos para calcular las distancias.\n";
        return 1;
    }

    Point puntos[n];

    // Leer los puntos (manual o predeterminado)
    leerPuntos(puntos ,n);

    // Ingresar el punto del usuario
    Point pUsuario;
    std::cout << "Ingrese las coordenadas del punto desde el que calcular la distancia (x, y): ";
    std::cin >> pUsuario.>> pUsuario.;

    // Calcular la distancia más cercana

    <type> indiceMasCercano;
    // Mostrar el resultado
    mostrarResultado(puntos, <variable>, distanciaMinima);

    return 0;
}
