# Example 4-7. Reading the HC-SR04 in Python

# hc-sr04.py - measure distance with ultrasound
# (c) BotBook.com - Karvinen, Karvinen, Valtokari


import time
import botbook_gpio as gpio

def readDistanceCm():
    triggerPin = 22
    echoPin = 27

    v = (331.5+0.6*20) # m/s

    gpio.mode(triggerPin, "out")

    gpio.mode(echoPin, "in")

    gpio.interruptMode(echoPin, "both")

    gpio.write(triggerPin, 0)
    time.sleep(0.5)

    gpio.write(triggerPin, 1)
    time.sleep(1/1000.0/1000.0)
    gpio.write(triggerPin, 0)

    t = gpio.pulseInHigh(echoPin) # s

    d = t*v
    d = d/2
    return d*100 # cm

dist = readDistanceCm()
print("Distance is %i cm" % dist)
