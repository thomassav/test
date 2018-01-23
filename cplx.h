/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cplx.h
 * Author: tom_ad
 *
 * Created on 21 janvier 2018, 18:13
 */

#ifndef CPLX_H
#define CPLX_H

typedef struct _complexe{
        double reel;
        double imag;
    } complexe;
    
    complexe creer_complexe(double reel, double imag);
    void afficher_complexe(complexe nombre);
    
    /* part4 */
    int saisir_entier(void);
    char saisir_caractere(void);
    char* saisir_chaine(void);
    void afficher_chaine(char *a);
    void afficher_chaine_masquee(char* chaine, char* trouves);
    char caractere_dans_chaine(const char *chaine, const char caractere);
    
#endif /* CPLX_H */
