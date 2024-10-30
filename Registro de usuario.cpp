#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>
using namespace std;
//autor negel diaz marine 2020-0512
/*

*/
//incompletas


void regisp(); // funcion para registrar profesores

//completas
void borrar_empleado(); // funcion para borrar los empleados
void ingresar_empleado(); // funcion para ingresar a un empleado cuenta tambien al profesor
void ver_empleado(); // funcion para ver a todos los empleados
void ver_profe(); // funcion para ver a todos los profesores
void estudiante_all(); // funcion para ver todos los datos de un estudiante
void estudiante_down(); //funcion para eliminar estudiante
void estudiante_up(); // funcion para añadir estudiante
void materia_clean(); // funcion para borrar materia
void materia_up(); // funcion para crear materia
void up_aula(); // funcion para añadir aulas
void down_aula(); // funcion para borrar aulas
void borrar_nota(string x); // x = a la materia del maestro
void vernotas(int x); // x = id del estudiante
void vnotas(string x); // matris de notas del  maestro x = la materia
void insertar_nota(string x); // x = a la materia del maestro
void regis();
int login(void *w); 


struct cuenta
{
char nombre[20];
char apellido[20];
int id;
char materia[20];
int idn;
int nivel;	
}barra;

int main()
	{
		cout << "Registro de usuario" << endl;
		//regis();
		//vernotas(95);
		//vnotas("matematica");
		//insertar_nota("matematica");
		//	cout << "return "  << login() << endl;
		//borrar_nota("matematica");
		//down_aula();
		//up_aula();
	//	materia_up();
	//	materia_clean();
		//estudiante_up();
		//estudiante_down();
		estudiante_all();
		//ver_profe();
		//ver_empleado();
		//ingresar_empleado();
		//borrar_empleado();
		//sueldo();
		
		system("pause");
		return 0;
	}
	
	
void regis ()
{
 char usuario[20];
 int id;
 char clave[30];
 bool repetir;
 
 // introducion
 cout << "Usuario: " << endl;
 cin >> usuario;
 cout << "ID Estudiantil: " << endl;	
 cin >> id;	
 cout << "Clave: ";
 cin >> clave;

 // evaluacion de id registrado
  ifstream lector;
 lector.open("registro.txt",ios::in);
 if(lector.fail())
		 {
		 	cout << "Error al abril fichero" << endl;	
		 	getch();
		  } 
 
 else
 {
 		string ps;
 		int aux2;
 		lector >> ps;
		lector >> aux2;
 	 while(!lector.eof())
	{
		if(aux2 == id)
			{
				repetir = true;
				cout << " Id Ya Registrado " << endl;	
			}
		lector >> ps >> ps >> ps;
	}
 }
  	lector.close();
 
 //evaluacion del registro estudiantil
 ifstream salida;
 salida.open("estudiante.txt",ios::in);	  
 ofstream entrada;
 entrada.open("registro.txt",ios::app);
 
 if(salida.fail())
 {
 	cout << "Error al leer" << endl;	
 	getch();
  } 
  else
  {
	  	if(entrada.fail())
		 {
		 	cout << "Error al escribir" << endl;	
		 	getch();
		  } 
		  
		  else
		  {
		  	 int aux;
		  	 string p;
		  	 
		  	 salida >> aux;
		  	 while(!salida.eof() && repetir == false)
				 {
					if(aux == id)
				 	{
						entrada << usuario << " " << id << " " << clave << " "<< "2" << endl;	
					 	cout << "usuario registrado" << endl;	
					}
					else
					{
						cout <<"ID invalida"<< endl;
					}
						
					salida >> p >> p >> p >> p >> p;
					salida >> aux;
				 }
		  }
  }
  	entrada.close();
	salida.close();

}
int login(void *w)
{
	cout << "Login" << endl;
	char usuario[20];
	int id;
	char clave[20];
	int retornar;
	cout << "Usuario:";
	cin >> usuario;
	cout << endl;
	cout << "Clave: ";
	cin >> clave;
	cout << endl;
	
	ifstream lector;
	lector.open("registro.txt",ios::in);
		if(lector.fail())
		 {
		 	cout << "Error al escribir" << endl;	
		 	getch();
		  } 
		  else
		  {
		  	int aux = 0;
		  	string p;
			char u[20];
			char c[20];
		  	lector >> u;
		  	lector >> p;
		  	lector >> c;
		  	lector >> aux;
		  	while(!lector.eof())
		  	{
		  		if(strcmp(u,usuario)==0)
				  {
				  	if(strcmp(c,clave)==0)
						{
					  	cout << "Login correcto" << endl;
					  	lector.close();
					 
					  	if(aux == 1)
						  {
					  			
						  }
						  
						  if(aux == 2)
						  {
						  	
						  }
					  	return aux;
						}	
				  }	  
			lector >> u;
		  	lector >> p;
		  	lector >> c;
		  	lector >> aux; 
			}
			cout << "usuario o clave incorrecto" << endl;
			lector.close();
			return 0;
		  }	  
}

