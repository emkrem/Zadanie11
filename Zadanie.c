/* 
 * File:   main.c
 * Author: Ema
 *
 * Created on Nede¾a, 2016, augusta 7, 18:03
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    int sucin;
    int a[3];
    int min = 100000;
    int max = 0;
    
    for (i = 0; i<3; i++){
        printf ("zadaj cislo: ",i);
        scanf ("%d",&a[i]);   
    }
    
    for (i = 0; i<3; i++){    
        if (a[i] > max){
            max = a[i];
        }
    }
    
    for (i = 0; i<3; i++){    
        if (a[i] < min){
            min = a[i];
        }
    }
    
    printf("min: %d\n", min);
    printf("max: %d\n", max);
    
    sucin = min * max;
    printf ("sucin cisel %d", sucin);
    
    return 0;
}