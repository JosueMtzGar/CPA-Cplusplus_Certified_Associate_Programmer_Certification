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
    state = "Inicio";
}
Memento* Documento::save(){
    return new Memento(this->state);
}
void Documento::restore(Memento* state){
    this->state = state->getState();
}
void Documento::addText(string texto){
    state = state + texto;
    //state += texto;
}
void Documento::removeText(int start, int end){
    state.erase(start, end - start);
}
void Documento::insertText(int inicio, string texto){
    state.insert(inicio, texto);
}
void Documento::printText(){
    cout << state << endl;
}
Caretaker::Caretaker(){
    documento = new Documento();
}
void Caretaker::undo(){
    if(history.size()>0){
        Memento * last = history[history.size()-1];
        history.pop_back();
        this->documento->restore(last);
    }
    else{
        cout << "No puede retroceder mas"<<endl;
    }
}
void Caretaker::doSomething(){
    int opc = 1;
    while(opc != 0){
        documento->printText();
        cout << "Menu: "<<endl;
        cout << "1) Agregar Texto"<<endl;
        cout << "2) Remover Texto"<<endl;
        cout << "3) Insertar Texto"<<endl;
        cout << "4) Undo (ctrl+z)"<<endl;
        cout << "0) Salir"<<endl;
        cin >> opc;
        string text = "";
        getline(cin, text);
        switch(opc){
            case 1:
                this->history.push_back(this->documento->save()); // estado actual
                cout<<"Introducir texto:"<<endl;
                getline(cin, text);
                this->documento->addText(text); // estado nuevo
            break;
            case 2:
                {
                    this->history.push_back(this->documento->save());
                    int start=0, end=0;
                    cout << "Inicio" << endl;
                    cin >> start;
                    cout << "Final" << endl;
                    cin >> end;
                    this->documento->removeText(start, end);
                }
            break;
            case 3:
                {
                    this->history.push_back(this->documento->save());
                    cout<<"Introducir texto:"<<endl;
                    getline(cin, text);
                    int start=0;
                    cout << "Pos" << endl;
                    cin >> start;
                    this->documento->insertText(start, text);
                }
            break;
            case 4:
                this->undo();
            break;
            case 0:
                cout << "Bye!"<<endl;
            break;
            default:
                cout << "Comando invalido"<<endl;
            break;
        }
    }
}