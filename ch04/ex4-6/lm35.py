# Example 4-6. Reading the LM35 sensor in Python

# lm35.py - print temperature in Celsius
# (c) BotBook.com - Karvinen, Karvinen, Valtokari


import time
import botbook_mcp3002 as mcp

def readTemperature():
    data = mcp.readAnalog(0,0)
    percent = data / 1023.0
    volts = percent * 3.3
    celcius = 100.0 * volts
    return celcius

while(True):
    t = readTemperature()
    print("Current temperature is %i C " % t)
    time.sleep(0.5) # seconds
