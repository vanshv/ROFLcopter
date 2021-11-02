#include<stdio.h>
#include<unistd.h>

int main(){
    bool flip = 1;
    while(1){
        if(flip){
        printf(" ROFL:ROFL:        \n                        _^___\n                     __/   [] \\ \n               LOL===__        \\ \n                       \\________]\n                        I   I\n                       --------/\n               ");
        flip = 0;
        }
        else{
        printf("          :ROFL:ROFL\n                        _^___\n                L    __/   [] \\ \n                O ===__        \\ \n                L      \\________]\n                        I   I\n                       --------/\n               ");
        flip = 1;
        }
        for(int i = 0; i<20; i++){
            printf("\n               ");
        }
        usleep(300000);
    }

    return 0;
}


