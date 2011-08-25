#include <stdio.h>
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int main(void){

    char *s;
    char *partes;
    int i,exit = 0;
    vector<string> valor;

    while(exit == 0){
        cout << "shell: ";
        gets(s);

        if(strlen(s) < 1000){
        if(strcmp(s,"exit") == 0)
            exit = 1;
        else{
            partes = (char*)strtok(s," ");
            while(partes != NULL){
                valor.push_back(partes);
                partes = (char*)strtok(NULL," ");
            }
            //imprimindo ------------------------------
            for (i=0; i<valor.size(); i++){
                cout << valor.at(i) << endl;
            }
            valor.erase(valor.begin(),valor.end());
        }
        }
        else printf("\nEntre como no maximo 1000 caracteres...\n");
    }

    return 0;
}


