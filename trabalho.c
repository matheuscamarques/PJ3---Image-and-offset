#include "trabalho3.h"


/* Fun��o central do trabalho. */

double calculaDistancia (Imagem* bg, Imagem* img1, Imagem* img2){

    //
    int i,j,k;
    int count=0;
    char vetor[9]={0};
    char linear=0;
    double distancia;

    int posx[2]={0};
    int posy[2]={0};

      for(int l=0; l<25;l++)
       for(i=1;i<(img1->altura-1);i = i + 2)
        for(j=1;j<(img1->largura-1);j = j + 2)
        {
           for(k=0; k<3; k++)
           {

             vetor[0] = img1->dados[k][i][j]; 
             vetor[1] = img1->dados[k][i+1][j];
             vetor[2] = img1->dados[k][i][j+1];
             vetor[3] = img1->dados[k][i-1][j];
             vetor[4] = img1->dados[k][i][j-1];
             vetor[5] = img1->dados[k][i+1][j+1];
             vetor[6] = img1->dados[k][i-1][j-1];
             vetor[7] = img1->dados[k][i+1][j-1];
             vetor[8] = img1->dados[k][i-1][j+1];


             //ORDENA VETOR APLICA MEDIANA 
             count = (int)vetor[0]+(int)vetor[1] + (int)vetor[2] + (int)vetor[3] + (int)vetor[4]+ (int)vetor[5]+ (int)vetor[6]+ (int)vetor[7]+ (int)vetor[8];
             linear = count/9 ;
             
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
                    
      for(int l=0; l<1;l++)
       for(i=1;i<(img1->altura-1);i = i + 2)
        for(j=1;j<(img1->largura-1);j = j + 2)
        {
           for(k=0; k<3; k++)
           {

             if(img1->dados[k][i][j] < 150)
             {
                linear = 255;

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
               linear = 0;
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



      for(int l=0; l<25;l++)
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
             linear = count/9 ;
             
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
                    
      for(int l=0; l<1;l++)
       for(i=1;i<(img2->altura-1);i = i + 2)
        for(j=1;j<(img2->largura-1);j = j + 2)
        {
           for(k=0; k<3; k++)
           {

             if(img2->dados[k][i][j] < 150)
             {
                linear = 255;

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
               linear = 0;
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
    
    int dif_x = posx[1] - posx[0];
    int dif_y = posy[1] - posy[0];

    

    dif_x = pow(dif_x,2) ;
    dif_y = pow(dif_y,2) ;


    printf("%d %d \n",posx[0],posy[0]);
    printf("%d %d \n",posx[1],posy[1]);

    distancia = sqrt( (dif_x+dif_y)   );   

    printf("%d %d %lf \n",dif_x,dif_y,distancia); 


 return distancia;


}






