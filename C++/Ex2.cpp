#include <iostream>
#include <iomanip>
#include <fstream>
#include <unordered_set>
using namespace std;

class Pessoa 
{
    private:
    string nome;
    int dia;
    string mes;
    
    public:

    Pessoa()
    {
        inicializa ("nenhum", 1, "0");
    }

    Pessoa(string nNome, int nDia, string nMes)
    {
        inicializa (nNome, nDia, nMes); 
    }

    ~Pessoa ()
    {   

    }
    
    void inicializa (string nNome, int nDia, string nMes)
    {
       setNome(nNome);
       setDia(nDia);
       setMes(nMes);
    }

    void setNome (string nNome)
    {
        bool valida = true;
        while(valida)
        {
            try
            {
            if(nNome.length()>=2)
            {
            nome = nNome;
            valida = false;
            }
            else throw 1;
            }
            catch(int x)
            {
                cout << "Nome invalido, insira novamente: ";
                cin >> nNome;
            }
        }
    }

    void setDia (int nDia)
    {
        bool valida = true;
        while (valida)
        {
            if (nDia >= 1 && nDia <= 31)
            {
                dia = nDia;
                valida = false;
            }
            else
            {
                cout << "Dia invalido, insira novamente: ";
                cin >> nDia;
            }
        }
    }

    void setMes (string nMes)
    {
        bool valida = true;
        unordered_set <string> mesesValidos = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9","10", "11", "12"};
        while (valida)
        {
            if (mesesValidos.count(nMes) > 0)    
            {
                mes = nMes;
                valida = false;
            }
            else
            { 
                cout << "Mes invalido (provavelmente por extenso), insira novamente (em numero): ";
                cin >> nMes;
            }
        }
    }

    string getNome()
    {
        return nome;
    }
    int getDia()
    {
        return dia;
    }
    string getMes()
    {
        return mes;
    }
};

int main (void)
{
    Pessoa* vetor = new Pessoa[10];
    string nome, nomearq, mes;
    int dia;

    for (int i = 0; i < 10; i++)
    {
        cout << "Insira o nome: ";
        getline(cin, nome);
        vetor[i].setNome(nome);
        cout << "Insira o dia: ";
        cin >> dia;
        vetor[i].setDia(dia); 
        cin.ignore();  
        cout << "Insira o mes: ";
        cin >> mes;
        vetor[i].setMes(mes); 
        cin.ignore();  
    }

    cout << "Insira o nome do arquivo: ";
    cin >> nomearq;
    cin.ignore();

    ofstream arquivo(nomearq  + ".txt");
    if (arquivo.is_open())
    {
        for (int meses = 1; meses <=12; meses++)
        {
            arquivo << "Mes " << meses << endl;
            for (int i = 0; i < 10; i++)
            {   
                if (vetor[i].getMes() == to_string(meses)) 
                arquivo << vetor[i].getNome() << " - " << "Dia: " << vetor[i].getDia() << endl;
            }
            arquivo << endl;
        }
        arquivo.close();
    }

    else cout << "Não foi possível abrir o arquivo";
    
    delete[] vetor;
    return 0;
}
