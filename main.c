#include <stdio.h>
#include <math.h>
#include <stdlib.h>



float gravity_idx(float prezzo,int direzione){
    float gamma;
    float indice;
    float x=prezzo;

        if (prezzo>2 && prezzo<=45){
            gamma=0.1*x +61.5;}
        if (prezzo>45 && prezzo<=66){
            gamma=0.28*x +53.4;}
        if (prezzo>66 && prezzo<=70){
            gamma=0.41*x +44.17;}
        if (prezzo>70 && prezzo<=78.5){
            gamma=1.55*x -45.61;}
        if (prezzo>78.5 && prezzo<=83){
            gamma=0.90*x +8.04;}
        if (prezzo>88.5 && prezzo<=95){
            gamma=0.79*x +17.9;}
        if (prezzo>95 && prezzo<=120){
            gamma=0.280*x +66.4;}
        if (prezzo>120 && prezzo<=150){
            gamma=0.09*x+88.30;}
    indice=gamma;

    return indice;
    }




int main(void) {
    float prezzo;
    int direzione;
printf("Questo indice misura la 'gravità', \novvero la pericolosità del posizionamento di un operazione sul Petrolio WTI.\n");
printf("In che modo?\nValuta il prezzo del posizionamento in base ai prezzi passati (minimi,massimi e intermedi).\n(...più è alto il prezzo meno conveniente sarà comprare...)\nDetto ciò... metti alla prova il tuo posizionamento (prezzo compreso tra 2 e 150)");
printf("\nInserire un prezzo:\n");
  scanf("%f",&prezzo);
if(prezzo<2 || prezzo>150){
      printf("Non esagerare...il petrolio è lontano da quel prezzo...\n(sai leggere le istruzioni?!)");
    return 0;
  }
  else{

printf("Sei in Long o in Short?\n");
printf("('+1' se sei in Long o '-1' se sei in Short)");
printf("\ninserisci qui la risposta:");    
  scanf("%d",&direzione);


  printf("la gravità è pari a %.2f.\nIl range è [61.5,103].\n ",(gravity_idx(prezzo,direzione)));

    // printf("\nIl tuo ordine ");
    if(direzione==1){
         if(gravity_idx(prezzo,direzione)<=103 &&         
    gravity_idx(prezzo,direzione)>=88.5){
        printf("\nUn posizionamento pessimo... Ti invito a riflettere su ciò che stai per fare.");}
       
    if(gravity_idx(prezzo,direzione)<88.5 &&         
    gravity_idx(prezzo,direzione)>=83){
        printf("\nUn posizionamento critico... Presta attenzione al volume della tua operazione.");}

    if(gravity_idx(prezzo,direzione)<83 &&         
    gravity_idx(prezzo,direzione)>=78.5){
         printf("\nUn posizionamento niente male!");}
        

    if(gravity_idx(prezzo,direzione)<78.5 &&         
    gravity_idx(prezzo,direzione)>=73){
         printf("\nUn posizionamento discreto...");} 
       

    if(gravity_idx(prezzo,direzione)<73 &&         
    gravity_idx(prezzo,direzione)>=61.5){
         printf("\nUn posizionamento a dir poco perfetto!");}
        
    }
    //     printf("Long");
    //     printf(" ha un punteggio di %.2f su 100!\n",(100-gravity_idx(prezzo,direzione)));
    // }
    else{
    //     printf("Short");
    // printf(" ha un punteggio di %.2f su 100!\n",(gravity_idx(prezzo,direzione)));}
      
    if(gravity_idx(prezzo,direzione)<=103 &&         
    gravity_idx(prezzo,direzione)>=88.5){
        printf("\nUn posizionamento a dir poco perfetto!");}
    if(gravity_idx(prezzo,direzione)<88.5 &&         
    gravity_idx(prezzo,direzione)>=78.5){
        printf("\nUn posizionamento niente male!");}

    if(gravity_idx(prezzo,direzione)<78.5 &&         
    gravity_idx(prezzo,direzione)>=73){
        printf("\nUn posizionamento discreto...");}

    if(gravity_idx(prezzo,direzione)<73 &&         
    gravity_idx(prezzo,direzione)>=66){
        printf("\nUn posizionamento critico... Presta attenzione al volume della tua operazione.");}

    if(gravity_idx(prezzo,direzione)<66 &&         
    gravity_idx(prezzo,direzione)>=61.5){
        printf("\nUn posizionamento pessimo... Ti invito a riflettere su ciò che stai per fare.");}
    }
printf("\n\nUna gravità alta è dannosa per gli ordini di acquisto ed è benefica per gli ordini di vendita.");

printf("\N(RICORDATI CHE QUESTO E' SOLAMENTE UN PROGRAMMA, 'RIGIDO' OLTRETUTTO! SFRUTTALO PER VALUTARE 'MATEMATICAMENTE' IL TUO ORDINE MA TRAI SEMPRE LE TUE CONCLUSIONI PER INTUITO E RAGIONAMENTO!)");
  return 0;
}}