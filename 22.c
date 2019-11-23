/*20.c Programma ar datu izvadi (data out)
Programmas autors: Edijs Zajanckausks
Prg. veidota 2019.gada 23.novebri
Versija: 0.0.1
Programma cikliskam robezhas e apreekjinam */

#include <stdio.h>
#include <math.h>

int main()
{
 int k;
 double lim;

 for (k=1; k<=50; k++ )
 {
	lim = pow((1+1./k),k);
	printf("k=%d lim=%f \n", k, lim);
 }
}
