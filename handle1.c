#include<stdio.h>
#include<signal.h>
#include <unistd.h>
#include <stdlib.h>

void handler(int num){
        write(STDOUT_FILENO,"I won't die!\n",13);
}

int main(){
        signal(SIGINT,handler);

        while(1){
                printf("Wasting your cycles:%d\n",getpid());
                sleep(1);
        }
}
