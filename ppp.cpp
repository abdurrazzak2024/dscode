#include<iostream>
#include<iomanip>
using namespace std;
double tangle(double a,double c){
   return 0.5*a*c;


}
double circle(double c){
    return 3.14159*c*c;

}
double trapez(double a,double b,double c){
    return 0.5*c*(a+b);


}
double sqr(double b){
   return b*b;

}
double rec(double a,double b){
  return a*b;

}
int main(){
    double A,B,C;
    cin>>A>>B>>C;
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<tangle(A,C)<<endl<<"CIRCULO: "<<fixed<<setprecision(5)<<circle(C)<<endl<<"TRAPEZIO: "<<trapez(A,B,C)<<endl<<"QUADRADO: "<<sqr(B)<<endl<<"RECTANGULO: "<<rec(A,B)<<endl;
    return 0;
}
