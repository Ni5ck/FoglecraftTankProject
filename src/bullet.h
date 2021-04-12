#ifndef _bullet_h
#define _bullet_h

#include <stdio.h>

struct State;

/**
 * A structure to represent a bullet that a player shoots.
 */
typedef struct {
    float x; /**< x coordinate of bullet */
    float y; /**< y coordinate of bullet */
    float z; /**< z coordinate of bullet */
    float dirX; /**< x value of direction vector */
    float dirY; /**< y value of direction vector*/
    float dirZ; /**< z value of direction vector */
    bool visible; /**< flag indicating the bullet has been shot */
} Bullet;

void init_bullet_position(struct State *state, struct Bullet *bullet);
void set_bullet_flight_vector(struct State *state, struct Bullet *bullet);
void increment_bullet_position(struct Bullet *bullet);

#endif // _bullet_h
