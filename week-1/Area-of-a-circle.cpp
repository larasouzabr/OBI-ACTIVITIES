#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	double R;
	double p = 3.14159;
	cin>>R;
	double Area = p*(R*R);
	
	cout <<fixed<<setprecision(4)<<"A=" << Area <<endl;
	return 1;
	
}
