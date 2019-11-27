/*============================================================================*/
/* M�DULO QUE REALIZA O C�LCULO DA DISTANCIA                                  */
/*----------------------------------------------------------------------------*/
/* Autor: Bogdan T. Nassu - nassu@dainf.ct.utfpr.edu.br                       */
/*============================================================================*/

#ifndef __TRABALHO3_H
#define __TRABALHO3_H

/*============================================================================*/

#include "imagem.h"
#include <math.h>
#include <stdio.h>

/*============================================================================*/
/* Fun��o central do trabalho. */

double calculaDistancia (Imagem* bg, Imagem* img1, Imagem* img2);
void FiltroMedia(Imagem* img, int repet);
/*============================================================================*/
#endif /* __TRABALHO3_H */
