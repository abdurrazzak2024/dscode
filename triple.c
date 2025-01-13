#include<stdio.h>
double tangle(double A,double C){
   double ar = 0.5*A*C;
   return ar;

}
double circle(double C){
    double cir = 3.14159*C*C;
    return cir;
}
double trapez(double A,double B,double C){
    double tra = 0.5*C*(A+B);
    return tra;

}
double sqr(double B){
   double sr = B*B;
   return sr;
}
double rec(double A,double B){
  double re = A*B;
  return re;
}
int main(){
    double A,B,C;
    scanf("%lf","lf","lf",&A,&B,&C);
    printf("TRIANGULA: 0.3%lf\n",tangle(A,B));
    printf("CIRCULO: 0.3%lf\n",circle(C));
    printf("TRAPEZIO: 0.3%lf\n",trapez(A,B,C));
    printf("QUADRADO: 0.3%lf\n",sqr(B));
    printf("RECTANGULO: 0.3%lf\n",rec(A,B));
    return 0;
}

