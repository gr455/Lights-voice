import speech_recognition as sr

from retry import retry

import serial

on='1'
off='0'

myard=serial.Serial('COM4',9600,timeout=1)
print("hi")
while(True):
    @retry(Exception, delay=0)

    def rerunrthis():
        r1=sr.Recognizer()
        mic=sr.Microphone()

        with mic as source:
            print("-----Adjusting for ambient noise-----")
            r1.adjust_for_ambient_noise(source)
            print("-----Listening now-----")
            aud=r1.listen(source)

        z = r1.recognize_google(aud)

        print(z)

        if(z=="turn off" or z=="turn of"):
            print("Turning off")
            myard.write(off.encode('utf-8'))
        elif(z=="turn on"):

            print("Turning on")
            myard.write(on.encode('utf-8'))

    rerunrthis()

