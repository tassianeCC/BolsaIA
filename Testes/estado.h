#ifndef ESTADO_H
#define ESTADO_H
#include <iostream>
#include <list>

using namespace std;

struct state{
    String nome;
    list<state> preposicao;

    estado(string nome){
        this->nome = nome;
    }
};

#endif // ESTADO_H
