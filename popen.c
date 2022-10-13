#include <stdio.h>

int main(){
    FILE *lsOutput;
    FILE *tomayInput;
    lsOutput = popen("ls *.c","r");
    tomayInput = popen("./tomay", "w");
    int cont = 0;
    int BUFFER_SIZE=80;
    char buffer [BUFFER_SIZE];

    while(fgets(buffer, BUFFER_SIZE, lsOutput)){
        for(int i = 0; i<BUFFER_SIZE;++i){
            if (buffer[i] == '\0'){
                break;
            }
            if (buffer[i] == '\n'){
                ++cont;
            }
        }
        fputs(buffer, tomayInput);
    }

    pclose(lsOutput);
    pclose(tomayInput);   
    // displays output
    printf("Número de archivos: %d", cont);  
}