
Team 11 of CEG 4110 forked an open source version of craft in order to implement a tank game. The requirements for the tank game can be found in Requirements.md. This document outlines the tracibility between the code implementing the requirements and testing to ensure those Requirments were met. Testing results can be found in Test.md. 

Req. 2  - "The controls shall be overriden to allow for special tank controls."
Requirement 2 was met by overriding the previous implementation of handle_movement(). The previous controls already moved forward when 'W' (2.1.1) was pressed and backwards when 'S' (2.1.2) was pressed. 'A'  input was changed to rotation left (2.1.3) and 'D' was changed to rotation right (2.1.4). Tank rotatation with mouse movement uses the already implemented handle_mouse_input() (2.1.5). on_right_click was changed so that instead of removing a block in the players sightline it sets a flag for the player's Bullet struct to shoot. The bullet's state is handled in the main loop. (2.2 & 2.2.1)

Req. 3 - "A bullet graphic shall be implemented to show the bullet’s location."
The struct Bullet was created to represent a bullet that a player shoots. The strruct includes the bullets currrent coordinates and the direction in which it is moving. It also provides some flags to indicate the bullet's state. When the right mouse button is clicked the shoot flag of the current player is set. In the main loop this will call init_bullet_position to set the bullet's starting location to the player's current location and it will set the bullet's direction based on the players current line of sight with set_bullet_flight_vector (3.1). The bullet is rendered on the screen by render_bullet. With each pass of the main loop the bullet's location is increased by it's flight vector and rerendered on the screen until it hits an object (bullet_hit) or the bullet geos far enough that it isn't visible (bullet_goes_out_of_scope). 

Req. 7 - Bullet shall destruct blocks on impact within an explosion radius

