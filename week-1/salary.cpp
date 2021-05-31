#include <iostream>
 #include <iomanip>
using namespace std;
 
int main() {
 int num,horas;
 double salario_por_hora;
 cin>> num;
 cin>> horas;
 cin>> salario_por_hora;
double salario = horas * salario_por_hora;
cout<<"NUMBER = "  << num<< endl;
 cout <<fixed<<setprecision(2)<< "SALARY = U$ " << salario<<endl;
    return 0;
}
