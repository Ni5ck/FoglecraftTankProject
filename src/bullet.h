#ifndef _bullet_h
#define _bullet_h

#include <stdio.h>

struct Player;

typedef struct {
    float x;
    float y;
    float z;
    float dirX;
    float dirY;
    float dirZ;
    bool visible;
} Bullet;

void init_bullet_position(struct Player *player);

#endif // _bullet_h
