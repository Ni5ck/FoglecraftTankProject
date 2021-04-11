#include "bullet.h"

void init_bullet_position(struct Player *player) {
  State *state = &player->state;
  Bullet *bullet = &player->bullet;
  bullet->x = (float) state->x;
  bullet->y = (float) state->y;
  bullet->z = (float) state->z;
  bullet->visible = true;
}
