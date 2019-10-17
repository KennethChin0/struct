#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers.h"
#include <time.h>

void display(struct ppg player){
  printf ("Player name: %s | Points Per Game: %d\n", player.name,player.points);

}

struct ppg example(){
  struct ppg randomPlayer;
  char names[5][13] = {"James", "Irving", "Antetokounmpo", "George", "Leonard"};
  int points[5] = {35, 30, 25, 29, 28};
  strcpy(randomPlayer.name , names[rand() % 5]); // assigns randomPlayer random name from array names
  randomPlayer.points = points[rand() % 5];// assigns randomPlayer random points from array points
  return randomPlayer;
}

void modify(struct ppg *player, char *newName, int newPoints){
  strcpy(player->name, newName); // asssigns player new name
  player->points = newPoints; // assisngs player new points
}
