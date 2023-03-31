

#importing necessary packages
from gpiozero import LED
from time import sleep
#create an object called led that refers to GPIO 25
led = LED(25)

#create a variable called delay that refers to the delay time in seconds
delay = 1

while True:
    #set led to on for the delay time
    led.on()
    print("LED set to on")
    sleep(delay)
    #set led to off for the delay time
    led.off()
    print("LED set to off")
    sleep(delay)