void vernotas(int x)
{
	 	ifstream lector;
		lector.open("notas.txt",ios::in);
		ifstream c;
		c.open("notas.txt",ios::in);
			if(lector.fail())
				{
				 	cout << "Error al leer" << endl;	
				 	getch();
				} 
			else
				{
					string p;
					int aux, materia;
					lector >> materia;
					lector >> p;
					char r[10];
					for(int i = 0; i < materia; i++)
					{
						lector >> p;
					}
					lector >> aux;
					while(!lector.eof())
					{
						cout << aux <<  endl;
						if(aux == x)
							{
								c >> p >> p; 
								for(int i = 0; i < materia; i++)
								{
									c >> r;
									 printf("%10s ",r);
									 cout << "|";
								}
								cout << endl;
								for(int i = 0; i < materia; i++)
								{
									lector >> aux;
									 printf("%10d ",aux);
									 cout << "|";
								}
								lector.close();
								c.close();
							 return;
							}
						else
						{
							cout << "Error al cargar notas" << endl;
						}
						for(int i = 0; i < materia; i++)
						{
						lector >> p;
						}
						lector >> aux;
					}
				}
}

void vnotas(string x)
{
	char name1[10];
	char name2[10];
	char aula[10];
	int id,idn;
	
	ifstream lector;
	lector.open("estudiante.txt",ios::in);
		if(lector.fail())
		{
			cout << "Error al abril archivo" << endl;
		}
		
		else
		{
			string p;
			char ps[10];
			lector >> id;
			lector >> name1;
			lector >> name2;
			lector >> p;
			lector >> aula;
			lector >> idn;
			printf("%22s ","Nombre");
			cout << "|";
			printf("%10s ","ID");
			cout << "|";
			printf("%10s ","Aula");
			cout << "|";
			printf("%10s ","Nota");
			cout << endl;
			while(!lector.eof())
			{
				
				ifstream leer;
				leer.open("notas.txt",ios::in);
				if(leer.fail())
					{
						cout << "Error al abril archivo" << endl;
					}
					else
					{
						char xs[10];
						strcpy(xs,x.c_str());
						int materia, aux;
						leer >> materia; 
						leer >> p;
						int conter = 0;
						int fs = 0;
						int n[materia];
						while(fs == 1) 
						{
							conter ++;
							leer >> ps;
							if(strcmp(xs,ps)==0)
							{
								fs = 1;
							}
						}
						materia = materia - conter;
						for(int i = 0 ; i < materia; i++)
						{
							leer >> p;
						}
						materia = materia + conter;
						while(!leer.eof())
						{
							leer >> aux;
							if(aux == idn)
							{
								for(int i = 0 ; i < materia; i++)
								{
									leer >> n[i];	
								}
								leer.close();	
								printf("%10s ",name1);
								cout << " ";
								printf("%10s ",name2);
								cout << "|";
								printf("%10d ",id);
								cout << "|";
								printf("%10s ",aula);
								cout << "|";
								printf("%10d ",n[conter]);
								cout << endl;
								aux = -1;
							}		
						}
					}
				lector >> id;
				lector >> name1;
				lector >> name2;
				lector >> p;
				lector >> aula;
				lector >> idn;
			}
		}
}

