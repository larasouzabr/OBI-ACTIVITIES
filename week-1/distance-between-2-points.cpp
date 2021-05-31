#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main (){
float x1,y1,x2,y2;
cin >>x1>>y1;
cin>> x2>>y2;

float calculo_1 = pow (x2-x1,2) + pow (y2-y1,2);
float distancia = sqrt(calculo_1);
	cout<<fixed<<setprecision(4)<<"" <<distancia<<endl;

	return 0;
}
