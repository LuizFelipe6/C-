#include <iostream>

using namespace std;

int main(){

string nome1;
string nome2;// letras a,b,c
int idade; // numeros inteiros
double peso;
float altura;
bool Vivo; // true = verdadeiro ou false = falso
string nome3="SY"; // Sy


    cout<<"check list de pessoas\n";
    

    cout<<"qual seria o seu nome?\n";
    cin>>nome1;

    cout<<"agora vc vai me informar os dados da pessoa que vc quer guardar\n";

    cout <<"Qual seria o nome?\n";
    cin>>nome2;

    cout <<"qual seria idade?\n";
    cin>>idade;

    cout<<"qual seria o peso?\n";
    cin>>peso;

    cout <<"qual seria a altura?\n";
    cin>>altura;

    cout <<"essa pessoa que vc informou esta vivo? Digite sim = True ou Nao = FALSE\n";
    cin>>Vivo;

    cout << "a informacao foi gerada pelo\n"<<"...."<<nome3<<"...." << "\n" "obrigado pela informacao esses dados serao guardados no sistema\n";


    cout << "previo da informaçao:\n"<<nome2 << "\n" <<idade << "\n"<< peso <<"\n"<<altura << "\n"<<Vivo;

    system("pause");
    return 0;
}