void insertar_nota(string x)
	{
		int id,ca;
		int sup;
		string p;
		cout <<"inserla id del estudiante: ";
		cin >> id;
		ifstream leer;
		leer.open("estudiante.txt",ios::in);
			if(leer.fail())
			{
			cout << "Error al Cargar archivo";
			getch();
			}
			else
			{
				int aux;
				int materia;
				leer >> aux;
				leer >> p >> p >> p >> p >> sup;
				while(!leer.eof())
				{
					if(aux == id)
					{
						id = sup;
						cout <<"inserte la nueva calificacion: ";
						cin >> ca;
						if(ca < 0)
						{
							cout << "No se pueden insertar numeros negativos" << endl;
							return;
						}
						ifstream salida;
						salida.open("notas.txt",ios::in);
						
						ofstream entrada;
						entrada.open("temp.txt",ios::out);
						
						 
						if(salida.fail())
						{
							cout << "Error al Cargar archivo";
							getch();
						}
						
						else
						{
						char nombre[10];
						char au[10];
						int s;
						int contador = 0;
						char xs[10];
						strcpy(xs,x.c_str());
						 
						salida >> materia;
						entrada << materia << endl;
						salida >> nombre;
						entrada << nombre << " ";
						for(int i = 0 ; i < materia;i++)
							{	
								if(strcmp(xs,nombre)==0){}
								else{contador++;}
								salida >> nombre;
								entrada << nombre << " ";
							}
						entrada << endl;		
						contador =  materia - contador;
						salida >> s;
						entrada << s << " ";
						 while(!salida.eof())
						 {
						 	if(id == s)
						 	{
							 	for(int i = 0; i < materia ; i++)
								 {
								 	salida >> s;
								 	if((i+1) == contador){
								 	 cout << "Nota Actualizada" << endl;
									 entrada << ca << " ";
									 }
								 	else{entrada << s << " ";}
								 }	
							}
							else
							{
								for(int i = 0; i < materia ; i++)
								 {
								 	salida >> s;
								 	entrada << s << " ";
								 }	 
							}
								salida >> s;
								 if(s == -1)
								 {
								 	entrada << "-1";
								 	 entrada.close();
									 salida.close();
									 leer.close();
									 remove("notas.txt");
									 rename("temp.txt","notas.txt");
									 return;
								 }
								entrada << endl;
								entrada << s << " ";
						 }
						 
						}
					}
				 leer >> aux;
				 leer >> p >> p >> p >> p >> sup;
				}
				cout << "El ID del estudiante no existe" << endl;
			}	
	}
	
	void borrar_nota(string x)
	{
		int id;
		int sup;
		string p;
		cout <<"inserla id del estudiante: ";
		cin >> id;
		ifstream leer;
		leer.open("estudiante.txt",ios::in);
			if(leer.fail())
			{
			cout << "Error al Cargar archivo";
			getch();
			}
			else
			{
				int aux;
				int materia;
				leer >> aux;
				leer >> p >> p >> p >> p >> sup;
				while(!leer.eof())
				{
					if(aux == id)
					{
						id = sup;
						ifstream salida;
						salida.open("notas.txt",ios::in);
						
						ofstream entrada;
						entrada.open("temp.txt",ios::out);
						
						 
						if(salida.fail())
						{
							cout << "Error al Cargar archivo";
							getch();
						}
						
						else
						{
						char nombre[10];
						char au[10];
						int s;
						int contador = 0;
						char xs[10];
						strcpy(xs,x.c_str());
						 
						salida >> materia;
						entrada << materia << endl;
						salida >> nombre;
						entrada << nombre << " ";
						for(int i = 0 ; i < materia;i++)
							{	
								if(strcmp(xs,nombre)==0){}
								else{contador++;}
								salida >> nombre;
								entrada << nombre << " ";
							}
						entrada << endl;		
						contador =  materia - contador;
						salida >> s;
						entrada << s << " ";
						 while(!salida.eof())
						 {
						 	if(id == s)
						 	{
							 	for(int i = 0; i < materia ; i++)
								 {
								 	salida >> s;
								 	if((i+1) == contador){
								 	 cout << "Nota borrada" << endl;
									 entrada << "0" << " ";
									 }
								 	else{entrada << s << " ";}
								 }	
							}
							else
							{
								for(int i = 0; i < materia ; i++)
								 {
								 	salida >> s;
								 	entrada << s << " ";
								 }	 
							}
								salida >> s;
								 if(s == -1)
								 {
								 	entrada << endl;
								 	entrada << "-1";
								 	 entrada.close();
									 salida.close();
									 leer.close();
									 remove("notas.txt");
									 rename("temp.txt","notas.txt");
									 return;
								 }
								entrada << endl;
								entrada << s << " ";
						 }
						 
						}
					}
				 leer >> aux;
				 leer >> p >> p >> p >> p >> sup;
				}
				cout << "El ID del estudiante no existe" << endl;
			}	
	}
	
	void down_aula()
	{
		char nombre[20];
		char p[20];
		ifstream salida;
		salida.open("cursos.txt",ios::in);
		
		ofstream entrada;
		entrada.open("temp.txt",ios::out);
		
		 
		if(salida.fail())
		{
			cout << "Error al Cargar archivo";
			getch();
		}
		
		else
		{
		 char aux[20];
		 cout <<"aula a eliminar: "	;
		 cin >> aux;
		 
		 while(!salida.eof())
		 {
		 	salida >> nombre;
		 	// secuencia del datos y otros
		 	if(strcmp(aux,nombre)==0)
		 	{
		 		ifstream lector;
				lector.open("estudiante.txt",ios::in);	
					if(salida.fail())
					{
						cout << "Error al Cargar archivo";
						getch();
					}
					else
					{
						while(!salida.eof())
						{
							lector >> p >> p >> p >> p >> p;
							
							if(strcmp(aux,p)==0)
							{
								cout << "No Puedes eliminar un cursos con estudiantes" << endl;
								entrada.close();
								salida.close();
								remove("temp.txt");
								return;
							}
							lector >> p;	
						}
						cout << "Eliminado con Exito";
						getch();
						
					}	
			}
			else
			{
				entrada << nombre << endl;
			}
		 }
		 
		 entrada.close();
		 salida.close();
		 remove("cursos.txt");
		 rename("temp.txt","cursos.txt");
		}					
	}
	
	void up_aula()
	{
		char nuevo[5];
		char pas[5];
		ifstream lector;
		lector.open("cursos.txt",ios::in);
		
		ofstream escritor;
		escritor.open("cursos.txt",ios::app);
		
		if(escritor.fail() && lector.fail())
		{
			cout << "archivo no encontrado" << endl;
			getch();
		}
		else
		{
			cout << "Aulas:" << endl;
			while(!lector.eof())
			{
				lector >> pas;
				cout << pas << endl;
			}
			lector.close();
			cout << "Nota minimo 5 caracteres" << endl;
			cout << "Inserte nueva aula: ";
			cin >> nuevo;
			lector.open("cursos.txt",ios::in);
			if(lector.fail())
			{
				cout << "archivo no encontrado" << endl;
				getch();
			}
			else
			{
				while(!lector.eof())
				{
					lector >> pas;
					if(strcmp(pas,nuevo)==0)
					{
						cout << "Esta aula ya existe" << endl;
						lector.close();
						escritor.close();
						return;
					}
				}	
			}
			escritor << endl;
			escritor << nuevo;
			escritor.close();
			cout << "Curso añadido" << endl;
		}
		
	}
	
	void materia_up()
	{
		char nuevo[10];
		char pas[10];
		int cuck = 0;
		ifstream lector;
		lector.open("notas.txt",ios::in);
		
		ofstream escritor;
		escritor.open("temp.txt",ios::out);
		
		if(escritor.fail() && lector.fail())
		{
			cout << "archivo no encontrado" << endl;
			getch();
		}
		else
		{
				lector >> cuck;
				cout << "Nota: no puedes insertar materias repetidas" << endl;
				cout << "Materias: " << endl;
				ifstream op;
				op.open("Notas.txt", ios::in);
				op >> pas >> pas;
				for(int i = 0; i < cuck; i++) 
				{
					op >> pas;
					cout << pas << endl;
				}
				op.close();
				cout << "inserte una materia: " << endl;
				cin >> nuevo;
				ifstream leer;
				leer.open("notas.txt",ios::in);
				if(leer.fail())
					{
						cout << "archivo no encontrado" << endl;
						getch();
					}
					else
					{
						leer >> pas;
						leer >> pas;
						for(int i = 0; i < cuck; i++)
						{
							leer >> pas;
							if(strcmp(pas,nuevo)==0)
							{
							 cout << " materia existente" << endl;
							 escritor.close();
							 lector.close();
							 leer.close();
							 remove("temp.txt");
							 return;		
							}
						}
					}
			escritor << cuck + 1 << endl;
			lector >> pas;
			escritor << pas << " ";
			for(int i = 0; i < cuck; i++)
			{
				lector >> pas;
				escritor << pas <<" ";	
			}
			escritor << nuevo;
			escritor << endl;
			while(!lector.eof())
			{
				lector >> pas;
				if(strcmp(pas,"-1")==0)
				{
					leer.close();
					cout << "Materia insertada" << endl;
					escritor << "-1";
					op.close();
					lector.close();
					escritor.close();
					leer.close();
					remove("notas.txt");
					rename("temp.txt","notas.txt");
					return;
				}
				escritor << pas << " ";
				int n[cuck];
				for(int i = 0; i < cuck; i++)
				{
					lector >> n[i];	
				}
					for(int i = 0; i < cuck; i++)
				{
					escritor << n[i] << " ";	
				}
				escritor << "0";
				escritor << endl;
		 }
			
		
		}
					remove("notas.txt");
					rename("temp.txt","notas.txt");
					lector.close();
					escritor.close();					
	}
	
	void materia_clean()
	{
		char nombre[10];
		char pas[10];
		int materia;
		int c = 0;
		int z = 0;
		int x = 0;
		ifstream lector;
		ofstream escritor;
		ifstream leer;
		
		lector.open("profesor.txt",ios::in);
		escritor.open("temp.txt",ios::out);
		leer.open("notas.txt",ios::in);
		
		if(lector.fail() && escritor.fail() && leer.fail())
		{
			cout << "un archivo abrio incorrectamente" << endl;
			getch();
			return;
		}
		else
		{
			cout << "Materia a borrar: " << endl;
			cin >> nombre;
			while(!lector.eof())
			{
				lector >> pas;
				lector >> pas;
				lector >> pas;
				lector >> pas;
				lector >> pas;
				if(strcmp(pas,nombre)==0)
				{
					cout << "Hay un profesor anclado a la materia debes borrarlo de la lista empleado" << endl;
					lector.close();
					leer.close();
					escritor.close();
					return;
				}
				lector >> pas;
			}
			lector.close();
			leer >> materia;
			escritor << materia -1 << endl;
			leer >> pas;
			escritor << pas << " ";
				for(int i = 0; i < materia ; i++)
				{
					cout << "bucle1" << endl;
					leer >> pas;
					if(strcmp(nombre,"matematica")==0 || strcmp(nombre,"sociales")==0 || strcmp(nombre,"lengua")==0 || strcmp(nombre,"naturales")==0 )
					{
						cout << "No se pueden borrar las materias basicas" << endl;
						leer.close();
						escritor.close();
						return;	
					}
					if(!(strcmp(nombre,pas)==0))
					{
						escritor << pas <<" ";
						c++;
					}
					else
					{
						z = c;
					}
					
					if((strcmp(nombre,pas)==0))
					{
						x = 1;
					}
				}
				
				if(x == 0)
				{
					cout << "No Existe esta materia" << endl;
					lector.close();
					leer.close();
					escritor.close();
					return;	
				}		
			escritor << endl;
			int n[materia];
			while(!leer.eof())
			{
				cout << "bucle2" << endl;
				leer >> c;
				escritor << c << " ";
				for(int i = 0; i < materia; i++)
				{
					 leer >> n[i];	
				}
				for(int i = 0; i < materia; i++)
				{
					if(c == -1)
				 	{
				 		cout << "cierre" << endl;
				 		leer.close();
						lector.close();
				 		escritor.close();
				 		remove("notas.txt");
						rename("temp.txt","notas.txt");
				 		return;
				 	}
				 	
					if(i == z){}
					else
					{
						escritor << n[i] << " ";	
					}
					
				}
				escritor << endl;
			}
						leer.close();
						lector.close();
				 		escritor.close();
				 		remove("notas.txt");
						rename("temp.txt","notas.txt");
				 		return;
		}
	}
	
	void estudiante_up()
	{
		int id,edad,idn;
		char nombre[10];
		char apellido[10];
		char curso[5];
		char pas[10];
		int cap;
		int x = 0;
		
		ofstream nota;
		ofstream estudiar;
		ifstream lector;
		ifstream leer;
		ifstream op2;
		
		op2.open("profesor.txt",ios::in);
		nota.open("temp.txt",ios::out);
		estudiar.open("estudiante.txt",ios::app);
		lector.open("notas.txt",ios::in);
		leer.open("estudiante.txt",ios::in);
		if(nota.fail() && estudiar.fail() && lector.fail() && leer.fail() && op2.fail()) 
		{
			cout << "Error al abrir los archivos" << endl;
			getch();
			op2.close();
			nota.close();
			estudiar.close();
			lector.close();
			leer.close();
			return;
		}
		else
		{
			cout << "Introduces los Datos del estudiante" << endl;
			cout << "Limites por caracter: nombre 10, apellido 10, curso 5" << endl;
			cout << "Nombre: " << endl;	
			cin >> nombre;	
			cout << "apellido: " << endl;	
			cin >> apellido;
			cout << "curso: " << endl;	
			cin >> curso;	
			cout << "id: " << endl;	
			cin >> id;
			cout << "edad: " << endl;	
			cin >> edad;
			cout << "id de notas: " << endl;	
			cin >> idn;	
			
			//calculo de cursos
			ifstream op;
			op.open("cursos.txt",ios::in);
			if(op.fail())
			{
				cout << "Error al abrir los archivos" << endl;
				getch();
				op2.close();
				op.close();
				nota.close();
				estudiar.close();
				lector.close();
				leer.close();
				return;
			}
			else
			{
				while(!op.eof())
				{
					op >> pas;
					if(strcmp(pas,curso)==0)
					{
					  x = 1;		
					}
				}
			}
			//fin
			if(x==0)
			{
					cout << "el curso no existe" << endl;
					getch();
					op.close();
					op2.close();
					nota.close();
					estudiar.close();
					lector.close();
					leer.close();
					remove("temp.txt");
					return;		
			}
			//calculador de repeticiones;
				op2 >> cap;
				while(!op2.eof())
				{
					if(cap==id)
					{
					cout << "Id ya existente" << endl;
					getch();
					op2.close();
					op.close();
					nota.close();
					estudiar.close();
					lector.close();
					leer.close();
					remove("temp.txt");
					return;		
					}
					op2 >> pas >> pas >> pas >> pas >> pas;
					op2 >> cap;
				}
			// calculo de id profesor
			
			//fin
			while(!leer.eof())
			{
				leer >> cap;
				if(id == cap)
				{
					cout << "Id ya existente" << endl;
					getch();
					op2.close();
					op.close();
					nota.close();
					estudiar.close();
					lector.close();
					leer.close();
					remove("temp.txt");
					return;	
				}
				leer >> pas;
				leer >> pas;
				leer >> cap;
				leer >> pas;
				leer >> cap;
				if(idn == cap)
				{
					cout << "id de nota ya existente" << endl;
					getch();
					op2.close();
					op.close();
					nota.close();
					estudiar.close();
					lector.close();
					leer.close();
					remove("temp.txt");
					return;	
				}
			}
			estudiar << endl << id  << " " << nombre << " " << apellido << " " << edad << " " << curso << " " << idn;
			
			int materia;
			lector >> materia;
			nota << materia << endl;
			lector >> pas;
			nota << pas << " ";
			for(int i = 0; i < materia ; i++)
			{
				lector >> pas;
				nota << pas << " ";
			}
			nota << endl;
			while(!lector.eof())
			{
				lector >> cap;
				if(cap == -1)
				{
					nota << idn << " ";
					for(int i = 0; i < materia ; i++)
					{
					lector >> pas;
					nota << "0" << " ";
					}
					nota << endl << "-1";
					op.close();
					op2.close();
					nota.close();
					estudiar.close();
					lector.close();
					leer.close();
					remove("notas.txt");
					rename("temp.txt","notas.txt");
					cout << "Estudiante insertado con exito" << endl;
					return;
				}
				nota << cap << " ";
				for(int i = 0; i < materia ; i++)
				{
					lector >> cap;
					nota << cap << " ";
				}
				nota << endl;
			}			
		}
	}
	void estudiante_down()
	{
		int id,idn;
		char pas[10];
		int cap;
		int x = 0;
		
		ofstream nota;
		ofstream estudiar;
		ifstream lector;
		ifstream leer;
		nota.open("temp1.txt",ios::out);
		estudiar.open("temp2.txt",ios::out);
		lector.open("notas.txt",ios::in);
		leer.open("estudiante.txt",ios::in);
		if(nota.fail() && estudiar.fail() && lector.fail() && leer.fail())
		{
			cout << "Error al abrir los archivos" << endl;
			getch();
			nota.close();
			estudiar.close();
			lector.close();
			leer.close();
			return;
		}
		else
		{
			cout << "Introduce el id del estudiante" << endl;

			cout << "id: " << endl;	
			cin >> id;
			
			//eliminacion de archivo estudiante leer in y estudiar out
			while(!leer.eof())
			{
				leer >> cap;
				if(cap == id)
				{
					x = 1;
				}
				
				if(!(cap == id))
				{
					estudiar << cap << " ";
					leer >> pas;
					estudiar << pas << " ";	
					leer >> pas;
					estudiar << pas << " ";	
					leer >> pas;
					estudiar << pas << " ";	
					leer >> pas;
					estudiar << pas << " ";	
					leer >> pas;
					estudiar << pas;
					estudiar << endl;					
				}
				else
				{
					leer >> pas;
					leer >> pas;
					leer >> pas;
					leer >> pas;
					leer >> idn;	
				}
			
			}
			
			if(x == 0)
			{
				cout << "Esta id no existe" << endl;
				nota.close();
				estudiar.close();
				lector.close();
				leer.close();
				remove("temp1.txt");
				remove("temp2.txt");
				return;
			}
			
			
			int materia;
			lector >> materia;
			nota << materia << endl;
			lector >> pas;
			nota << pas << " ";
			for(int i = 0; i < materia ; i++)
			{
				lector >> pas;
				nota << pas << " ";
			}
			// go notas;
			nota << endl;
			while(!lector.eof())
			{
				lector >> cap;
				
				if(cap == idn)
				{
					for(int i = 0; i < materia ; i++)
					{

						lector >> cap;
					}
					
					cout << "Estudiante eliminado con exito" << endl;
				}
				else
				{
					nota << cap << " ";
					for(int i = 0; i < materia ; i++)
					{
							lector >> cap;
								if(cap == (-1))
								{
									nota.close();
									estudiar.close();
									lector.close();
									leer.close();
									remove("notas.txt");
									remove("estudiante.txt");
									rename("temp1.txt","notas.txt");
									rename("temp2.txt","estudiante.txt");
									return;
									}
									nota << cap << " ";
					}
					nota << endl;
				}
			}
					nota.close();
					estudiar.close();
					lector.close();
					leer.close();
					return;			
		}	
	}
	
	void estudiante_all()
	{
			char name1[10];
			char name2[10];
			char aula[10];
			int id,idn,edad;
			ifstream lector;
			lector.open("estudiante.txt",ios::in);
			if(lector.fail())
			{
				cout << "Error al abril archivo" << endl;
			}
			else
			{
				char ps[10];
				lector >> id;
				lector >> name1;
				lector >> name2;
				lector >> edad;
				lector >> aula;
				lector >> idn;
				printf("%5s ","ID");
				cout << "|";
				printf("%22s ","Nombre");
				cout << "|";
				printf("%5s ","edad");
				cout << "|";
				printf("%5s ","Aula");
				cout << "|";
				printf("%27s ","Nota");
				cout << "|";
				printf("%3s ","id de notas");
				cout << endl;
					string p;
			while(!lector.eof())
			{
				
				ifstream leer;
				leer.open("notas.txt",ios::in);
				if(leer.fail())
					{
						cout << "Error al abril archivo" << endl;
					}
					else
					{
						int materia, aux;
						leer >> materia; 
						leer >> p;
						int n[materia];
						char m[materia];
						for(int i = 0 ; i < materia; i++)
						{
							leer >> ps;
							m[i] = ps[0];
						}
						while(!leer.eof())
						{
							leer >> aux;
							if(aux == idn)
							{
								for(int i = 0 ; i < materia; i++)
								{
									leer >> n[i];	
								}
								leer.close();
								printf("%5d ",id);
								cout << "|";	
								printf("%10s ",name1);
								cout << " ";
								printf("%10s ",name2);
								cout << "|";
								printf("%5d ",edad);
								cout << "|";
								printf("%5s ",aula);
								cout << "|";
								//for
								for(int i =0; i < materia ; i ++)
								{
									cout << "|";
									printf("%1c ",m[i]);
									printf("%3d ",n[i]);	
								}
								cout << "|";
								printf("%3d ",idn);

								cout << endl;
								aux = -1;
							}		
						}
					}
				lector >> id;
				lector >> name1;
				lector >> name2;
				lector >> edad;
				lector >> aula;
				lector >> idn;
				}
			}	
		lector.close();		
	}
	
