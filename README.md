# faceDetect
This is a program that detects your face via a webcam and then points the camera at you, to ensure that your face is in the center of the shot. The only required python file is actually center.py, the other 3 are just test files I made and never removed.

fun fact: this took like 3 extra hours to make because I was encoding my data wrong and it was super frustrating to figure out the problem lol.

I wrote the software in python and whatever language the arduino ide uses (simplified c++ I believe). The python code utilizes the opencv library to handle all the facial recognition fairly easily (it can be done in like 50 lines of code as long as you have a webcam). The program then grabs the X value of where it thinks your face is, encodes it into ascii, and writes it into the serial port. The arduino code reads the data from the serial port, decodes it back into an integer, and then uses the map() function to convert the X value into an angle that the servio can understand.

For the hardware, I used an arduino redboard, a logitech c920 webcam, and a cheap micro servo. Although, any other type of servo, webcam, or arduino would work, obviously. All I did was connect the servo to the arduino and then mount the webcam on top of the servo using some tape.
