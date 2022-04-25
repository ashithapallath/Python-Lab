import pygame,sys
import numpy as np
from pygame.locals import *

pygame.init()

font = pygame.font.SysFont('Constantia', 45)

#define colours
red = (255, 0, 0)
black = (0, 0, 0)
white = (255, 255, 255)

class button():
	#colours for button and text
	button_col = (255, 0, 0)
	text_col = black
	width = 180
	height = 70

	def __init__(self, x, y, text):
		self.x = x
		self.y = y
		self.text = text

	def draw_button(self):
		button_rect = Rect(self.x, self.y, self.width, self.height)
		pygame.draw.rect(screen, self.button_col, button_rect)
		#add shading to button
		pygame.draw.line(screen, white, (self.x, self.y), (self.x + self.width, self.y), 2)
		pygame.draw.line(screen, white, (self.x, self.y), (self.x, self.y + self.height), 2)
		pygame.draw.line(screen, black, (self.x, self.y + self.height), (self.x + self.width, self.y + self.height), 2)
		pygame.draw.line(screen, black, (self.x + self.width, self.y), (self.x + self.width, self.y + self.height), 2)
		#add text to button
		text_img = font.render(self.text, True, self.text_col)
		text_len = text_img.get_width()
		screen.blit(text_img, (self.x + int(self.width / 2) - int(text_len / 2), self.y + 25))

WIDTH = 600
boardHeight = 600
HEIGHT = 700
BLACK = (0, 0, 0)
RED = (0, 0, 0)
WHITE = (255,255,255)
BG_COLOR = (42, 5, 141)
LINE_WIDTH = 10
BOARD_ROWS = 3
BOARD_COLUMNS = 3
CIRCLE_RADIUS = 60
CIRCLE_WIDTH = 10
SPACE = 45

screen = pygame.display.set_mode((WIDTH,HEIGHT))
pygame.display.set_caption('Tic Tac Toe')
screen.fill(BG_COLOR)

#board
board = np.zeros((BOARD_ROWS,BOARD_COLUMNS))

def draw_lines():
  #horizontal - lines
  pygame.draw.line(screen,BLACK,(0,200),(600,200),LINE_WIDTH)
  pygame.draw.line(screen,BLACK,(0,400),(600,400),LINE_WIDTH)
  #vertical - lines
  pygame.draw.line(screen,BLACK,(200,0),(200,600),LINE_WIDTH)
  pygame.draw.line(screen,BLACK,(400,0),(400,600),LINE_WIDTH)

def mark_square(rows,cols,player):
  board[rows][cols] = player

def available_square(rows,cols):
  return board[rows][cols] == 0

def is_board_full():
  for row in range(BOARD_ROWS):
    for col in range(BOARD_COLUMNS):
      if(board[row][col]==0):
        return False
      else:
        return True

def check_win(player):
  #vertical-win-check
  for col in range(BOARD_COLUMNS):
    if board[0][col] ==player and board[1][col] ==player and board[2][col] ==player:
      draw_vertical_winning_line(col,player)
      return True
  #horizontal-win-check
  for row in range(BOARD_ROWS):
    if board[row][0] ==player and board[row][1] ==player and board[row][2] ==player:
      draw_horizontal_winning_line(row,player)
      return True
  #ascending-diagonal-win-check
  if board[2][0]==player and board[1][1]==player and board[0][2]==player:
    draw_ascending_diagonal_winning_line(player)
    return True
  #descending-diagonal-win-check
  if board[0][0]==player and board[1][1]==player and board[2][2]==player:
    draw_descending_diagonal_winning_line(player)
    return True
  return False

def draw_vertical_winning_line(col,player):
  pygame.draw.line(screen,RED,(col*200+100,0),(col*200+100,600),20)

def draw_horizontal_winning_line(row,player):
  pygame.draw.line(screen,RED,(0,row*200+100),(600,row*200+100),20)

def draw_ascending_diagonal_winning_line(player):
  pygame.draw.line(screen,RED,(15,boardHeight-15),(WIDTH-15,15),20)

def draw_descending_diagonal_winning_line(player):
  pygame.draw.line(screen,RED,(15,15),(WIDTH-15,boardHeight-15),20)

def restart():
  screen.fill(BG_COLOR)
  draw_lines()
  game_over = False
  player = 1
  for row in range(BOARD_ROWS):
    for col in range(BOARD_COLUMNS):
      board[row][col]=0

def draw_figures():
  for row in range(BOARD_ROWS):
    for col in range(BOARD_COLUMNS):
      if board[row][col]==1:
        pygame.draw.circle(screen,BLACK, (int ((col*200)+100),int((row*200)+100)),CIRCLE_RADIUS,CIRCLE_WIDTH)
      elif board[row][col]==2:
        pygame.draw.line(screen,WHITE,(col*200+SPACE,(row*200+200)-SPACE),((col*200+200)-SPACE,(row*200)+SPACE),15)
        pygame.draw.line(screen,WHITE,(col*200+SPACE,(row*200)+SPACE),((col*200+200)-SPACE,(row*200+200)-SPACE),15)

draw_lines()

game_over = False
player = 1

#reset button and won display text.
resetButton = button(100,610,'Reset')
resetButton.draw_button()

text1 = font.render('O WON', True, white,BLACK)
text2 = font.render('X WON', True, white,BLACK)
textRect1 = text1.get_rect()
textRect1.center = (400,650)
textRect2 = text2.get_rect()
textRect2.center = (400,650)

#main loop
while True:
   for event in pygame.event.get():
     if event.type == pygame.QUIT:
       sys.exit()
     if event.type == pygame.MOUSEBUTTONDOWN and not game_over:
       mouseX  = event.pos[0] #x
       mouseY = event.pos[1] #y
       clicked_row = int(mouseY//200)
       clicked_col = int(mouseX//200)
       if(clicked_row<=2):
        if available_square(clicked_row,clicked_col):
          if player==1:
            mark_square(clicked_row,clicked_col,1)
            if check_win(player):
              game_over = True
              screen.blit(text1, textRect1)
            player = 2
          elif player == 2:
            mark_square(clicked_row,clicked_col,2)
            if check_win(player):
              game_over = True
              screen.blit(text2, textRect2)
            player = 1
          draw_figures()
       else:
         restart()
         player = 1
         game_over = False
         resetButton.draw_button()
     if event.type == pygame.MOUSEBUTTONDOWN:
       mouseY = event.pos[1]
       if(mouseY>600):
         restart()
         player=1
         game_over = False
         resetButton.draw_button()
   pygame.display.update()
