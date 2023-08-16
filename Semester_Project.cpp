#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double num1,num2;
	cout<<"Enter two numbers:";
	cin>>num1>>num2;
	
	cout<<"Results:\n";
	cout<<"Addition:"<<num1+num2<<endl;
	cout<<"Subtraction:"<<num1-num2<<endl;
	cout<<"Multiplication:"<<num1*num2<<endl;
	cout<<"Division:"<<num1/num2<<endl;
	cout<<"Exponentiation:"<<pow(num1,num2)<<endl;
	cout<<"Square root of"<<num1<<":"<<sqrt(num1)<<endl;
	cout<<"Sine of"<<num1<<"(in radians):"<<sin(num1)<<endl;
	cout<<"Cosine of"<<num1<<"(in radians):"<<cos(num1)<<endl;
	cout<<"Tangent of"<<num1<<"(in radians):"<<tan(num1)<<endl;
	
	
	return 0;
}
