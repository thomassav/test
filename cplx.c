/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cplx.c
 * Author: tom_ad
 * 
 * Created on 21 janvier 2018, 18:13
 */

#include "cplx.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

complexe creer_complexe(double reel, double imag){
    complexe nombre;
    nombre.imag = imag;
    nombre.reel = reel;
    
    return nombre;
}

void afficher_complexe(complexe nombre){
    if(nombre.imag == 0){
        printf("%f", nombre.reel);
    }
    else if(nombre.reel == 0){
        printf("%f",nombre.imag);
    }
    else if(nombre.imag > 0){
        printf("%f + %fi", nombre.reel, nombre.imag);
    }
    else {
        printf("%f - %fi", nombre.reel, nombre.imag);
    }
}

int saisir_entier(void){
    int a;
    scanf("%d",a);
    return a;
}
char saisir_caractere(void){
    char a;
    scanf("%c",&a);
    return a;
}
char* saisir_chaine(void){
    char *saisie, *chaine;
    saisie = (char*)malloc(sizeof(char)*32);
    scanf("%s",saisie);
    
    printf("strlen de saisie : %d", strlen(saisie));
    
    chaine= (char*)malloc(sizeof(char) * (strlen(saisie)+1));
    strcpy(chaine,saisie);
    printf("Taille de saisie: %d", sizeof(saisie));
    printf("Taille de chaine: %d", sizeof(chaine));
    return chaine;
}
void afficher_chaine(char *a){
    printf("%s",a);
}
void afficher_chaine_masquee(char* chaine, char* trouves){
    int taille = strlen(chaine),i;
    for(i=0;i<taille;i++){
        if(strchr(trouves, chaine[i])== NULL){
            printf("_");
        }
        else{
            printf("%c",chaine[i]);
        }
    }
}
char caractere_dans_chaine(const char *chaine, const char caractere){
    if (strchr(chaine, caractere) == NULL){
        return 0;
    }
    return 1;
}



