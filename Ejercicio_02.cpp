#include <iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

    class Line{
    private:
        int PX1;
        int PY1;
        int PX2;
        int PY2;

    public:
        Line(int, int, int, int);
        void norm();
        void slope();
        void equiation();


    };


        Line::Line(int X1, int Y1, int X2, int Y2 ){
            PX1 = X1;
            PY1 = Y1;
            PX2 = X2;
            PY2 = Y2;
        }

        void Line::norm(){
            float norma;

            norma = (sqrt(pow(PX1-PX2,2) + pow(PY2-PY1,2)));

            cout<<"La magnitud de la linea es: "<<norma<<endl;
        }

        void Line::slope(){
            float pendiente;

            pendiente = ((PY2-PY1) / (PX2-PX1));

            cout<<"El valor de la pendiente es: "<<pendiente<<endl;
        }

        void Line::equiation(){
            float ecuacion, pendien;

            pendien = ((PY2-PY1) / (PX2-PX1));
            ecuacion =  ((PY2-PY1) / (PX2-PX1)) * (-PX1)-PY1;

            cout<<"La ecuaion es : Y= "<<pendien<<"x"<<ecuacion<<endl;
        }



int main(){
    int PX1, PY1, PX2, PY2;


    cout<<"Ingresa el valor de la primer coordenada en x: "<<endl;
    cin>>PX1;
    cout<<"Ingresa el valor de la primer coordenada en y: "<<endl;
    cin>>PY1;
    cout<<"Ingresa el valor de la segunda coordenada en x: "<<endl;
    cin>>PX2;
    cout<<"Ingresa el valor de la segunda coordenada en y: "<<endl;
    cin>>PY2;


    Line magnitud = Line(PX1, PY1, PX2, PY2);
    magnitud.norm();

    Line inclinacion = Line(PX1, PY1, PX2, PY2);
    inclinacion.slope();

    Line formula = Line(PX1, PY1, PX2, PY2);
    formula.equiation();





}
