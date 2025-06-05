//
// Created by lucas on 04/06/2025.
//

#include <iostream>
using namespace std;

// Em c++ a função main é obrigatória! Caso contrário o programa não compilará
// Ela é o ponto inicial do programa, para ser compilado e executado.

// Os argumentos argc, e *argv, eles servem para passar argumentos para o programa
// mas são opcionais, você só irá utilizar caso precise capturar os argumentos passados pelo terminal.

// argc = quantos argumentos vieram da linha de comando.
// argv = array com cada argumento como string.
// argv[0] sempre é o nome do programa.

int main()
{
    cout << "Hello World!" << endl;

    // Always return 0 on main function, because usually means success..
    // Any non-zero value signals an error or abnormal termination
    // but it is a status that will pass to the Operating System.
    return 0;
}
