#include <iostream>
#include <string>

using namespace std;

struct Data
{
    int dia;
    int mes;
    int ano;
};

struct Pessoa
{
    string nome;
    double altura;
    Data nascimento;
};

int main()
{
    Pessoa pessoas[10];
    char comando;

    // Loop
    cin >> comando;

    if ( comando == '+'){
        // CHECAR SE TEM ESPAÇO
            // SE SIM  >> Puxa função preencheVetor()
            // SE NÂO  >> Mensagem e volta pro loop

    }
    else if (comando == '.'){
        // Puxa função listaAniversariantesMes()
    }
    else{
        cout << ">OPCAO INVALIDA";
    }

}