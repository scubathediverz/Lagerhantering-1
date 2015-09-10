#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

bool menyn(void);
void alternativPrint(void);
bool taInVal(void);
bool laggTillVara(void);
void taBortVara(void);
void redigeraVara(void);
void listaKorgen(void);
void angraSenaste(void);
void lagerSkapning (void);
void visaVara(void);

int main (void){
  bool lage = true;
  while(lage){
    lage = menyn ();
  }
  return 0;
}

bool menyn (void) {
  alternativPrint();
  return taInVal();
}
void alternativPrint (void) {
  puts ("[L]ägga till en vara");
  puts ("[T]a bort en vara");
  puts ("[R]edigera vara");
  puts ("Ån[G]ra senaste ändrigen");
  puts ("Lista [H]ela varukorgen ");
  puts ("[A]vsluta");
}

bool taInVal (void){
  puts ("Välj ett av alternativen ovan");
  
  char b = toupper(getchar());
  while (getchar() !='\n');
  
  if (b == 'L'){
    laggTillVara ();
  }
  else if (b == 'T'){
    taBortVara ();
  }
  else if (b == 'R'){
    redigeraVara ();
  }
  else if (b == 'G'){
    angraSenaste ();
  }
  else if (b == 'H'){
    listaKorgen ();
  }
  else if (b == 'A'){
    return false ;
  }
  else {
    puts ("You don't deserve for rekt you typed");
  }
  return true;
}

void lagerSkapning(void){
  int lager[4][10] ={
    {10, 23, 42,30},
    {1, 654, 0,30},
    {40652, 22, 0,'B'}};
for(int i = 0; i < 4; i++) {
  for(int j = 0; j < 10; j++) {
    printf("%d ", lager[i][j]);
  }
  printf("\n");
 }
}

bool laggTillVara(void){
  puts("Mata in namnet på varan");
  char NyaVarannamn = toupper(getchar());
  while (getchar() !='\n');

  puts("Mata in beskrivningen på varan");
  char NyaVaranBeskrivning = getchar();
  while (getchar() !='\n');

  puts("Mata in Priset på varan");
  char NyaVaranPriset = toupper(getchar());
  while (getchar() !='\n');

  puts("Mata in Hyllplats på varan");
  char NyaVaranHyllplats = toupper(getchar());
  while (getchar() !='\n');

  puts("Mata in Antalet av varan");
  char NyaVaranAntal = toupper(getchar());
  while (getchar() !='\n');
  

  // lagerSkapning({NyaVarannamn,NyaVaranBeskrivning,NyaVaranPriset,NyaVaranHyllplats}) 

}
void taBortVara(void){
  //visaVara() FIXME
  puts ("REEEKT1");
}
void redigeraVara(void){
  //visaVara() FIXME
  puts ("REEEK2");
}
void listaKorgen(void){
  /* for(int i = 0; i < 3; i++) {
 for(int j = 0; j < 3; j++) {
 printf("%d ", lager[i][j]);
 }
 printf("\n"); */
  puts ("REEEKT3"); 
}
void angraSenaste(void){
  puts ("REEEKT4");
}
void visaVara(void){
  //Visa 20 första varorna i arrayen som en lista 1-20 
  puts("Mata in Numret på varan du vill visa");
  char VisaVaran = toupper(getchar());
  while (getchar() !='\n');
  ;
  /* 
printf("%c\n",Namn);
printf("%c\n",Beskrivning);   
printf("%d\n",Pris);
printf("%c\n",Hyllplats);
printf("%d\n",Antal);
*/
}

