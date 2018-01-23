/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tom_ad
 *
 * Created on 21 janvier 2018, 02:08
 */

#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include "cplx.h"

short diff(int a, int b){
    return a - b;
}

char *saisir_chain(void){
    char *saisie, *chaine;
    saisie = (char *) malloc(sizeof(char)*32);
    scanf("%s",saisie);
    
    printf("strlen de saisie : %d", (int)strlen(saisie));
    
    chaine = (char *) malloc(sizeof(char) * (strlen(saisie) +1));
    strcpy(chaine, saisie);
    
    printf("Taille de saisie : %d",sizeof(saisie));
    printf("Taille de chaine : %d",sizeof(chaine));
    
    return chaine;
}

void afficher_chaine(char* a){
    printf("%s",a);
}
void afficher_chaine_masquee(char *chaine, char *trouves){
    int taille = strlen(chaine), i;
    for(i=0; i<taille ; i++){
        if(strchr(trouves, chaine[i]) == NULL){
            printf("_");
        }
        else {
            printf("%c", chaine[i]);
        }
    }
}
char caractere_dans_chaine(const char* chaine, const char caractere){
    if(strchr(chaine, caractere) == NULL){
        return 0;
    }
    return 1;
}



/*
 * 
 */
int main(int argc, char* argv[]) {
    int i = 40;
    i += diff(10.0, 8);
    
    int * valeur;
    valeur = (int *) malloc(sizeof(int) * 10);
    
    
    printf("resultat: %d",i);
    
    free(valeur);
    
    complexe exemple = creer_complexe(1,-1);
    printf("exempel : ");
    afficher_complexe(exemple);
    printf("\n");
    
    return 0;
}

