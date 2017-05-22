//Executado em um linux de 64 bits

#include <iostream>
#include <algorithm>
#include <iterator>
#include <ctime>
#include <vector>





//Circulo
class Circulo: public Forma
{
	private float pi = 3.14; //valor de ip 
	public Circulo(float raio) : r(raio) {
	
	};
	
	public virtual float areaCirculo() const {
		return pi * (r*r);
	}
	
	public virtual double valor() const {
		if(areaCirculo() > 12)
		{
				return 1.00;
		}
		else if(areaCirculo() > 6 && area() < 12)
		{
			return 0.40;
		}
		else if(areaCirculo() > 0 && areaCirculo() < 6)
		{
		
			return 0.20;
		}
		else{
			return 0;
		}
	}

	private float r;//raio do circulo 
	
};




//Forma : circulo, retangulo ou triangulo
public class Forma {

	public virtual float area() const = 0;
	public virtual float preco() const = 0;

};

//Retangulo
public class Retangulo: public Forma
{
public:
	Retangulo(float b, float h) : base(b), altura(h) {}
	virtual float areaRetangulo() const { 
		return base * altura; 
	}
	
	virtual float preco() const {
		if(areaRetangulo() > 12)
		{
				return 1.00;
		}
		else if(areaRetangulo() > 6 && areaRetangulo() < 12)
		{
			return 0.40;
		}
		else if(areaRetangulo() > 0 && areaRetangulo() < 6)
		{
			return 0.20;
		}
		else(){
			return 0;
		}
	}
	private float  base, altura; 
};

//Triangulo
public class Triangulo: public Forma
{
	
	
	public Triangulo(float b, float h) : base(b), altura(h) {
	
	}
	public virtual float  areaT() const { 
		return (base * altura) / 2; 
	}
	
	public float preco() const {
		if(areaT() > 10)
		{
				return 1.00;
		}
		else if(areaT() > 5 && areaT() < 10)
		{
			return 0.40;
		}
		else if(areaT() > 0 && areaT() < 6)
		{
			return 0.20;
		}
	}

	private float base,altura; 
};

//compara formas 
bool  comparaAreas(const Forma* form,const Forma* form1) {
	return form ->area() < form1->area();
}



//main

int main()
{
	int q;
	int contpequeno,contmedio,contgrande = 0;
	float preco = 0.00;
	srand(time(NULL));
	vector<Forma*> forma;
	q=20; //contante numero de biscoitos

	for(int x=0; x<q; x++)
	{
		
		
		int qntd = rand() % 4 ;
		double base = randfrom(1.3,5.1);
		double altura = randfrom(1.2,8.0);
		double raio = randfrom(0.2,1.0);
	

		switch (qntd)
		{
			case 1:forma.push_back(new Circulo(raio));break;
			case 2:forma.push_back(new Retangulo(base, altura));break;
			default:forma.push_back(new Triangulo(base, altura));break;
		}
	}

	sort(forma.begin(), forma.end(), comparaAreas);
	
	
	
	int i=0
	while ( i< forma.size()){

		valor+=forma[i]->valor();
		cout<<"Tamanho do biscoito:" << forma[i]->area()<<endl;
		cout.precision(2);
		cout<< "Preço: "<< fixed << forma[i]->valor()<<endl;
		if(forma[i]->area() > 12)
		{
			contgrande++;
		}
		else if(forma[i]->area() < 6)
		{
			contpequeno++;
		}
		else if(forma[i]->area()>=6 && forma[i]->area()<=12){
			contmedio++;
		}
		
		i++;
	}
	
	
	//SAÍDA DE DADOS DOS BISCOITOS E PREÇO TOTAL
	cout<<"Tipo:"<<endl;
	cout<<contpequeno<<" Biscoitinho\n"<<endl;
	cout<<contgrande<<" Biscoitão\n"<<endl;
	cout<<(contmedio)<<" Biscoito normal\n"<<endl;

	cout<<"Preço do produto:" << preco <<endl;
	return 0;
}


//gerar automaticamente valores
float randfrom(float min, float max)
{
    float range = (max - min);
    float div = RAND_MAX / range;
    return min + (rand() / div);
}


