#ifndef __BALL_H__
#define __BALL_H__


typedefstruct Ball {
  float xPos;
  float yPos;

  float rayon;

  struct Player * player;

/*Texture, vitesse, couleur, bonus*/

}Balle;

void setPositionBall(Ball * b, float xPos, float yPos);
