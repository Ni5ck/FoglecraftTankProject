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

/**
 * Render bullet in window.
 *
 * @param attrib The program's openGL attributes
 * @param state Structure containing a player's position
 * @param bullet Structure representing the player's bullet
 */
void render_bullets(struct Attrib *attrib, struct State *state, struct Bullet *bullet) {
    float matrix[16];
    set_matrix_3d(matrix, g->width, g->height, state->x, state->y, state->z, state->rx, state->ry, g->fov, g->ortho, g->render_radius);
    glUseProgram(attrib->program);
    glEnable(GL_COLOR_LOGIC_OP);
    glUniformMatrix4fv(attrib->matrix, 1, GL_FALSE, matrix);
    glUniform3f(attrib->camera, state->x, state->y, state->z);
    glUniform1i(attrib->sampler, 0);
    int bulletItem = items[0];
    GLuint buffer = gen_cube_buffer(bullet->x, bullet->y, bullet->z, 0.05, bulletItem);
    draw_cube(attrib, buffer);
    del_buffer(buffer);
}