void ver_profe()
{
	 char pas[10];
	 ifstream lector;
	 lector.open("profesor.txt",ios::in);
	if(lector.fail())
	{
		cout << "Error al abril archivo" << endl;
	}
	else
	{
				printf("%5s ","ID");
				cout << "|";
				printf("%22s ","Nombre");
				cout << "|";
				printf("%5s ","edad");
				cout << "|";
				printf("%10s ","Materia");
				cout << "|";
				printf("%5s ","ID de empleado");
				cout << endl;
			while(!lector.eof())
			{
				lector >> pas;
				printf("%5s ",pas);
				cout << "|";
				lector >> pas;
				printf("%10s ",pas);
				cout << " ";
				lector >> pas;
				printf("%10s ",pas);
				cout << "|";
				lector >> pas;
				printf("%5s ",pas);
				cout << "|";
				lector >> pas;
				printf("%10s ",pas);
				cout << "|";
				lector >> pas;
				printf("%5s ",pas);
				cout << endl;		
			}	
	}
}

void ver_empleado()
{
	char pas[10];
	 ifstream lector;
	 lector.open("empleado.txt",ios::in);
	if(lector.fail())
	{
		cout << "Error al abril archivo" << endl;
	}
	else
	{
				printf("%5s ","ID");
				cout << "|";
				printf("%10s ","Rol");
				cout << "|";
				printf("%22s ","Nombre");
				cout << "|";
				printf("%10s ","sueldo");
				cout << endl;
			while(!lector.eof())
			{
				lector >> pas;
				printf("%5s ",pas);
				cout << "|";
				lector >> pas;
				printf("%10s ",pas);
				cout << "|";
				lector >> pas;
				printf("%10s ",pas);
				cout << " ";
				lector >> pas;
				printf("%10s ",pas);
				cout << "|";
				lector >> pas;
				printf("%10s ",pas);
				cout << endl;		
			}	
	}
}

