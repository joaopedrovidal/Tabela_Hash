#ifndef ALUNO_H
#define ALUNO_H

#include <string>
using namespace std;

class Aluno {
private:
    int ra;
    string nome;

public:
    Aluno(int ra = -1, string nome = "") : ra(ra), nome(nome) {}

    int obterRa() const { return ra; }
    string obterNome() const { return nome; }
};

#endif
