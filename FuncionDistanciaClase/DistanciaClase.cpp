#include <cassert>
/*Distancia entre dos valores
Distancia(3,5)=2
Distancia(5,3)=2

Distancia : R x R --> R /
Distancia(a,b) = |a-b|

Distancia(a,b) = Abs(a-b)

Distancia(a,0) = Abs(a)

Distancia(0,b) = Abs(b)*/
// Proto
double Distancia(double a, double b);

double Abs(double x);

bool AreNear(double a, double b, double precision);

// Prueba
int main() {
    assert( AreNear(Distancia(-3.2,5.6),8.8,0.1));
    assert( AreNear(Distancia(5.6,-3.2),8.8,0.1));
    assert( AreNear(Distancia(-5.6,3.2),8.8,0.1));
    assert( AreNear(Distancia(3.2,-5.6),8.8,0.1));
    assert( AreNear(Distancia(3,5),2,0.1));
    assert( AreNear(Distancia(5,3),2,0.1));
    //assert( AreNear(Distancia(-2.5,2.5),5));
    //assert( AreNear(Distancia(2.5,-2.5),5));
    assert( AreNear(Distancia(-7.1,-7.0),0.1,0.1));
    //assert( AreNear(Distancia(-7.0,-7.1),0.1));

}
// Implementacion
bool AreNear(double a, double b, double precision){
    return (a >= b) ? (a - b) <= precision : (b - a) <= precision;
}


double Distancia(double a, double b){
    return Abs(a-b);
}


double Abs(double x){
    return x < 0 ? -x : x;
}