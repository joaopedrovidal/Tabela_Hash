#ifndef HASH_H
#define HASH_H

#include "aluno.h"

class Hash {
private:
    Aluno* estrutura;
    int quant_itens;
    int max_itens;
    int max_posicoes;

    int FuncaoHash(Aluno aluno);

public:
    Hash(int tam_vetor, int max);
    ~Hash();

    bool estacheio();
    int obterTamanhoAtual();
    void inserir(Aluno aluno);
    void deletar(Aluno aluno);
    void buscar(Aluno& aluno, bool& busca);
    void imprimir();
};

#endif
