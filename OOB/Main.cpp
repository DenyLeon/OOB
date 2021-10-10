
#include "Clase Empleado.cpp"
#include<iostream>
using namespace std;
main(){
	string c_nit,c_nombres,c_apellidos,c_direccion,c_fn, c_emp, c_pue;
	int c_telefono;
	cout<<"Ingrese Codigo de empleado:";
	cin>>c_emp;
	cout<<"Ingrese Puesto:";
	cin>>c_pue;
	cout<<"Ingrese Nit:";
	cin>>c_nit;
	cout<<"Ingrese Nombres:";
	cin>>c_nombres;
	cout<<"Ingrese Apellidos:";
	cin>>c_apellidos;
	cout<<"Ingrese Direccion:";
	cin>>c_direccion;
	cout<<"Ingrese Telefono:";
	cin>>c_telefono;
	cout<<"Ingrese Fecha Nacimiento:";
	cin>>c_fn;
	// instanciar la clase por medio de un objeto
Empleado obj_c = Empleado(c_nombres,c_apellidos,c_direccion,c_telefono,c_fn,c_emp,c_pue);
	obj_c.agregar();
	cout<<"_____________"<<endl;
	cout<<"Modificar Codigo de empleado:";
	cin>>c_emp;
	obj_c.setcod_e(c_emp);
	obj_c.agregar();
	cout<<"_____________"<<endl;
	cout<<"Codigo de empleado Modificado:"<<obj_c.getcod_e()<<endl;
	
obj_c.agregar();
	cout<<"_____________"<<endl;
	cout<<"Modificar Codigo de empleado:";
	cin>>c_pue;
	obj_c.setpuesto(c_pue);
	obj_c.agregar();
	cout<<"_____________"<<endl;
	cout<<"Puesto Modificado:"<<obj_c.getpuesto()<<endl;
	
}
