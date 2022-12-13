#include <iostream>
#include <time.h>
#include <stdlib.h> 
#include <string.h> 
#include <conio.h>
#include <windows.h>
using namespace std;

struct Nodo{
	int p;
	char s;
	Nodo *siguiente;
};

void Push(Nodo *&,int); 
void Pop(Nodo *&);
int main(){
	
int m = 0,S = 2;
char s;
int e;
int total;	
	srand(time(NULL));
	Nodo *pila=NULL;
	for (int p=0;p<90;p++){
		p = 0 + rand() % (90 - 0);
      cout<<p<<endl;
	Push(pila,p);
}
do{ 
do{
cout<<"Desea sacar un valor (s/n): ";
	cin>>s;
	while(m != -1){
for(S=2; S >= 0; ){
printf("%d:%dn",m,S--);
Sleep(999);
system("cls" );
}
m--;
}
	if (s=='s'){
	Pop(pila);
	if (pila==NULL){
		cout<<"La pila esta vacia"<<endl;
		s='n';
	}
	else{
		cout<<"---------------------- peek: "<<pila->p<<endl;
	}
	}
    }while(pila->p<90);
	total=pila->p+pila->p;
	cout<<"su total es "<<total<<endl;
	}while((s == 's'));	
	system("PAUSE");
	return 0;
}
	

void Push(Nodo *&pila,int v){
	Nodo *push = new Nodo();
	push->p = v;
	push->siguiente = pila;
	pila = push;
}
void Pop(Nodo *&pila){
	int v;
	Nodo *pop = pila;
	v = pop->p;
	pila = pop->siguiente;
	delete pop;
}
