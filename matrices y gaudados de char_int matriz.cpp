#include<stdio.h>
#include<math.h>
#include<string.h>
///&
/*Clase de tutorias de el 02/06/2023 le revisare en la casa ya que se me hizo comodo llevar la computadora ,mejor trabajare en soluciones y las subire en linea para su rapido acceso*/

int main(){
	int numeros[3][3]= {{1,2,3},{4,5,6}}; ///ya con valores agregados de las matrices tipo 3x3
	
	 ///{{1,5,6},{54,4,6}} En este caso es dle ejemplo en la tutoria como un conjunto 
    	 
    int respuestas[3];
    for(int i=0;i<2;i++ ){
    	for(int j=0;j<3;j++){
    		respuestas[i]=numeros[0][i]+numeros[1][i];	
		}
	}


	for(int i=0;i<3;i++){ //// para la lectura de los numeros 
	  for (int j=0;j<3;i++){
	  	printf("Ingrese el numero en la poscision %d %d ",i,j);
	  	scanf("%d",&numeros[i][j]);
	  }
	}
	
    for(int i=0;i<3;i++){ ///para mostrar los valores sumados  imprimirlos en la pantalla
	  for (int j=0;j<3;i++){
	  	printf("la posicon del elemneot  %d %d : %d",i,j,numeros[i][j]);
	  	scanf("%d",&numeros[i][j]);
	  }
	}
	return 0;
}
{{1,2,3},{4,5,6}};