#include<iostream>
#include<fstream>
using namespace std;


class Numere{
public:
  int *vec;
  int *nr;
  
  Numere();
  ~Numere();
  void afisare();
  
 };
 
   
   
   void Numere::afisare(){
   cout<<"n:="<<*nr<<endl;
   for(int i=0; i<*nr; i++)
   {
     cout<<"vec["<<i<<"]:="<<vec[i]<<endl;
     }
 }
    Numere::~Numere(){
    cout<<"Apelare destructor!!"<<endl;
    delete this ->nr;
    delete[] this ->vec;
    
    }
    

  	Numere::Numere(){
  	  cout<<"Initializare obiect!!"<<endl;
  	  cout<<"n:="<<endl;
  	  nr=new int;
  	  cin>> *nr;
  	  vec=new int [200];
  	  for(int i=0; i<*nr;i++)
  	  {
  	 cout<<"vec["<<i<<"]:=";
  	 cin>>vec[i];
  	 }
  }
  
  class NumereInFisier: public Numere {
    public:
    void scriefisier()
    {
    ofstream myfile ("fisier.txt");
    if(myfile.is_open())
    
    {
    for(int i=0; i<*nr;i++)
    	myfile<<vec[i]<<endl;
    myfile.close();
    }
    else cout<<"Eroare de deschidere fisier!";
    }
    };
  

  
      int  main(){
      NumereInFisier obiect;
      obiect.afisare();
      obiect.scriefisier();
      return 0;
     }
 
  	
    
    
   
  
   
    
