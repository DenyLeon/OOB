#include "Clase Persona.cpp"
#include<iostream>
using namespace std;
class Empleado : Persona{
	//Atributo
	private : string cod_e, puesto;
	//Constructor
	public :
	Empleado(){
	}
		Empleado (string nom,string ape,string dir,int t,string f,string ce, string pue) : Persona(nom,ape,dir,t,f){
		cod_e = ce;
		puesto = pue;
		}
	
	//Metodo
	// set modificar un atributo
	void setcod_e(string ce){	cod_e = ce;}
	void setpuesto(string pue){	puesto = pue;}
	void setNombres(string nom){	nombres = nom;}
	void setApellidos(string ape){	apellidos = ape;}
	void setDireccion(string dir){	direccion = dir;}
	void setTelefono(int tel){	telefono = tel;}
	void setFn(string f){	fn = f;}
	// get visualizar un atributo
	string getcod_e(){return cod_e;}
	string getpuesto(){return puesto;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	string getFn(){return fn;}
	
	void agregar (){
	
		cout<<"_______________"<<endl;
		cout<<"Cod. Empleado:"<<cod_e<<endl;
		cout<<"Puesto:"<<puesto<<endl;
		cout<<"Nombres:"<<nombres<<endl;
		cout<<"Apellidos:"<<apellidos<<endl;
		cout<<"Direccion:"<<direccion<<endl;
		cout<<"Telefono:"<<telefono<<endl;
		cout<<"Fecha Nacimiento:"<<fn<<endl;
	}
};
