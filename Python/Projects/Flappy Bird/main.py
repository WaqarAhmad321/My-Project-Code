import random
import sys
import pygame
from pygame.locals import *

# Global Variables

FPS = 32
SCREENWIDTH = 289
SCREENHEIGHT = 511
SCREEN = pygame.display.set_mode((SCREENWIDTH, SCREENHEIGHT))
GROUNDY = SCREENWIDTH * 0.8
GROUND_SPRITES = {}
GROUND_SOUND = {}
PLAYER = 'gallery/sprites/bird.png'
BACKGROUND = 'gallery/sprites/background.png'
PIPE = 'gallery/sprites/pipe.png'

if __name__ == "__main__":
    pygame.init()
