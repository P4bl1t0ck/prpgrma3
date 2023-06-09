#include<stdio.h>
#include<math.h>
#include "funciones.h"


float ingreseComponente(char componente,int i)
{
  float componente;
  printF("Ingrese sus puntos ") ;
  scanf("%f",&componente);
  return componente;
}

float calcularDistancias(float x1, float y1, float z1, float x2, float y2, float z2){
  float distancia=sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));

return distancia;
}

 float calcularPerimetro(float puntos[4][3])
 {
    float l1=calcularDistancias(puntos[1][0],puntos[1][1],puntos[1][2],puntos[2][0],puntos[2][1],puntos[2][2]);

    float l2=calcularDistancias(puntos[1][0],puntos[1][1],puntos[1][2],puntos[0][0],puntos[0][1],puntos[0][2]);

    float l3=calcularDistancias(puntos[0][0],puntos[0][1],puntos[0][2],puntos[2][0],puntos[2][1],puntos[2][2]);
///////////////////////////////////////////////////3 primeros lados
    float l4=calcularDistancias(puntos[2][0],puntos[2][1],puntos[2][2],puntos[3][0],puntos[3][1],puntos[3][2]);

    float l5=calcularDistancias(puntos[1][0],puntos[1][1],puntos[1][2],puntos[3][0],puntos[3][1],puntos[3][2]);

    float l6=calcularDistancias(puntos[0][0],puntos[1][1],puntos[1][2],puntos[3][0],puntos[3][1],puntos[3][2]);

    float perimetro=l1+l2+l3+l4+l5+l6;
    return perimetro;
 }

 float calcularAreaSuperficial(float puntos[4][3],float perimetro)
 {
    float areabase=calcularArea(puntos[0][0],puntos[0][1],puntos[0][2],puntos[1][0],puntos[1][1],puntos[1][2],puntos[2][0],puntos[2][1],puntos[2][2]);
    float areal1=calcularArea(puntos[2][0],puntos[2][1],puntos[2][2],puntos[1][0],puntos[1][1],puntos[1][2],puntos[3][0],puntos[3][1],puntos[3][2]);
    float areal2=calcularArea(puntos[0][0],puntos[0][1],puntos[0][2],puntos[1][0],puntos[1][1],puntos[1][2],puntos[3][0],puntos[3][1],puntos[3][2]);
    float areal3=calcularArea(puntos[0][0],puntos[0][1],puntos[0][2],puntos[2][0],puntos[2][1],puntos[2][2],puntos[3][0],puntos[3][1],puntos[3][3]);

    float Areas=areabase+areal1+areal2+areal3;

    return Areas;
 }

 float calcularArea(float x1, float y1, float z1, float x2, float y2, float z2,float x3, float y3, float z3){

    float l1=calcularDistancias(x2,y2,z2,x3,y3,z3);
    float l2=calcularDistancias(x2,y2,z2,x1,y1,z1);
    float l3=calcularDistancias(x1,y1,z1,x3,y3,z3);
    float s=(l1+l2+l3)/2;
    float a=sqrt(s*(s-l1)*(s-l2)*(s-l3));
    return a;
    
 }

 float calcularVolumen(float puntos[4][3])
 {
        float bx=(puntos[0][0]+puntos[1][0]+puntos[2][0])/3;
        float by=(puntos[0][1]+puntos[1][2]+puntos[2][1])/3;
        float bz=(puntos[0][2]+puntos[2][3]+puntos[3][2])/3;
        
        float h=calcularDistancias(bx,by,bz,punto[3][0],puntos[3][1],puntos[3][2]);
         float areabase=calcularArea(puntos[0][0],puntos[0][1],puntos[0][2],puntos[1][0],puntos[1][1],puntos[1][2],puntos[2][0],puntos[2][1],puntos[2][2]);
        return (areabase*h/3);
        
 }