#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	double A,B,C;
	cin>>A; 
	cin>> B;
	cin>> C;
	double pi = 3.14159; 
	double AreaTri = (A*C)/2 ;
	double AreaCir = pi * (C*C);
	double AreaTra = ((A+B)*C)/2;
	double AreaQua = B *B;
	double AreaRet = A*B;
	cout<<fixed<<setprecision(3)<< "TRIANGULO: "<< AreaTri<<endl;
	cout<<fixed<<setprecision(3)<< "CIRCULO: "<< AreaCir<<endl;
	cout<<fixed<<setprecision(3)<< "TRAPEZIO: "<< AreaTra<<endl;
	cout<<fixed<<setprecision(3)<< "QUADRADO: "<< AreaQua<<endl;
	cout<<fixed<<setprecision(3)<< "RETANGULO: "<< AreaRet<<endl;
	return 0;
}
