#include <iostream>
using namespace std;
class Numere{
public:
	int *vec;
	int *nr;
	Numere();
	void citire();
	void afisare();
  };
  	void Numere::citire(){
  	}
  	
  	void Numere::afisare(){
  	
  	cout<<"n:="<<*nr<<endl;
  	for(int i=0; i<*nr;i++)
  	{
  		cout<<"vec["<<i<<"]:="<<vec[i]<<endl;
  		}
  		}
  		
  		Numere::Numere(){
  		cout<<"Initializare obiect!!"<<endl;
  		cout<<"n:="<<endl;
  		
  		nr=new int;
  		cin>>*nr;
  		vec=new int[200];
  		for(int i=0; i<*nr; i++)
  		{
  		cout<<"vec["<<i<<"]:=";
		cin>>vec[i];
	}
}
	int main(){
	
	Numere obiect;
	
	obiect.afisare();
	
	return 0;
}
  		
  	
  	
  	

