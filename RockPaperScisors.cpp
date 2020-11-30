#include <iostream>
using namespace std;

//Modulo piedra papel tijera 
//PRE:{j1 y j2 tendran valores de 'p' para piedra, 'a' para papel y 't' para tijeras}
//POST:{Muestra 2 si gana j2, 1 si gana j1 y 0 si hay empate}

int piedrapapeltijera (char j1, char j2) {
    int res;
    if (j1==j2){
        res = 0;
    }
    else {
        if (j1=='p') //piedra
         if (j2=='t') //tijera    
            res = 1;
            else {
                res = 2; //j2 papel  
            }
        else {
            if (j1=='t')//tijera 
             if (j2=='a')//papel
                res = 1;
                else {
                    res = 2; // j2 piedra
                }
            else {
                if (j1=='a')//papel
                if (j2=='p')//piedra
                    res = 1;
                    else {
                        res = 2; //tijera
                    }
            }
            }
    }
    return res;
}




int main() {
        //Pruebas del modulo
    cout<<"j1 Piedra , J2 Piedra "<<piedrapapeltijera('p','p')<<endl;
    cout<<"j1 Piedra , J2 Papel "<<piedrapapeltijera('p','a')<<endl;
    cout<<"j1 Piedra , J2 Tijera "<<piedrapapeltijera('p','t')<<endl;
    cout<<"j1 Papel , J2 Piedra "<<piedrapapeltijera('a','p')<<endl;
    cout<<"j1 Papel , J2 Papel "<<piedrapapeltijera('a','a')<<endl;
    cout<<"j1 Papel , J2 Tijera "<<piedrapapeltijera('a','t')<<endl;
    cout<<"j1 Tijera , J2 Piedra "<<piedrapapeltijera('t','p')<<endl;
    cout<<"j1 Tijera , J2 Papel "<<piedrapapeltijera('t','a')<<endl;
    cout<<"j1 Tijera , J2 Tijera "<<piedrapapeltijera('t','t')<<endl;
    return 0;
}