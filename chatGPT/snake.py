import pygame
import random

# Initialize Pygame
pygame.init()

# Set up the display
width, height = 640, 480
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Snake Game")

# Set up the colors
white = (255, 255, 255)
black = (0, 0, 0)
red = (255, 0, 0)

# Set up the clock
clock = pygame.time.Clock()

# Set up the font
font = pygame.font.Font(None, 36)

# Set up the Snake and the Food
block_size = 10
snake_speed = 15

def draw_snake(snake_list):
    for x in snake_list:
        pygame.draw.rect(screen, black, [x[0], x[1], block_size, block_size])

def message(msg, color):
    text = font.render(msg, True, color)
    screen.blit(text, [width/6, height/3])

def gameLoop():
    print("starting the gameloop")
    game_over = False
    game_close = False
    
    # Set up the Snake
    lead_x = width/2
    lead_y = height/2
    lead_x_change = 0
    lead_y_change = 0
    snake_List = []
    Length_of_snake = 1
    
    # Set up the Food
    food_x = round(random.randrange(0, width - block_size) / 10.0) * 10.0
    food_y = round(random.randrange(0, height - block_size) / 10.0) * 10.0
    
    while not game_over:
        
        while game_close == True:
            screen.fill(white)
            message("You Lost! Press Q-Quit or C-Play Again", red)
            pygame.display.update()
            
            for event in pygame.event.get():
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_q:
                        game_over = True
                        game_close = False
                    if event.key == pygame.K_c:
                        gameLoop()
        
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                game_over = True
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_LEFT:
                    lead_x_change = -block_size
                    lead_y_change = 0
                elif event.key == pygame.K_RIGHT:
                    lead_x_change = block_size
                    lead_y_change = 0
                elif event.key == pygame.K_UP:
                    lead_y_change = -block_size
                    lead_x_change = 0
                elif event.key == pygame.K_DOWN:
                    lead_y_change = block_size
                    lead_x_change = 0
                    
        # Check if the Snake hits the boundaries
        if lead_x >= width or lead_x < 0 or lead_y >= height or lead_y < 0:
            game_close = True
        
        # Update the Snake's position
        lead_x += lead_x_change
        lead_y += lead_y_change
        
        # Clear the Screen
        screen.fill(white)
        
        # Draw the Food
        pygame.draw.rect(screen, red, [food_x, food_y, block_size, block_size])
        
        # Update the Snake's Length
        snake_Head = []
        snake_Head.append(lead_x)
        snake_Head.append(lead_y)
        snake_List.append(snake_Head)
        
        if len(snake_List) > Length_of_snake:
            del snake_List[0]
        
    # Check if the Snake hits itself
    for block in snake_List[:-1]:
        if block == snake_Head:
            game_close = True
            
    # Draw the Snake
    draw_snake(snake_List)
    
    # Update the Score
    score = Length_of_snake - 1
    score_text = font.render("Score: " + str(score), True, black)
    screen.blit(score_text, [0, 0])
    
    # Update the Display
    pygame.display.update()
    
    # Check if the Snake eats the Food
    if lead_x == food_x and lead_y == food_y:
        food_x = round(random.randrange(0, width - block_size) / 10.0) * 10.0
        food_y = round(random.randrange(0, height - block_size) / 10.0) * 10.0
        Length_of_snake += 1
    
    # Set up the Game's FPS
    clock.tick(snake_speed)

# Quit Pygame
gameLoop()
pygame.quit()
# Quit Python
quit()