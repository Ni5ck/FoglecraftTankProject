Test Coverage:

Requirement 2:
handle_movement: Manual test  to ensure player moves forward when 'W' is pressed (passed)
handle_movement: Manual test to ensure player backwared when 'S' is pressed (passed)
handle_movement Manual test  to ensure player rotates left when 'A' is pressed (passed)
handle_movement: Manual test to ensure player rotates right when 'D' is pressed (passed)
on_right_click : Manual test to ensure bullet is created and rendered when right mouse button clicked (passed)

Requirement 3:
render_bullet: Manual test that bullet rendered on screen. (Passed) 
init_bullet_position: Utilized print statment to test bullet position is set to players position. (Passed)
set_bullet_flight_vector: Utilized print statement to test flight vector is set to players flight vector at time of shooting. (Passed) 
increment_bullet_position: Utilized print statement to test bullet position increased by values determined by flight vector. (Passed) 
client_bullet: Opened two instance of craft on server and utilized print statements to see when a new bullet was received and also demonstrated both player's bullets on the screens (Passed) 

Requirement 7:
bullet_hit: Manual test when a bullet hits a block it explodes a random amount of blocks around it (Passed) 
explode_blocks: Manually tested a random amount of blocks disappearing around an assigned block. (Passed) 

Requirement 13: 
check_if_enough_players_to_play: Added two players to a server and checked to make sure that a new thread was spawned that counted down until the game started (passed)
game_countdown: Added two players to a game and checked to see a game countdown rendered on the screen (passed)
client_bullet: Opened two instance of craft on server and utilized print statements to see when a new bullet was received and also demonstrated both player's bullets on the screens (Passed) 

Requirment 15:
Disable Flying - Created instance of craft and clicked tab and player did not start flying (passed)
Disable Teleporting - Created instance of craft and tried to use teleport command and nothing happened (passed)
