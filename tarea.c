#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) {
    int i,LR,h;
    /*Mano derecha*/
    int materiales[3]={3,24,32};
    char item1[50]="Espada";
    char item2[50]="Papas";
    char item3[50]="Hierro";
    int *p;int *p1;int *p2;int *p3;
    /*Mano izquierda*/
    int objetos[3]={22,13,5};
    char nombre[10]="BarasBlaze";
    char nombre1[10]="OjodeEnder";
    char nombre2[12]="PicoDiamante";
    char opcion;
    int op;
    /*Espacios vacios en el inventario*/
    int vacio[3];
    char a[10];
    char b[10];
    char c[10];
    char Basura[3][50];
    do {
        printf("\n----------------\n");
    printf("\n-[E]-Ver Inventario\n");
    printf("\n-[I]-Ingreso Productos\n");
    printf("\n-[F]-Modificacion Producto\n");
    printf("\n-[Q]-TIRAR\n");
    printf("\n-[S]-Salir");
    printf("\n----------------\n");
    printf("\n Ingrese su numero: \n");
    scanf("%c",&opcion);
    
    switch (opcion)
    {
    case 'e':
    case 'E':
            printf("\n La mano izquierda[1] o derecha?[2] :\n");
            scanf("%d",&op);
            switch (op)
            {
            case 1:
            printf("Rigth Hand : \n");
        p=&materiales[0]; 
        p1=&materiales[1]; 
        p2=&materiales[2];    
            printf("  \n ______________________\n");
            printf("   |  %d  |  %d  |  %d  |  \n",*p,*p1,*p2);
            printf("  \n ----------------------\n");
            printf("  | %c  |  %c  |  %c  |   \n",item1[0],item2[0],item3[0]);
                break;
            case 2:
            printf("Left Hand : \n");
            p=&objetos[0];
            p1=&objetos[1];
            p2=&objetos[2];
            printf("   \n______________________\n");
            printf("   |  %d  |  %d  |  %d  |  \n",*p,*p1,*p2);
            printf("   \n----------------------\n");
            printf("  | %c  |  %c  |  %c  |   \n",nombre[0],nombre1[0],nombre2[0]);
                break;
            
            default :break;
            }
        break;
    case 'i':
    case 'I':
        printf("\nIngrese las cosas que quiere en su mochila: \n");
        for(int a=0;a<3;a++){
                scanf("%d",&vacio[a]);
        }
        printf("\n---Ahora ingrese los nombres: \n");
            gets(a);
            gets(b);
            gets(c);
    
        
            p=&vacio[0];  
            p1=&vacio[1];
            p2=&vacio[2];
            printf("Estos son los materiales\n");
            printf("   \n______________________\n");
            printf("   |  %d  |  %d  |  %d  |  \n",*p,*p1,*p2);
            printf("   \n----------------------\n");
            printf("  | %c  |  %c  |  %c  |   \n",a[0],b[0],c[0]);
        
        break;

    case 'f':    
    case 'F':
        printf("\n Que desea modificar? : \n");
        printf("\n---------------------\n");
        printf("\n[1]-Mano derecha \n");
        printf("\n[2]-Mano izquierda \n");
        scanf("%d",&h);
        switch (h)
        {
        case 1:
            printf("\nSe modificara Los objetos de mano derecho\n");
            for (int i = 0; i < 3; i++)
            {
                scanf("%d",&materiales[i]);
            }
            printf("\nEl nombre los items: \n");
            gets(item1);
            gets(item2);
            gets(item3);
            if(h==1){
                p=&materiales[0]; 
                p1=&materiales[1]; 
                p2=&materiales[2];    
                printf("\nEste es su nuevo materiales: \n");
            printf("  \n ______________________\n");
            printf("   |  %d  |  %d  |  %d  |  \n",*p,*p1,*p2);
            printf("  \n ----------------------\n");
            printf("  | %c  |  %c  |  %c  |   \n",item1[0],item2[0],item3[0]);
            h++;
            }
            break;
        case 2:
            printf("\nSe modificara los obejtos de la mano izquierda\n");
            for (size_t i = 0; i < 3; i++)
            {
                scanf("%d",&objetos[i]);
            }
            printf("\nEl nombre los items: \n");
            gets(nombre);
            gets(nombre1);
            gets(nombre2);
            if(h==2){
                p=&objetos[0]; 
                p1=&objetos[1]; 
                p2=&objetos[2];    
                printf("\nEste es su nuevo Objetos : \n");
            printf("  \n ______________________\n");
            printf("   |  %d  |  %d  |  %d  |  \n",*p,*p1,*p2);
            printf("  \n ----------------------\n");
            printf("  | %c  |  %c  |  %c  |   \n",nombre[0],nombre1[0],nombre2[0]);
            h++;
            }
            break;
        default:
            break;
        }
        break;

    case 'q':
    case 'Q':
    printf("\nIngresa cual quieres eliminar L[1] R[2] && M[3]\n");
    scanf("%d",&LR);
    switch (LR)
    {
    case 1:
    p=&objetos[0];p1=&objetos[1];p2=&objetos[2];
    *p=0;*p1=0;*p2=0;
    if(*p==0 || *p1 ==0||*p2==0){
        printf("Se elimino el numero de elementos de la mano izquierda");
    }
    printf("\n Mano izquierda eliminado \n");
        break;
    case 2:
    p=&materiales[0];p1=&materiales[1];p2=&materiales[2];
    *p=0;*p1=0;*p2=0;
    if(*p==0 || *p1 ==0||*p2==0){
       printf("Hay 0 Elementos en nuestra mano derecha \n");
    }
    printf("\n Mano derecha eliminado \n");
        
        break;
    case 3:
     p=&vacio[0];p1=&vacio[1];p2=&vacio[2];
     *p=0;*p1=0;*p2=0;
    if(*p==0 || *p1 ==0||*p2==0){
       printf("Hay 0 Elementos en nuestro espacio nuevo \n");
    }
    printf("\n Nuecvo elemento eliminado \n");
        break;
    }
    break;

    }
    } while(opcion =! 's' || 'S' ); 
    return 0;
}
/*Conclusion Este programa le falta el poder ser mad dinamico ala hora de manipular elementos en el inventario*/
/*como otra parte seria la capacidad de crear tantos espacios se desee con un limite de datos.*/
/*podria ayudar en un inventario de una tienda */