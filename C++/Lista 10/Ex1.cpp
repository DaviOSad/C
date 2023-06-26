#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

class Pessoa 
{
    private:
    int codigo;
    string nome;
    int idade;
    string endereco;
    int numero;
    int complemento;

    public:
    Pessoa()
    {
        inicializa(76543);
    }
    
    Pessoa(int nCodigo, string nNome, int nIdade, string nEndereco, int nNumero, int nComplemento)
    {
        inicializa(nCodigo,  nNome, nIdade, nEndereco, nNumero, nComplemento);
    }

    ~Pessoa()
    {
        cout << "Funciono";
    }
    
    void inicializa (int nCodigo)
    {
        setCodigo(nCodigo);
        setNome("nenhum");
        setIdade(0);
        setEndereco("nenhum");
        setNumero(0);
        setComplemento(0);
    }

    void inicializa (int nCodigo, string nNome, int nIdade, string nEndereco, int nNumero, int nComplemento)
    {
        setCodigo(nCodigo);
        setNome(nNome);
        setIdade(nIdade);
        setEndereco(nEndereco);
        setNumero(nNumero);
        setComplemento(nComplemento);
    }

    void setCodigo (int nCodigo)
    {
        codigo = nCodigo;
    }
     
    void setNome (string nNome)
    {
        if (nNome.length() < 2) cout << "Nome Inválido";
        else nome = nNome;
    }
    
    void setIdade (int nIdade)
    {
        if (nIdade < 0) cout << "Idade Inválida";
        else idade = nIdade;
    }
    
    void setEndereco (string nEndereco)
    {
        endereco = nEndereco;
    }

    void setNumero (int nNumero)
    {
        numero = nNumero;
    }
    
    void setComplemento (int nComplemento)
    {
        complemento = nComplemento;
    }

    int getCodigo ()
    {
        return codigo;
    }

    string getNome ()
    {
        return nome;
    }

    int getIdade ()
    {
        return idade;
    }

    string getEndereco ()
    {
        return endereco;
    }

    int getNumero ()
    {
        return numero;
    }

    int getComplemento ()
    {
        return complemento;
    }
};


int main (void)
{
    string nome, endereco, nomearq;
    int idade, numero, complemento, codigo;
    int quant;
    cout << "Insira a quantidade de pessoas: ";
    cin >> quant;


    Pessoa* vetor = new Pessoa[quant];

    for (int i = 0; i<quant; i++)
    {
        cout << "Codigo: ";
        cin >> codigo;
        vetor[i].setCodigo(codigo);
        cin.ignore();
        cout << "Nome: ";
        getline(cin,nome);
        vetor[i].setNome(nome);
        cout << "Idade: ";
        cin >> idade;
        vetor[i].setIdade(idade);
        cin.ignore();
        cout << "Endereço: ";
        getline(cin,endereco);
        vetor[i].setEndereco(endereco);
        cout << "Numero: ";
        cin >> numero;
        vetor[i].setNumero(numero);
        cout << "Complemento: ";
        cin >> complemento;
        vetor[i].setComplemento(complemento);
    }

    cout << "Insira o nome do arquivo: ";
    cin >> nomearq;

    ofstream arquivo(nomearq + ".txt");

    if (arquivo.is_open())
    {
        for (int i = 0; i<quant;i++)
        {
            arquivo << "Pessoa " << i+1 << endl << endl;
            arquivo << "Codigo: " << vetor[i].getCodigo()<< endl;
            arquivo << "Nome: " << vetor[i].getNome()<< endl;
            arquivo << "Idade: " << vetor[i].getIdade()<< endl;
            arquivo << "Endereco: " << vetor[i].getEndereco()<< endl;
            arquivo << "Numero: " << vetor[i].getNumero()<< endl;
            arquivo << "Complemento: " << vetor[i].getComplemento() << endl << endl;
        }

        arquivo.close();
    }

    else cout << "Não foi possivel abrir o arquivo" << endl;

    delete[] vetor;
    return 0;
}