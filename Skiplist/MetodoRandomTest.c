//        FUNZIONANTE solo con ciclo, senza da smpre 0.92xxxx


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_HEIGHT 5

int main(int argc, char *argv[]){
    srand((unsigned)time(NULL));
    
    float rando();
    int randomLevel();

    printf("%d\n", randomLevel());

}

float rando(){
    return ((float)rand()/(RAND_MAX));
}

int randomLevel(){
    int lvl=1;


    float x=0;                                                          /*assegnamento usato solo per vedere il valore del rando */
    while ((float)(x=rando()) < 0.5 && lvl < MAX_HEIGHT){
        printf("%f\n", x);
        lvl++;
    }


    return lvl;
}