void ingresar_empleado()
{
	int id,sueldo;
		char nombre[10];
		char apellido[10];
		char rol[10];
		char pas[10];
		int cap;
		int x = 0;
		
		ofstream escritor;
		ifstream lector;
		ifstream op;
		ifstream op2;
		ifstream leer;
		ofstream insertar;
		op2.open("estudiante.txt",ios::in);
		op.open("notas.txt",ios::in);
		insertar.open("profesor.txt",ios::app);
		leer.open("profesor.txt",ios::in);
		escritor.open("empleado.txt",ios::app);
		lector.open("empleado.txt",ios::in);
		if(escritor.fail() && lector.fail() && insertar.fail() && leer.fail())
		{
			cout << "Error al abrir los archivos" << endl;
			getch();
			lector.close();
			escritor.close();
			leer.close();
			insertar.close();
			op.close();
			op2.close();
			return;
		}
		else
		{
			cout << "Introduces los Datos del empleado" << endl;
			cout << "Limites por caracter: nombre 10, apellido 10, rol 10" << endl;
			cout << "Nombre: " << endl;	
			cin >> nombre;	
			cout << "apellido: " << endl;	
			cin >> apellido;
			cout << "rol: " << endl;	
			cin >> rol;	
			cout << "id: " << endl;	
			cin >> id;
			cout << "Sueldo: " << endl;	
			cin >> sueldo;
			while(!lector.eof())
			{
				lector >> cap;
				if(id == cap)
				{
					cout << " ID existente " << endl;
					lector.close();
					escritor.close();
					leer.close();
					insertar.close();
					op.close();
					op2.close();
					return;
				}
				lector >> pas >> pas >> pas >> pas;
			}
			cout << "El empleado va a ser Docente inserte (s) en caso contraio cualquier caracter" << endl;	
			char pre;
			cin >>pre;
			if(pre == 's')
			{
				int edad,idp;
				char materia[10];
				cout << "id de docente: " << endl;	
				cin >> idp;
				cout << "edad: " << endl;	
				cin >> edad;
				cout << "materia: " << endl;	
				cin >> materia;
				while(!leer.eof())
				{
					leer >> cap;
					if(idp == cap)
					{
					cout << " ID de docente existente " << endl;
					lector.close();
					escritor.close();
					leer.close();
					insertar.close();
					op.close();
					op2.close();
					return;	
					}
					leer >> pas >> pas >> pas >> pas >> pas;
				}
				
				while(!op2.eof())
				{
					op2 >> cap;
					if(idp == cap)
					{
					cout << " ID existente perteneciente a un estudiante" << endl;
					lector.close();
					escritor.close();
					leer.close();
					insertar.close();
					op.close();
					op2.close();
					return;	
					}
					op2 >> pas >> pas >> pas >> pas >> pas;
				}
				
				op >> cap;
				op >> pas;
				for(int i = 0; i < cap; i++)
					{
						op >> pas;
						if((strcmp(pas,materia)==0))	
						{
							x = 1;
						}
					}
					if(x == 0)
					{
					cout << " Esta materia no existe " << endl;
					lector.close();
					escritor.close();
					leer.close();
					insertar.close();
					op.close();
					op2.close();
					return;		
					}
				insertar << endl << idp  << " " << nombre << " " << edad << " " << materia << " " << id;
			}
			escritor << endl << id  << " " << rol << " " << nombre << " " << apellido << " " << sueldo;
			lector.close();
			escritor.close();
			leer.close();
			insertar.close();
			op.close();
			op2.close();
			return;		
		}	
		
}
void borrar_empleado()
{
		int id;
		char pas[10];
		char kas[10];
		int cap,ap;
		int x = 0;	
		
		ifstream lector;
		ofstream escritor;
		ifstream leer;
		ofstream escribir;	
		ifstream op;
		
		lector.open("profesor.txt",ios::in);
		escritor.open("temp1.txt",ios::out);
		leer.open("empleado.txt",ios::in);
		escribir.open("temp2.txt",ios::out);
		op.open("profesor.txt",ios::in);
		if(lector.fail() && escritor.fail() && escribir.fail() && leer.fail())
		{
			cout << "Error al abrir los archivos" << endl;
			getch();
			lector.close();
			op.close();
			escritor.close();
			escribir.close();
			leer.close();
			return;
		}
		else
		{
			cout << "Introduce el id del empleado" << endl;

			cout << "id: " << endl;	
			cin >> id;
			//eliminacion de archivos
			while(!leer.eof()) // lectura de empleado // leer lectura y escribir escritura
			{
				leer >> cap;
				if(cap == id)
				{
				 	x= 1;
				 leer >> pas;
				 leer >> pas;
				 leer >> pas;
				 leer >> pas;
				}
				else
				{
				 escribir << cap << " ";
				 leer >> pas;
				 escribir << pas << " ";
				 leer >> pas;
				 escribir << pas << " ";
				 leer >> pas;
				 escribir << pas << " ";
				 leer >> pas;
				 escribir << pas;	
				 if(!leer.eof())
				 {
				 	escribir << endl;
				 }
				}
			}
			
			if(x == 0)
			{
				cout << "Esta id no existe" << endl;
				lector.close();
				escritor.close();
				escribir.close();
				leer.close();
				op.close();
				remove("temp1.txt");
				remove("temp2.txt");
				return;
			}
			
			
				string z[5];
				// go profesor;
				op >> kas >> kas >> kas >> kas >>  kas >> ap;
				while(!lector.eof()) // lectura de empleado // lector lectura y escritor escritura
				{
					lector >> z[0];
					lector >> z[1];
					lector >> z[2];
					lector >> z[3];
					lector >> z[4];
					lector >> cap;
					if(cap == id)
					{	
					}
					else
					{	
					 escritor << z[0] << " ";
					 escritor << z[1] << " ";
					 escritor << z[2] << " "; 
					 escritor << z[3] << " ";
					 escritor << z[4] << " ";
					 escritor << cap;
					}	
					cout << "ap: " << ap << endl;
					if(!lector.eof() && id != ap)
					 {
						bool v = !lector.eof();
						cout << v << endl;
						escritor << endl;
						}
				}
						remove("profesor.txt");
						remove("empleado.txt");
						rename("temp1.txt","profesor.txt");
						rename("temp2.txt","empleado.txt");
						escritor.close();
						lector.close();
						lector.close();
						escribir.close();
						leer.close();
						op.close();
						return;			
		}
}

