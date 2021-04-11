#include "bullet.h"

/**
 * Initiate bullet's starting position by setting it to the player's position
 *
 * @param player Structure containing a player's attributes.
 */
void init_bullet_position(struct Player *player) {
  State *state = &player->state;
  Bullet *bullet = &player->bullet;
  bullet->x = (float) state->x;
  bullet->y = (float) state->y;
  bullet->z = (float) state->z;
  bullet->visible = true;
}

/**
 * Set the direction vector of the bullet based on the sight vector of the player
 * when the bullet is shot.
 *
 * @param player Structure containing a player's attributes.
 */
void set_bullet_flight_vector(Player *player) {
    State *state = &player->state;
    Bullet *bullet = &player->bullet;
    get_sight_vector(state->rx, state->ry, &bullet->dirX, &bullet->dirY, &bullet->dirZ);
}
