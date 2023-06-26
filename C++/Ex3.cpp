#include <iostream>
#include <iomanip>
#include <fstream>
#include <limits>
using namespace std;    

class Eletrodomesticos
{
    private:
    string nome;
    string telefone;
    float preco;

    public:

    Eletrodomesticos()
    {
        inicializa("nenhum", "0", 0);
    }   

    Eletrodomesticos(string nNome, string nTelefone, float nPreco)
    {
        inicializa(nNome, nTelefone, nPreco);
    }

    ~Eletrodomesticos()
    {

    }   

    void inicializa(string nNome, string nTelefone, float nPreco)
    {
        setNome(nNome);
        setTelefone(nTelefone);
        setPreco(nPreco);
    }

    void setNome(string nNome)
    {
        nome = nNome;
    }

    void setTelefone(string nTelefone)
    {
        telefone = nTelefone;
    }

    void setPreco(float nPreco)
    {
        preco = nPreco;
    }

    string getNome()
    {
        return nome;
    }

    string getTelefone()
    {
        return telefone;
    }

    float getPreco()
    {
        return preco;
    }

};

float calcMedia (Eletrodomesticos* vetor)
{
    float media = 0;
    for (int i = 0; i<15; i++)
    {
        media += vetor[i].getPreco();
    }
    media = media/15;
    return media;
}

int main (void)
{
    Eletrodomesticos* vetor = new Eletrodomesticos[15];
    string nomeArquivoLeitura, nomeArquivoEscrita;
    float media;

    cout << "Insira o nome do arquivo de entrada: ";
    cin >> nomeArquivoLeitura;

    ifstream arquivoLeitura(nomeArquivoLeitura + ".txt");
    if (arquivoLeitura.is_open())
    {
        for (int i = 0; i<15; i ++)
        {
            string nome;
            getline(arquivoLeitura, nome);
            vetor[i].setNome(nome);
                
            string telefone;
            getline(arquivoLeitura, telefone);
            vetor[i].setTelefone(telefone);
                
            float preco;
            arquivoLeitura >> preco;
            vetor[i].setPreco(preco);
                
            arquivoLeitura.ignore(15, '\n');
            
        }
        arquivoLeitura.close();
    }
    else cout << "Erro ao abrir o arquivo de leitura." << endl;

    media = calcMedia(vetor);

    cout << "Insira o nome do arquivo de saida: ";
    cin >> nomeArquivoEscrita;

    ofstream arquivoEscrita(nomeArquivoEscrita + ".txt");
    if (arquivoEscrita.is_open())
    {
        arquivoEscrita << "Media dos precos: " << media << endl << endl;
        arquivoEscrita << "Produtos com preco abaixo da media:" << endl << endl;
        for (int i = 0; i<15; i++)
        {
            if (vetor[i].getPreco() < media)
            {
                arquivoEscrita << "Nome: " << vetor[i].getNome() << endl;
                arquivoEscrita << "Telefone: " << vetor[i].getTelefone() << endl << endl;
            }
        }
        arquivoEscrita.close();
    }
    else cout << "Erro ao abrir o arquivo de escrita." << endl;

    delete[] vetor;
    return 0;
}