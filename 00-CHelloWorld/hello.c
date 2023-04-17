#include<stdio.h>

int main(int argc, char*argv[] ){

    
    FILE* archivo=fopen("Output.txt","w");
    
    printf("Hola Mundo");
    fprintf(archivo,"Hola Mundo");
    return 0;
}