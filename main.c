#include <stdio.h>

  int main(void){
    
  int ano,mes,mesA,dia,anoR,resto,data,seculo,total;

  // Requisita as entradas pelo usuário
  printf("Digite um dia entre 1 e 31: ");
  scanf("%d",&dia);
  printf("Digite um mes entre 1 e 12: ");
  scanf("%d",&mes);
  printf("Digite um ano entre 1800 e 2199: ");
  scanf("%d",&ano);

  //Valida as entradas
  if((dia<=0 || dia>31) || (mes<1 || mes>12) || (ano<1800 || ano>2199)){
     printf("Data invalida");
    } else{
  resto=ano%100; //Atribui os dois últimos dígitos do ano 
  anoR=resto/4; //Atribuio o resto da divisão

  //Atribui o numero-chave do seculo
  switch(ano){
  case 1800 ... 1899:
    seculo=2;
  break;
  case 1900 ... 1999:
    seculo=0;
  break;
  case 2000 ... 2099:
    seculo=6;
  break;
  case 2100 ... 2199:
    seculo=4;
  break;
  }
  
  //Atribui o numero chave ao mes
  if(mes==1){
    if((ano%4==0 && ano%100!=0) || ano%400==0){
      mesA=0;
      } else{
        mesA=1;
      }}
    
  if(mes==2){
    if((ano%4==0 && ano%100!=0) || ano%400==0){
      mesA=3;
      } else{
        mesA=4;
      }}
    
  if(mes==3 || mes==11){
    mesA=4;
    } else if(mes==4 || mes==7){
      mesA=0;
      } else if(mes==5){
        mesA=2;
        } else if(mes==6){
          mesA=5;
          } else if(mes==8){
            mesA=3;
            } else if(mes==9 || mes==12){
              mesA=6;
              } else if(mes==10){
                mesA=1;
                }
  
  //Operação para retornar o dia da semana com base nas entradas
  total=dia+mesA+anoR+seculo+resto;
  data=total%7;

  //Retorna o dia da semana
  switch(data){
    case 0:
    printf("%i/%i/%i - Sabado",dia,mes,ano);
    break;
    case 1:
     printf("%i/%i/%i - Domingo",dia,mes,ano); 
    break;
    case 2:
     printf("%i/%i/%i - 2ª Feira",dia,mes,ano);  
    break;
    case 3:
     printf("%i/%i/%i - 3ª Feira",dia,mes,ano);  
    break;
    case 4:
     printf("%i/%i/%i - 4ª Feira",dia,mes,ano);  
    break;
    case 5:
     printf("%i/%i/%i - 5ª Feira",dia,mes,ano);  
    break;
    case 6:
     printf("%i/%i/%i - 6ª Feira",dia,mes,ano);  
    break;
  }
}
}