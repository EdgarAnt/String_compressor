#include <iostream>
#include <vector>//utilizo librerias de vector
#include <string>//utilizo strings

using namespace std;

void decode(char,int, vector<char>*);

int main()
{
    int d;
    vector<char> output;
    char palabra, carP;
    char *digito;
    string input;
    cout<<"Codigo sin decodificar: ";
    cin>> input;

    for(int i=0; i<input.length(); i+=2)
    {
        carP=input[i];
        digito=&carP;
        d=atoi(digito);
        palabra=input[i+1];
        decode(d,palabra,&output);
    }

    cout<<"Codigo decodificado: ";
    for(int i=0;i<output.size(); i++)
    cout<<output[i];
    cout<<endl;
    return 0;
}

void decode(int d,char l, vector<char> *ans)
{
    for(int i=0; i<d; i++)
        (*ans).push_back(l);
}

