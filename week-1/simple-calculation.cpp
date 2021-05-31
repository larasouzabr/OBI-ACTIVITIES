#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int pc1,n1,pc2,n2;
float val1,val2;
cin>>pc1>>n1>>val1;
cin>>pc2>>n2>>val2;
float valor = n1*val1 + n2*val2;
cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ " << valor<<endl;
return 0;
}
