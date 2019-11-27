#include "trabalho3.h"


/* Fun��o central do trabalho. */

double calculaDistancia (Imagem* bg, Imagem* img1, Imagem* img2){

  
    int i,j,k,l,m; //ITERAÇÕES
    int count = 0; //CONTADOR
    char vetor[9] = {0}; // VETOR PARA GUARDAR DADOS DA VIZNHANÇA
    char linear = 0; // VALOR DA MEDIANA // FIXX ME // FOI FEITO COM VALOR DA MEDIA
    double distancia = 0; // MÓDULO DAS DISTANCIAS 

    // VETOR PARA POSIÇÕES
    int posx[2] = {0}; //POSIÇÃO DO CARRO NO EIXO X
    int posy[2] = {0}; //POSIÇÃO DO CARRO NO EIXO Y

    int dif_x = 0; // POSX[1] - POSX[0]
    int dif_y = 0; // POSY[1] - POSY[0]


  
       //TRANSFORMAR EM FUNÇÃO
      // FILTRO DA MEDIANA // RUIDOS
      for(l=0; l<10;l++)
       for(i=1;i<(img1->altura-1);i = i + 2)
        for(j=1;j<(img1->largura-1);j = j + 2)
        {
           for(k=0; k<3; k++, count = 0)
           {
              // VIZINHANÇA 8
             vetor[0] = img1->dados[k][i][j]; 
             vetor[1] = img1->dados[k][i+1][j];
             vetor[2] = img1->dados[k][i][j+1];
             vetor[3] = img1->dados[k][i-1][j];
             vetor[4] = img1->dados[k][i][j-1];
             vetor[5] = img1->dados[k][i+1][j+1];
             vetor[6] = img1->dados[k][i-1][j-1];
             vetor[7] = img1->dados[k][i+1][j-1];
             vetor[8] = img1->dados[k][i-1][j+1];

               //TRANSFORMAR EM FUNÇÃO
              //ORDENA VETOR APLICA MEDIA
             //FIXX APLICA MEDIANA
             

             for(m=0;m<9;m++)
             {
                 count += (int)vetor[m];
                     
             }
             

             linear = count/9 ; //FAZ MEDIA //FIXX É MEDIANA
             
             //APLICAÇÃO DA MEDIANA
             img1->dados[k][i][j] = linear;
             img1->dados[k][i+1][j] = linear;
             img1->dados[k][i][j+1] = linear;
             img1->dados[k][i-1][j] = linear;
             img1->dados[k][i][j-1] = linear;
             img1->dados[k][i+1][j+1] = linear;
             img1->dados[k][i-1][j-1] = linear;
             img1->dados[k][i+1][j-1] = linear;
             img1->dados[k][i-1][j+1] = linear;                    
           }                       
        } 
      // IMAGEM BINÁRIA    
      //REMOVE O FUNDO    
      for(l=0; l<1;l++)
       for(i=1;i<(img1->altura-1);i = i + 2)
        for(j=1;j<(img1->largura-1);j = j + 2)
        {
           for(k=0; k<3; k++)
           {
             if(img1->dados[k][i][j] < 150)
             {
                linear = 255; //BRANCO
                img1->dados[k][i][j] = linear;
                img1->dados[k][i+1][j] = linear;
                img1->dados[k][i][j+1] = linear;
                img1->dados[k][i-1][j] = linear;
                img1->dados[k][i][j-1] = linear;
                img1->dados[k][i+1][j+1] = linear;
                img1->dados[k][i-1][j-1] = linear;
                img1->dados[k][i+1][j-1] = linear;
                img1->dados[k][i-1][j+1] = linear;
             }
             else{
               linear = 0; //PRETO
               img1->dados[k][i][j] = linear;
               img1->dados[k][i+1][j] = linear;
               img1->dados[k][i][j+1] = linear;
               img1->dados[k][i-1][j] = linear;
               img1->dados[k][i][j-1] = linear;
               img1->dados[k][i+1][j+1] = linear;
               img1->dados[k][i-1][j-1] = linear;
               img1->dados[k][i+1][j-1] = linear;
               img1->dados[k][i-1][j+1] = linear;
             }                          
           }                                   
        } 

          //FINALIZA PRIMEIRA IMAGEM
         //TODAS CORREÇÕES ACIMA DEVEM SER APLICADAS AQUI EM BAIXO
        //APLICA MEDIANA
      for(l=0; l<10;l++)
       for(i=1;i<(img2->altura-1);i = i + 2)
        for(j=1;j<(img2->largura-1);j = j + 2)
        {
           for(k=0; k<3; k++)
           {
             vetor[0] = img2->dados[k][i][j]; 
             vetor[1] = img2->dados[k][i+1][j];
             vetor[2] = img2->dados[k][i][j+1];
             vetor[3] = img2->dados[k][i-1][j];
             vetor[4] = img2->dados[k][i][j-1];
             vetor[5] = img2->dados[k][i+1][j+1];
             vetor[6] = img2->dados[k][i-1][j-1];
             vetor[7] = img2->dados[k][i+1][j-1];
             vetor[8] = img2->dados[k][i-1][j+1];

             //ORDENA VETOR APLICA MEDIANA 
             count = (int)vetor[0]+(int)vetor[1] + (int)vetor[2] + (int)vetor[3] + (int)vetor[4]+ (int)vetor[5]+ (int)vetor[6]+ (int)vetor[7]+ (int)vetor[8];
             linear = count/9 ; //FAZ MEDIA

             img2->dados[k][i][j] = linear;
             img2->dados[k][i+1][j] = linear;
             img2->dados[k][i][j+1] = linear;
             img2->dados[k][i-1][j] = linear;
             img2->dados[k][i][j-1] = linear;
             img2->dados[k][i+1][j+1] = linear;
             img2->dados[k][i-1][j-1] = linear;
             img2->dados[k][i+1][j-1] = linear;
             img2->dados[k][i-1][j+1] = linear;                         
           }                       
        }   


      //TRANSFORMAR EM FUNÇÃO              
      for(int l=0; l<1;l++)
       for(i=1;i<(img2->altura-1);i = i + 2)
        for(j=1;j<(img2->largura-1);j = j + 2)
        {
           for(k=0; k<3; k++)
           {

             if(img2->dados[k][i][j] < 150)
             {
                linear = 255; // BRANCO

                img2->dados[k][i][j] = linear;
                img2->dados[k][i+1][j] = linear;
                img2->dados[k][i][j+1] = linear;
                img2->dados[k][i-1][j] = linear;
                img2->dados[k][i][j-1] = linear;
                img2->dados[k][i+1][j+1] = linear;
                img2->dados[k][i-1][j-1] = linear;
                img2->dados[k][i+1][j-1] = linear;
                img2->dados[k][i-1][j+1] = linear;
             }
             else{
               linear = 0; // PRETO

               img2->dados[k][i][j] = linear;
               img2->dados[k][i+1][j] = linear;
               img2->dados[k][i][j+1] = linear;
               img2->dados[k][i-1][j] = linear;
               img2->dados[k][i][j-1] = linear;
               img2->dados[k][i+1][j+1] = linear;
               img2->dados[k][i-1][j-1] = linear;
               img2->dados[k][i+1][j-1] = linear;
               img2->dados[k][i-1][j+1] = linear;
             }
                           
           }  
          
                        
        } 
                
      //TRANSFORMA EM FUNÇÃO            
     //BUSCA ULTIMO PONTO NÃO BRANCO DA IMAGEM 1 
    //NO CASO É O ELEMENTO QUE VAI SER DESLOCADO
   // ERRO:  EM ALGUNS CASOS O ELEMENTO É APAGADO POR CAUSA DA FILTRO MEDIA + BINERIALIZAÇÃO 

    for(i=1;i<img1->altura-1;i= i+2)
      for(j=1;j<img1->largura-1;j= j+2)
      {
          for(k=0;k<3;k++){
            if(img1->dados[k][i][j]==0){
               posx[0] = i;
               posy[0] = j;         
            }
          }
      }
      
      //TRANSFORMA EM FUNÇÃO            
     //BUSCA ULTIMO PONTO NÃO BRANCO DA IMAGEM 1 
    //NO CASO É O ELEMENTO QUE VAI SER DESLOCADO
   // ERRO:  EM ALGUNS CASOS O ELEMENTO É APAGADO POR CAUSA DA FILTRO MEDIA + BINERIALIZAÇÃO 
      for(i=1;i<img2->altura-1;i= i+2)
       for(j=1;j<img2->largura-1;j= j+2)
        {
          for(k=0;k<3;k++){
            if(img2->dados[k][i][j]==0){
              posx[1] = i;
              posy[1] = j;         
            }
          }    
      }
    

     // MODÚLO DO DESLOCAMENTO 
    // TRANSFORMAR EM FUNÇÃO
    dif_x = posx[1] - posx[0];
    dif_y = posy[1] - posy[0];

    dif_x = pow(dif_x,2) ;
    dif_y = pow(dif_y,2) ;

    //DEBUG
    printf("%d %d \n",posx[0],posy[0]);
    printf("%d %d \n",posx[1],posy[1]);

    distancia = sqrt( (dif_x+dif_y)   );   

    printf("%d %d %lf \n",dif_x,dif_y,distancia); 


 return distancia;


}






