#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

struct australia {char* animal; int cuteness;};

void struct_print(struct australia x){
  printf("\n Name of animal: %s \n",x.animal); 
  printf("\n Level of cuteness: %d \n",x.cuteness);
}
int main(){
  struct australia wombat;
  wombat.animal = "Wombat";
  wombat.cuteness = 90;

  struct australia kangaroo;
  kangaroo.animal = "Kangaroo";
  kangaroo.cuteness = 70;
 
  struct australia emu;
  emu.animal = "Emu";
  emu.cuteness = 40;
  
  struct australia mel_gibson;
  mel_gibson.animal = "Mel Gibson";
  mel_gibson.cuteness = 0;
  
  struct australia vegemite;
  vegemite.animal = "Vegemite sandwich";
  vegemite.cuteness = 9999;

  struct_print(wombat);
}
