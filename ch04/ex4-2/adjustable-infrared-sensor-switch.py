# Example 4-2. Adjustable infrared switch code

# adjustable-infrared-sensor-switch.py - is object within predefined distance?
# (c) BotBook.com - Karvinen, Karvinen, Valtokari


import botbook_gpio as gpio

gpio.mode(27, "in")
x = gpio.read(27)
if( x == 0):
    print "Something is inside detection range"
else:
    print "There is nothing inside detection range"
