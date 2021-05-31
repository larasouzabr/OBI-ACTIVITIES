#include <iostream>
#include <math.h>
using namespace std;
int main (){
int A,B,C;
cin >> A>>B>>C;
int MaiorAB = (A+B+abs(A-B))/2;
int maior = (MaiorAB + C + abs(MaiorAB-C)) / 2;
	cout<< maior <<" eh o maior" <<endl;
	
	return 0;
}
