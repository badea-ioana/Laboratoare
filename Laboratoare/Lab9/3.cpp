#include<iostream>
using namespace std;



class Numere{
public:
  int *vec;
  int *nr;
  
  Numere();
  ~Numere();
  void citire();
  void afisare();
  int factorial(int n);
  
 };
 
   void Numere::citire(){
   }
   
   
   void Numere::afisare(){
   cout<<"n:="<<*nr<<endl;
   
   for(int i=0; i<*nr; i++)
   {
     cout<<"vec["<<i<<"]:="<<vec[i]<<endl;
     }
 }
 int Numere::factorial(int n) {
    if (n<=1) return 1;
    return n*factorial(n-1);
    
  
}
    Numere::Numere(){
    cout<<"Initializare obiect!!"<<endl;
    cout<<"n:="<<endl;
    
    nr=new int;
    cin>>*nr;
    vec=new int[200];
    
    
    for(int i=0; i<*nr;i++)
    {
     cout<<"vec["<<i<<"]:=";
     cin>>vec[i];
     }
 }
  	Numere::~Numere(){
  	  cout<<"Apelare destructor!!"<<endl;
  	  delete this->nr;
  	  delete[]this->vec;
  	  
  	 }
     
    int  main(){
      Numere obiect;
      obiect.afisare();
      obiect.~Numere();
      cout<<"Introd factorialul"<<endl;
      int n;
    cin>>n;
      int t=obiect.factorial(n);
      cout<<t;
     
      return 0;
     }
 
  	
    
    
   
  
   
    
