#include "Memento.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

Memento::Memento(string state): state(state){}
string Memento::getState(){
    return this->state;
}

Documento::Documento(){
    state = "";
}
Memento* Documento::save(){
    return new Memento(this->state);
}
void Documento::restore(Memento* state){
    this->state = state->getState();
}
void Documento::addText(string texto){
    state = state + texto;
}
void Documento::removeText(int inicio, int final){
    state.erase(inicio, final-inicio); // les toca a ustedes
}
void Documento::insertText(int inicio, string texto){
    state.insert(inicio, texto);// les toca a ustedes
}
void Documento::printText(){
    cout << this->state << endl; // les toca a ustedes
}
Caretaker::Caretaker(){
    documento = new Documento();
}
void Caretaker::undo(){
    Memento * last = history[history.size()-1];// ultimo elemento
    history.pop_back();
    this->documento->restore(last);
}
void Caretaker::doSomething(){
    int opc = 1;
    while(opc != 0){
        cout << "Menu: "<<endl;
        cout << "1) Agregar Texto"<<endl;
        cout << "2) Remover Texto"<<endl;
        cout << "3) Insertar Texto"<<endl;
        cout << "4) Undo (ctrl+z)"<<endl;
        cout << "0) Salir"<<endl;
        cin >> opc;
        string text = "";
        getline(cin,text);
        switch(opc){
            case 1:
                this->history.push_back(this->documento->save());
                cout << "Introducir texto: " << endl;
                getline(cin, text);
                this->documento->addText(text);
                this->documento->printText();
            break;
            case 2:
                this->history.push_back(this->documento->save());
                int inicio, final;
                cout << "Inicio: ";
                cin >> inicio;
                cout << "Final: ";
                cin >> final;
                this->documento->removeText(inicio, final);
                this->documento->printText();
            break;
            case 3:
                this->history.push_back(this->documento->save());
                cout << "Inicio: ";
                cin >> inicio;
                text = "";
                getline(cin, text);
                cout << "Introducir Texto: " << endl;
                getline(cin, text);
                this->documento->insertText(inicio, text);
                this->documento->printText();
            break;
            case 4:
                if(history.size()>0){
                    this->undo();
                    this->documento->printText();
                }else{
                    cout << "Ya no hay mas cambios" << endl;
                }
            break;
            case 0:
                cout << "Adios" << endl;
            break;
            default:
                cout << "Comando invalido"<<endl;
            break;
        }
    }
}