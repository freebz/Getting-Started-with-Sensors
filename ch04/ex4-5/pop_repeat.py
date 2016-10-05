# Example 4-5. Reading a pot over and over

# pot_repeat.py - continuously measure resistance of a potentiometer
# (c) BotBook.com - Karvinen, Karvinen, Valtokari


import botbook_mcp3002 as mcp
import time

while(True):
    x = mcp.readAnalog(0,0)
    print(x)
    time.sleep(0.5) # seconds
