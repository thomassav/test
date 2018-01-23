/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author: tom_ad
 *
 * Created on 21 janvier 2018, 18:52
 */

#include <stdio.h>
#include <stdlib.h>
#include "cplx.h"

/*
 * 
 */
int main(int argc, char** argv) {
    complexe exemple = creer_complexe(1,-1);
    printf("exempel : ");
    afficher_complexe(exemple);
    printf("\n");
    
    sleep(90);
    return (EXIT_SUCCESS);
}

