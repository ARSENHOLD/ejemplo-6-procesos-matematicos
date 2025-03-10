#include <iostream>
#include <cstdlib>
#include <math.h>
/* calcular diversos procesos matematicos */ 
using namespace std;
int main(int argc, char** argv) {
	system("color f0");
	int opcion;
	float a,b,c,n,x,y,z,resultado;
	char respuesta;
	cout<<endl<<endl;
	do{system("cls");
    cout<<"\t\t�����������������������������������������������������������������������"<<endl;
    cout<<"\t\t              realizar diversos procesos matematicos                   "<<endl;
	cout<<"\t\t                 1.n^3+5n-1                                            "<<endl;
	cout<<"\t\t                 2.(3x+2y)/2z                                          "<<endl;
	cout<<"\t\t                 3.(2a-(b/vc) /(c+(1/b))*(b/4)                         "<<endl;
	cout<<"\t\t                 4.(a*b)/(vc)/c-(1/b) -2c/a                            "<<endl;
    cout<<"\t\t�����������������������������������������������������������������������"<<endl;
    cout<<"\t\t       ingrese en numero de su opcion      "<<endl;
    cin>>opcion; 
    switch(opcion){
    case 1: cout<<"\t\t            ingrese la variable n              "<<endl;
	        cin>>n;
	        resultado=pow(n,3)+5*n-1;
			cout<<" el      resultado  es  :"<<resultado<<endl;
			system("pause"); 
			break; 
	case 2: cout<<"\t\t            ingrese las variables del poceso               "<<endl;
	        cout<<"\t\t                escriba  el valor de x :                   "<<endl;
	        cin>>x;
	        cout<<"\t\t                escriba  el valor de y :                   "<<endl;
	        cin>>y;
	        cout<<"\t\t                escriba  el valor de z :                   "<<endl;
	        cin>>z;
	        resultado=(3*x+2*y)/(2*z);
			cout<<" el      resultado1  es  :"<<resultado<<endl;
			system("pause"); 
			break;
	case 3: cout<<"\t\t            ingrese las variables del poceso               "<<endl;
	        cout<<"\t\t                escriba  el valor de a :                   "<<endl;
	        cin>>a;
	        cout<<"\t\t                escriba  el valor de b :                   "<<endl;
	        cin>>b;
	        cout<<"\t\t                escriba  el valor de c :                   "<<endl;
	        cin>>c;
	        resultado=((2*a-(b/sqrt(c)))/(c+(1/b)))*(b/4);
	        cout<<" el      resultado  es  :"<<resultado<<endl;
	        system("pause"); 
			break;
	case 4: cout<<"\t\t            ingrese las variables del poceso               "<<endl;
	        cout<<"\t\t                escriba  el valor de a :                   "<<endl;
	        cin>>a;
	        cout<<"\t\t                escriba  el valor de b :                   "<<endl;
	        cin>>b;
	        cout<<"\t\t                escriba  el valor de c :                   "<<endl;
	        cin>>c;
	        resultado=((a*b)/(sqrt(c))/(c-(1/b)))-((2*c)/a);
	        cout<<" el      resultado  es  :"<<resultado<<endl;
			system("pause"); 
			break;
	        
	        
	default :cout<<"\t\t    no exite ese comando   "<<endl;
			}		
			
cout<<" calcular otra area  s/n ? ";
cin>>respuesta;

}while(respuesta == 's');	

system("pause"); 
return 0;
}
