#include <iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

class Point
{
   private:
        float x;
        float y;
        float z;
    public:
        Point(float x_coord, float y_coord, float z_coord);
        Point();
        void asignarX(float x_coord);
        void asignarY(float y_coord);
        void asignarZ(float z_coord);
        float obtenerX()const;
        float obtenerY()const;
        float obtenerZ()const;

        void original();

        void negat();

        float norm();



};

        Point::Point(float x_coord, float y_coord, float z_coord){
        x = x_coord;
        y = y_coord;
        z = z_coord;
        }
        Point::Point(){}

        void Point::asignarX(float x_coord){
        x = x_coord;
        }
        void Point::asignarY(float y_coord){
        y = y_coord;
        }
        void Point::asignarZ(float z_coord){
        z = z_coord;
        }

                float Point::obtenerX()const{
                return -x;
                }
                float Point::obtenerY()const{
                return -y;
                }
                float Point::obtenerZ()const{
                return -z;
                }

void Point::original(){
    cout<<"Valor original de X: "<<x<<endl;
    cout<<"Valor original de Y: "<<y<<endl;
    cout<<"Valor original de z: "<<z<<endl;

}
void Point::negat(){
    cout<<"X Negado: "<<-x<<endl;
    cout<<"Y negado: "<<-y<<endl;
    cout<<"Z negado: "<<-z<<endl;
}

float Point::norm(){
    float norma;
     norma = sqrt((pow(x,2)) +(pow(y,2)) + (pow(z,2)));
     cout<<"Valor de la Norma es: "<<norma<<endl;
     return norma;
}


int main()
{

    int x, y, z;


    cout<<"Ingresa el valor  x: "<<endl;
    cin>>x;
    cout<<"Ingresa el valor  en y: "<<endl;
    cin>>y;
    cout<<"Ingresa el valor z: "<<endl;
    cin>>z;


    Point coordenada = Point(x,y,z);
    coordenada.original();

    Point negados = Point(x,y,z);
    negados.negat();

    Point norma  = Point(x,y,z);
    norma.norm();


}

