#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(void){

    int i=0, sec=0, min=0, hr=0;

    while (i<10){

        printf("\n\t %dh:%dm:%ds", hr, min, sec);
        Sleep(1000);
        system("cls");
        sec++;

        if(sec==60){
            sec=0;
            min++;
        }

        if(min==60){
            min=0;
            hr++;
        }

        if(hr==24){
            hr=0;
        }

    }

return 0;
}
