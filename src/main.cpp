#include<iostream>
#include<unistd.h>

int main(){
    bool flip = 1;

    bool exitGame = 0;

    while(1){

        if(exitGame)
            return 0;
        

        for(int i = 0; i<14; i++){
            printf("\n               ");
        }
        if(flip){
        printf(" ROFL:ROFL:        \n                        _^___\n                     __/   [] \\ \n               LOL===__        \\ \n                       \\________]\n                        I   I\n                       --------/\n               ");
        flip = 0;
        }
        else{
        printf("          :ROFL:ROFL\n                        _^___\n                L    __/   [] \\ \n                O ===__        \\ \n                L      \\________]\n                        I   I\n                       --------/\n               ");
        flip = 1;
        }

        usleep(300000);
        
        system("clear");        

    }

    return 0;
}


