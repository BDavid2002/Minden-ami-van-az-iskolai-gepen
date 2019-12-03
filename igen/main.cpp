#include <iostream>

using namespace std;

/*
 * Hanoi tornyai problema megoldasa   	*
 * Demosntracios cel: rekurzio        	*
 */

#include <stdio.h>


float s; 	     /* globalis valtozo lepesek szamamnak szamlalasahoz */

/* n korong atrakasa a 'forras' oszloprol a 'cel' oszlopra */
/*  ugy, hogy kozben a 'seged' oszlopot hasznalhatjuk      */
void torony(int n, char forras, char cel, char seged)
{
  if (n > 0) {		             /* ha van korong */
    torony(n-1, forras, seged, cel); /* n-1 -et 'tanitvany' atrak a segedre */
    printf("%c->%c\n", forras, cel); /* helyere rakjuk az utolsot */
    s = s+1;			     /* lepesek szamolasa */
    torony(n-1, seged, cel, forras); /* 'tanitvany' a segdrol a helyere tesz */
  }
};


int main(int argc, char *argv[])
{
  int k;	                     /* korongok szama */

  do {
    printf("Adja meg a korngok szamat v. nullat:");
    scanf("%d", &k);
    if (k != 0) {
      s = 0;	                     /* lepesek szama */
      printf("%d darab korong atrakasa A-rol B-re:\n", k);
      torony(k, 'A', 'B', 'C');
      printf("%d darab korong atrakasahoz szukseges lepesek szama: %.0f\n",
									k, s);
    };
  } while (k != 0);
}
