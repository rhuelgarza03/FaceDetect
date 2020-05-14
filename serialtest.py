import serial
  
ser = serial.Serial('COM5', baudrate=9600, timeout=1)

if ser.isOpen():
     print(ser.name + ' is open...')

while 1:
    ser.write(b'1')