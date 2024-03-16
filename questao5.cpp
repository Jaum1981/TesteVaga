#include <iostream>

void inverterString(char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) { //inverte a string
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char minhaString[] = "Hello, world!";

    inverterString(minhaString);

    std::cout << "String invertida: " << minhaString << std::endl;

    return 0;
}
