#ifndef STATE_H
#define STATE_H
#include <iostream>
#include <list>

using namespace std;

struct state{
    string name;
    list<char> proposition;

    state(string name){
        this->name = name;
    }

    list<char> getStateProposition(state s){
          return s.proposition;
    }

    bool existProposition(char p){
        list<char>::iterator it;
        for(it = proposition.begin(); it != proposition.end();it++){
            if(*it == p){
                return true;
            }
        }
        return false;
    }

};

#endif // STATE_H