void regisp()
{
  char usuario[20];
 int id;
 char clave[30];
 bool repetir;
 int x = 0;
 // introducion
 cout << "Usuario: " << endl;
 cin >> usuario;
 cout << "ID docente: " << endl;	
 cin >> id;	
 cout << "Clave: ";
 cin >> clave;

 // evaluacion de id registrado
  ifstream lector;
 lector.open("registro.txt",ios::in);
 if(lector.fail())
		 {
		 	cout << "Error al abril fichero" << endl;	
		 	getch();
		  } 
 
 else
 {
 		string ps;
 		int aux2;
 		lector >> ps;
		lector >> aux2;
 	 while(!lector.eof())
	{
		if(aux2 == id)
			{
				repetir = true;
				cout << " Id Ya Registrado " << endl;	
			}
		lector >> ps >> ps >> ps;
	}
 }
  	lector.close();
 
 //evaluacion del registro estudiantil
 ifstream salida;
 salida.open("profesor.txt",ios::in);	  
 ofstream entrada;
 entrada.open("registro.txt",ios::app);
 
 if(salida.fail())
 {
 	cout << "Error al leer" << endl;	
 	getch();
  } 
  else
  {
	  	if(entrada.fail())
		 {
		 	cout << "Error al escribir" << endl;	
		 	getch();
		  } 
		  
		  else
		  {
		  	 int aux;
		  	 string p;
		  	 
		  	 salida >> aux;
		  	 while(!salida.eof() && repetir == false)
				 {
					if(aux == id)
				 	{
						entrada << usuario << " " << id << " " << clave << " "<< "2" << endl;	
					 	cout << "profesor registrado" << endl;	
					 	x = 1;
					}
					else
					{
						
					}
						
					salida >> p >> p >> p >> p >> p;
					salida >> aux;
				 }
				 
				 if(x == 0)
				 {
				 	cout << "Esta id no esta registrada" << endl;
				 }
		  }
  }
  	entrada.close();
	salida.close();	
}

