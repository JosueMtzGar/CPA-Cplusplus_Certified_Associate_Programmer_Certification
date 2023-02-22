#include <iostream>
#include <vector>

#include "Command.h"

using namespace std;

/*
generar las siguientes funcionalidades:
    Menu1: 
        Copy
        Paste
        Cut
    Menu2:
        Save
        Open
    Menu3:
        ctrl + c (copy)
        ctrl + v (paste)
        ctrl + x (cut)
        ctrl + s (save)
        ctrl + o (open)
*/

int main(){
    vector<Boton*> opc1, opc2, opc3;
    /* Generación de comandos */
    Command * copy = new Copy();
    Command * paste = new Paste();
    Command * cut = new Cut();
    Command * save = new Save();
    Command * open = new Open();

    /* Botones menu 1 */
    // Boton 1 copiar
    Boton *btn1 = new Boton("Copy");
    btn1->setCommand(copy); // asignando comando
    opc1.push_back(btn1); // agregando boton a lista de botones
    // Boton 2 pegar
    Boton *btn2 = new Boton("Paste");
    btn2->setCommand(paste);
    opc1.push_back(btn2);
    // Boton 3 cortar
    Boton *btn3 = new Boton("Cut");
    btn3->setCommand(cut);
    opc1.push_back(btn3);
    // Menu 1
    Menu * m1 = new Menu(opc1);

    /* Botones menu 2 */
    // Boton 4 guardar
    Boton *btn4 = new Boton("Save");
    btn4->setCommand(save);
    opc2.push_back(btn4);
    // Boton 5 abrir
    Boton *btn5 = new Boton("Open");
    btn5->setCommand(open);
    opc2.push_back(btn5);
    Menu * m2 = new Menu(opc2);

    /* Botones menu 3 */
    // Boton 6 copiar
    Boton *btn6 = new Boton("ctrl + c");
    btn6->setCommand(copy);
    opc3.push_back(btn6);
    // Boton 7 pegar
    Boton *btn7 = new Boton("ctrl + v");
    btn7->setCommand(paste);
    opc3.push_back(btn7);
    // Boton 8 cortar
    Boton *btn8 = new Boton("ctrl + x");
    btn8->setCommand(cut);
    opc3.push_back(btn8);
    // Boton 9 guardar
    Boton *btn9 = new Boton("ctrl + s");
    btn9->setCommand(save);
    opc3.push_back(btn9);
    // Boton 10 abrir
    Boton *btn10 = new Boton("ctrl + o");
    btn10->setCommand(open);
    opc3.push_back(btn10);

    Menu * m3 = new Menu(opc3);

    int opc = 1;
    while(opc != 0){
        cout << "Seleccione una opcion"<<endl;
        cout << "1)Editar"<< endl;
        cout << "2)Archivo"<< endl;
        cout << "3)Shortcut"<< endl;
        cin >> opc;
        switch(opc){
            case 1:
                m1->printMenu();
            break;
            case 2:
                m2->printMenu();
            break;
            case 3:
                m3->printMenu();
            break;
        }
    }


    system("pause");
}