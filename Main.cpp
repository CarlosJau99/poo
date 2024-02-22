#include "Cliente.cpp"
#include<iostream>
using namespace std;

main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"ingresar nit:";
	cin>>nit;
	cout<<"ingresar nombre:";
	cin>>nombres;
	cout<<"ingrese su direccion:";
	cin>>direccion;
	cout<<"ingrese su telefono:";
	cin>>telefono;
	//instalcia de un objeto
	
	Cliente obj=Cliente(nombres,apellidos,direccion,telefono,nit);
	//obj.mostrar();
	
	
	obj.setnit(nit);
	obj.setnombres(nombres);
	obj.setapellidos(apellidos);
	obj.setdireccion(direccion);
	obj.settelefono(telefono);
	obj.mostrar();
	
	
	
	
}
