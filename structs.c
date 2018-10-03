#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "structs.h"

struct australia {char * name; int deadliness; } ;
char * animals[] = {"kangaroo", "wombat", "emu", "wallabe", "mel_brooks"};

struct australia random_struct(struct australia s) {
  s.name = animals[rand() % 5];
  s.deadliness = rand() % 100;
  return s;
}

void struct_printer(struct australia s) {
  printf("Animal: %s \n", s.name);
  printf("Deadliness: %d \n", s.deadliness);
}

struct australia modifier(struct australia s, char * animal_replace, int deadliness_replace) {
  s.name = animal_replace;
  s.deadliness = deadliness_replace;
  return s;
}

int main() {
  srand( time(NULL));
  struct australia animal;

  printf("Creating a struct with random variables... \n");
  animal = random_struct(animal);
  struct_printer(animal);
  printf("Creating a struct with random variables... \n");
  animal = random_struct(animal);
  struct_printer(animal);
  printf("Creating a struct with random variables... \n");
  animal = random_struct(animal);
  struct_printer(animal);

  printf("---------------------------\n");

  printf("Modifying with values: %s, %d \n", "kiwi", 0);
  animal = modifier(animal, "kiwi", 0);
  struct_printer(animal);
  printf("Modifying with values: %s, %d \n", "koala", 100);
  animal = modifier(animal, "koala", 100);
  struct_printer(animal);
  printf("Modifying with values: %s, %d \n", "dingo", 65);
  animal = modifier(animal, "dingo", 65);
  struct_printer(animal);

}
