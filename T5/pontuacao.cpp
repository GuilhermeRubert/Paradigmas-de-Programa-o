#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <fstream>
#include <iterator>




public class pontuacao {

	private string nome, descricao;
		private float pontuacaojogador;
		
		public pontuacao(string nom, string desc, float ponto) {
			this->nome = nom;
			this->descricao = desc;
			this->pontosjogador = ponto;
		}
		public string getNome() {
			return nome;
		}
		public string getDescricao() {
			return descricao;
		}
		public int getPontosJogador() {
			return pontosjogador;
		}
		public bool operator<(pontuacao& p) {
		  return this->pontosjogador > p.pontosjogador;
	   }

	};
	public bool ordena(pontuacao& j1, pontuacao& j2) {
		return j1.getDescricao() > j2.getDescricao() && j1.getPontosJogador() > j2.getPontosJogador();
	}
	
	

	
	
public class pontuacaoTotal{

		private pontuacao p;
		private float pontos;

		float getPontos() {
			return pontos;
		}
		public string getNome() {
			return p.getNome();
		}
		public string getDescricao() {
			return p.getDescricao();
		}
		public int getPontos() {
			return p.getPontosJogador();
		}
	};

int main() {

   ifstream data("pontuacao.csv");
   
   private string linhadatabela;
   private string table[3];
   private vector<pontuacao> pontuacaoGeral;
   private int cont = 1;
   
   while (getline(data, linhadatabela)) {
	   
      stringstream linestream(linhadatabela);
      getline(linestream, table[0], ',');
      getline(linestream, table[1], ',');
      getline(linestream, table[2], ',');
      pontuacaoGeral.push_back(pontuacao(table[0], table[1], stoi(table[2])));
	  
   }
   
   
   
    
   sort(pontuacaoGeral.begin(), pontuacaoGeral.end());
   
   vector<pontuacao>::iterator it;
   vector<pontuacao>::iterator it1;
   for (it = pontuacaoGeral.begin(); it < pontuacaoGeral.end(); it++){
      cout<< it->getNome() << " ";cout<< it->getDescricao() << " "; cout<< it->getPontosJogador() << " "<< endl;
   }
	
	sort(pontuacaoGeral.begin(), pontuacaoGeral.end(), ordena);
	
	for (it = pontuacaoGeral.begin(),it1 = pontuacaoGeral.begin()+1; it < pontuacaoGeral.end(); it++,cont++){
		cout <<cont<<":"<< it->getNome() <<":"<< it->getDescricao() <<":"<< it->getPontosJogador()<<endl;
	}
}
