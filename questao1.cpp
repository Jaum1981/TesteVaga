#include <iostream>

int main() {

    int indice = 13;
    int SOMA = 0;
    int k = 0;

    while(k < indice){
        k = k+1;
        SOMA = SOMA + k;
    }

    std::cout << SOMA << std::endl; //Resultado: 91

    return 0;
}
