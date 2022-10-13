#include <stdio.h>

int main(){
    FILE *lsOutput;
    FILE *tomayInput;
    char readBuffer[80];
    lsOutput = popen("ls *.c","r");
    tomayInput = popen("./tomay", "w");
    int cont =0;

    while(fgets(readBuffer, 80, lsOutput)){
        fputs(readBuffer, tomayInput);
        ++cont;
    }

    pclose(lsOutput);
    pclose(tomayInput);   
    // displays output
    printf("Número de archivos: %d", cont);  
    printf(" \n");
}