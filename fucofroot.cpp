// NAME: NJWEI DIVINE ACHIRI
// FACULTY: SCIENCE
// DEPARTMENT: SOFTWAER ENGINEERING
// MAT NO: 50, 41, 55








#include <iostream>
#include<math.h>
using namespace std;
double FucOfRootOfEq(double a,double b,double c){
	double d,r1,r2,realpart,imarginarypart;
	d=b*b-4*a*c;
	cout<<"d="<<d;
	if(d>0){
		r1=(-b-sqrt(d))/(2*a);
		r2=(-b+sqrt(d))/(2*a);
		cout<<"\n root are\n"<<"r1="<<r1<<"\n and \n"<<"r2="<<r2;
		return r1 &&r2;
	}else if(d==0){
		r1=r2=-b/(2*a);
		cout<<"\n root are"<<"r1="<<r1;
		return r1;
	}else{
		realpart=-b/(2*a);
		imarginarypart=sqrt(-d)/(2*a);
		cout<<"\n root are\n"<<"\nr1="<<realpart-imarginarypart<<"\n r2="<<realpart+imarginarypart;
	}
} 


int main(int argc, char** argv) {
	double a,b,c;
	cout<<"enter three numbers:";
	cin>>a>>b>>c;
	cout<<FucOfRootOfEq(a,b,c);
	
	return 0;
}
