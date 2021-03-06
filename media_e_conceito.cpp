#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

 string conceito(float n){
    string i;
    if (n >= 9.0 && n <= 10.0){
        i = "A";
    }
    else if(n >=7.5 && n < 9.0){
        i = "B";
    }
    else if(n >=6.0 && n < 7.5){
        i = "C";
    }
    else if(n >= 4.0 && n < 6.0){
        i = "D";
    }
    else if(n < 4.0){
        i = "E";
    }
    else{-
        i = "Nota Invalida";
    }
    return i;
}

float mediaF(float n1, float n2, float n3){
    float nf = 0;
    nf = (n1 + (2 * n2) + (3 * n3))/6;
    return nf; 
}

string conceito(float n1, float n2, float n3){
    float media = 0;
    string i;

    media = mediaF(n1, n2, n3);
    i = conceito(media);

    return i; 
}
int main () {
    float   n1 = 0,n2 = 0,n3 = 0;
    cout << "     Media e conceito final \n";
    cout << "Digite a primeira nota de tres notas: ";
    cin >> n1;
    cout << "Digite a segunda nota de tres notas: ";
    cin >> n2;
    cout << "Digite a terceira nota de tres notas: ";
    cin >> n3;
    
	cout << "Media:" << fixed << setprecision(1) << mediaF (n1, n2, n3) << "\n";
    cout << "Conceito: " << conceito(n1, n2, n3) << "\n";   
    
    return 0;
    
}