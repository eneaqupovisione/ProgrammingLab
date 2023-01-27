#include <stdio.h>
#include <math.h>
#include <stdlib.h>



float gravity_idx(float prezzo,int direzione){
    float gamma;
    float indice;
    float x=prezzo;
    float y=log(x);
    float z=pow(y,1.1);
    gamma=(x/y)*(y/z);
    if(direzione==1){
        indice=-0.4*(gamma)+11;}
    else{
        indice=0.4*(gamma);
    }
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
  

  printf("la gravità è pari a %.2f.",(gravity_idx(prezzo,direzione)));
 
    printf("\nIl tuo ordine ");
    if(direzione==1){
        printf("Long");
    }
    else{
        printf("Short");
    }
    printf(" ha un punteggio di %.2f su 10!\n",(gravity_idx(prezzo,direzione)));
    if(gravity_idx(prezzo,direzione)<=10 &&         
    gravity_idx(prezzo,direzione)>=8.5){
        printf("Un posizionamento a dir poco perfetto! Se fai il serio stasera coca e mignotte.");}
    if(gravity_idx(prezzo,direzione)<8.5 &&         
    gravity_idx(prezzo,direzione)>=6){
        printf("Un posizionamento niente male! Non perdere l'opportunità di fare un bel colpo.");}
    
    if(gravity_idx(prezzo,direzione)<6 &&         
    gravity_idx(prezzo,direzione)>=5){
        printf("Un posizionamento discreto! Sarebbe bene avere un'esposizione discreta.");}
    
    if(gravity_idx(prezzo,direzione)<5 &&         
    gravity_idx(prezzo,direzione)>=4){
        printf("Un posizionamento critico... Presta attenzione al volume della tua operazione.");}
    
    if(gravity_idx(prezzo,direzione)<4 &&         
    gravity_idx(prezzo,direzione)>=3){
        printf("Un posizionamento pessimo... Ti invito a riflettere su ciò che stai per fare.");}
    
    if(gravity_idx(prezzo,direzione)<3 &&         
    gravity_idx(prezzo,direzione)>=1){
        printf("Bro... A questo punto un ebreo direbbe 'mazeltov'... io dico che o sei un coglione o sei un genio...");}
    }
  return 0;
}