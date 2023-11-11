#include <iostream>
using namespace std;
main(){
system ("color 06");
string usuario="abraham",usuario1,nombre,producto,pago;
int clave=123,clave1,cantidad,preciouni,preciototal,itbis,preciofin,respuesta1,total;
f: 
	cout<<"\nfactura\n";
	cout<<"\ningrese su usuario  :  ";
	cin>>usuario1;
	cout<<"\ningrese su clave  :";
	cin>>clave1;
if (usuario1==usuario && clave1==clave)
{
 f2:
  cout<<"\n bienvenido al sistema\n";
  cout<<"\n ingrese el el nombre del cliente:  ";
  cin>>nombre;
  cout<<"\n ingrese el nombre del producto:  ";
  cin>>producto;
  cout<<"\n ingrese la cantidad de producto que compro el cliente:  ";
  cin>>cantidad;
  cout<<"\n ingrese el precio unitario del producto comprado:  ";
  cin>>preciouni;
  cout<<"\n ¿ el cliente pagara con efectivo o tarjeta ?  ";
  cin>>pago;
  
  preciototal= preciouni * cantidad;
  itbis= preciototal * 0.12;
  preciofin= itbis + preciototal;	
	total= preciototal + itbis;
	cout<<"\n..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--FACTURA--..--..--..--..--..---..--..--..--..--..--..--..--..--..--..--..-.";
	cout<<"\n NOMBRE CLIENTE  :"<<nombre<<endl;
	cout<<"\n PRODUCTO COMPRADO  :"<<producto<<endl;
	cout<<"\n CANTIDAD DE PRODUCTO COMPRADO :"<<cantidad<<endl;
	cout<<"\n PRECIO UNITARIO DE PRODUCTO COMPRADO :"<<preciouni<<endl;
	cout<<"\n PRECIO TOTAL :"<<preciototal<<endl;
	cout<<"\n VALOR DE IVA EN FACTURA :"<<itbis<<endl;
	cout<<"\n TOTAL DE LA FACTURA :"<<total<<endl;
	cout<<"\n ¿SON CORRECTOS LOS DATOS? \n ";
	cout<<"\n 1)SI 2)NO \n";
	
	cin>>respuesta1;
	if (respuesta1==1)
	cout<<"\n LA FACTURA SERA INGRESADA \n";
	else
	goto f2;
	
}
else{
	cout<<"\n LA CONTRASEÑA O USUARIO INCORRECTO, INTENTELO DE NUEVO \n";
goto f;
	
}
return 0;




}
