#include<iostream>
using namespace std;
class Persona{
	// atributos

 protected :  string nombres,apellidos,direccion,fn;
 				int telefono;
 	
 	// constructor
 protected : 
   Persona(){
   }
   Persona(string nom,string ape,string dir,int t,string f){
   	nombres = nom;
   	apellidos = ape;
   	direccion = dir;
   	telefono = t;
   	fn = f;
   	
   }
	
	//metodos
	void agregar();
	
};
