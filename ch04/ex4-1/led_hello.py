# Example 4-1. Hello LED Python code

# led_hello.py - blink external LED to test GPIO pins
# (c) BotBook.com - Karvinen, Karvinen, Valtokari

"led_hello.py - light a LED using Raspberry Pi GPIO"
# Copyright 2013 http://Botbook.com */


import time
import os

def writeFile(filename, contents):
    with open(filename, 'w') as f:
        f.write(contents)

# main

print "Blinking LED on GPIO 27 onece.."

if not os.path.isfile("/sys/class/gpio/gpio27/direction"):
    writeFile("/sys/class/gpio/export", "27")

writeFile("/sys/class/gpio/gpio27/direction", "out")

writeFile("/sys/class/gpio/gpio27/value", "1")
time.sleep(2)   # seconds
writeFile("/sys/class/gpio/gpio27/value", "0")
