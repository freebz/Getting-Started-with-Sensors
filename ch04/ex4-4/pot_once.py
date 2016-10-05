# Example 4-4. Reading a potentiometer

# pot_once.py - measure resistance of a potentiometer, once
# (c) BotBook.com - Karvinen, Karvinen, Valtokari

import botbook_mcp3002 as mcp

x = mcp.readAnalog(0,0)
print(x)
