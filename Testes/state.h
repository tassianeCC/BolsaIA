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

    void addProposition(char prop){
        this->proposition.push_back(prop);
    }

    void addProposition(list<char> props){
        this->proposition = props;
    }

    list<char> getStateProposition(){
          return this->proposition;
    }

    bool existProposition(char prop){
        list<char>::iterator it;
        for(it = proposition.begin(); it != proposition.end();it++){
            if(*it == prop){
                return true;
            }
        }
        return false;
    }

};

#endif // STATE_H
