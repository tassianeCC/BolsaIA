#ifndef STATE_H
#define STATE_H
#include <iostream>
#include <list>

using namespace std;

struct state{
    String nome;
    list<char> proposition;

    estado(string nome){
        this->nome = nome;
    }

    list<char> getStateProposition(state s){
          return s.proposition;
    }

    bool existProposition(char p){
        foreach(char aux, this->proposition) {
            if(aux == p)
                return true;
        }

        return false;
    }

};

#endif // STATE_H
