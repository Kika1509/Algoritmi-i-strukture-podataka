//
//  main.c
//  selection sort
//
//  Created by Kristina Vučenik on 11/04/14.
//  Copyright (c) 2014 Kristina Vučenik. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void zamjena(int *niz1,int *niz2){
    int pom;
    pom= *niz1;
    *niz1= *niz2;
    *niz2= pom;
}

int main(){
    int niz[50],i,j;
    int duljina=0;
    printf("Upisite niz brojeva,za kraj upisite točku");
    for(i=0;i<50;i++){                  //učitavanje niza
        scanf("%d",&niz[i]);
        duljina++;
        if(niz[i]=='.') break;
    }
    printf("Nesortirani niz");
    for(i=0;i<=duljina;i++)
        printf("%d",niz[i]);
   // for(i=0;i<=duljina-2;i++)          //sortiranje niza
   //     for(j=i+1;j<=duljina-1;j++)
    //        if (niz[i]>niz[j])
      //      {
        //        int pom;
          //      pom= niz[i];
            //    niz[i] = niz[j];
              //  niz[j] = pom;
           // }
    
    for(i=0;i<=duljina-2;i++){
        min=i; k=duljina-2-i;  //k=max
        for(j=i+1;j<=duljina-1;j++){
            if (niz[j]>niz[k]) zamjena(&niz[j],&niz[k]);
            if (niz[j]<niz[min]) zamjena(&niz[j],&niz[min]);
        }}
    printf("sortirani niz");
    for(i=0;i<=duljina;i++)
        printf("%d",niz[i]);
    return 0;
    
}