#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main (){
    int pid = fork();

    if (pid == 0){
        printf("Soy el proceso hijo\n");
        execl("/workspace/Implementacion_IoT/hola.exe", "hola.exe", NULL);
        sleep(5);
        printf("nunca se va a llegar aquí porque se ejecuta el programa hola antes");
    } else
    {
        printf("Soy el proceso padre\n");
        wait(NULL);
    }
    return 0;
}