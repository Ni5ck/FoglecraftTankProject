#include "bullet.h"

/**
 * Initiate bullet's starting position by setting it to the player's position
 *
 * @param state Structure containing a player's position
 * @param bullet Structure representing the player's bullet
 */
void init_bullet_position(struct State *state, struct Bullet *bullet) {
  bullet->x = (float) state->x;
  bullet->y = (float) state->y;
  bullet->z = (float) state->z;
  bullet->visible = true;
}

/**
 * Set the direction vector of the bullet based on the sight vector of the player
 * when the bullet is shot.
 *
 * @param state Structure containing a player's position
 * @param bullet Structure representing the player's bullet
 */
void set_bullet_flight_vector(struct State *state, struct Bullet *bullet) {
    get_sight_vector(state->rx, state->ry, &bullet->dirX, &bullet->dirY, &bullet->dirZ);
}

/**
 * Increment the bullet's coordinates by it's direction vector.
 *
 * @param bullet Structure representing the player's bullet
 */
void increment_bullet_position(struct Bullet *bullet) {
    bullet->x += bullet->dirX;
    bullet->y += bullet->dirY;
    bullet->z += bullet->dirZ;
}
