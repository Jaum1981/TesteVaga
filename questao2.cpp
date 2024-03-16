#include <iostream>
#include <vector>

bool pertenceFibonacci(int num) {
    std::vector<int> fib;
    fib.push_back(0);
    fib.push_back(1);

    while (fib.back() <= num) {
        int next = fib[fib.size() - 1] + fib[fib.size() - 2];
        fib.push_back(next);
    }

    for (int i = 0; i < fib.size(); ++i) {
        if (fib[i] == num)
            return true;
    }

    return false;
}

int main() {
    int numero;

    std::cout << "Informe um numero: ";
    std::cin >> numero;
    
    if (pertenceFibonacci(numero))
        std::cout << "O numero " << numero << " pertence a sequencia de Fibonacci." << std::endl;
    else
        std::cout << "O numero " << numero << " nao pertence a sequencia de Fibonacci." << std::endl;

    return 0;
}
