#include <iostream>
using namespace std;

//ROCK PAPER SCISORS

//PRE:{j1 y j2 will have the following values: 'p' for rock, 'a' for paper and't' for scisors}
//POST:{The program shows 2 if p2 wins, 1 if p1 wins and 0 if there is a draw}

int rockpaperscisors (char j1, char j2) {
    int res;
    if (j1==j2){
        res = 0;
    }
    else {
        if (j1=='p') //rock
         if (j2=='t') //scisors    
            res = 1;
            else {
                res = 2; //j2 paper  
            }
        else {
            if (j1=='t')//scisors
             if (j2=='a')//paper
                res = 1;
                else {
                    res = 2; // j2 rock
                }
            else {
                if (j1=='a')//paper
                if (j2=='p')//rock
                    res = 1;
                    else {
                        res = 2; //scisors
                    }
            }
            }
    }
    return res;
}




int main() {
                
                   //Module's testing program
    
    cout<<"j1 Rock , J2 Rock "<<rockpaperscisors('p','p')<<endl;
    cout<<"j1 Rock , J2 Paper "<<rockpaperscisors('p','a')<<endl;
    cout<<"j1 Rock , J2 Tijera "<<rockpaperscisors('p','t')<<endl;
    cout<<"j1 Paper , J2 Rock "<<rockpaperscisors('a','p')<<endl;
    cout<<"j1 Paper , J2 Paper "<<rockpaperscisors('a','a')<<endl;
    cout<<"j1 Paper , J2 Scisors "<<rockpaperscisors('a','t')<<endl;
    cout<<"j1 Scisors , J2 Rock "<<rockpaperscisors('t','p')<<endl;
    cout<<"j1 Scisors , J2 Paper "<<rockpaperscisors('t','a')<<endl;
    cout<<"j1 Scisors , J2 Scisors "<<rockpaperscisors('t','t')<<endl;
    return 0;
}
