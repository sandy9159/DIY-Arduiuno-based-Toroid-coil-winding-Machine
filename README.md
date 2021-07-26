# DIY-Arduiuno-based-Toroid-coil-winding-Machine

![image](https://user-images.githubusercontent.com/19898602/127046109-a1d7cf38-05e9-4c49-8765-12d28bd294f8.png)


  Hello friends I have made a Arduino based toroid coil winding machine,
I have made this machine using arduino as controller, This machine is automatically winding the turns and also rotate toroid core automatically. 

For user input and interaction I have used a rotary encoder and 16×2 LCD display. User can enter data like diameter of toroid core, number of turns and how much area of toroid core need to wind.

I in this post I will tell you how I build this machine and give you some details of this machine.

# ITEM USED

list of item required to build your own Arduino toroid coil winding machine.

> Arduino NANO

> A4988 STEPPER DRIVER

> ROTARY ENCODER

> 16X2 I2C LCD DISPLAY

> NEMA 17 STEPPER MOTOR

> MOTOR

> TIMING BELT

> L293D IC

> 20 X 20 ALU PROFILE

> HARDWARE AND NUTBOLTS

> 12MM PLYWOOD SHEET

# CIRCUIT DRAWING

![image](https://user-images.githubusercontent.com/19898602/127046852-3d8e798c-8dfe-49a5-b421-46a63567c0ff.png)


# CUSTOM PCB

![image](https://user-images.githubusercontent.com/19898602/125588570-5cc527d3-79ea-40f4-8323-70093eb0e1d6.png)


![image](https://user-images.githubusercontent.com/19898602/125588592-7213d3f4-ddb1-425a-ad33-9f070ff8d8a1.png)


L293D = 2 pieces


LM7809 = 1 piece


LM7805 = 1 piece


10.1uF electrolytic = 1 piece


1N5408 = 1 piece


1N4007 = 1 piece


led = 1 piece


resistance of at least 470 Ohm = 1 piece




Arduino Nano = 1 piece


Oled display = 1 piece


Encoder = 1 piece


A4988 controller = 2 pieces




socket 8 + 8 = 1 piece


PCB female pin header connectors


screw connectors for printed circuit boards


I have designe a PCB which is multipurpose and order it from [JLCPCB](https://jlcpcb.com/IAT ) 

I always prefer [JLCPCB.com](https://jlcpcb.com/IAT) for my PCB needs, [JLCPCB.com](https://jlcpcb.com/IAT) have best deals for their customers
$2 for 1-4 Layer PCBs, free SMT assembly monthly.


and this is not it if you are new customer for [JLCPCB.com](https://jlcpcb.com/IAT) you will get 18$ coupon on your
first registration to their site its limited period offer so what are waiting for go  and get your benefit. 


[Click here to visit JLCPCB.com](https://jlcpcb.com/IAT)




# CONSTRUCTION DETAILS

![image](https://user-images.githubusercontent.com/19898602/127046349-3c2ec888-cc1f-4c4d-a780-b4ef6ad12764.png)![image](https://user-images.githubusercontent.com/19898602/127046360-fb180f9f-00a3-4270-ac71-93a5f84322ed.png)

This spool ring I have made from 12mm thick plywood its OD is 145mm and ID is 122mm it have a grove of 43mm length 5mm deep for spool.

It have a one cut on its perimeter and a lock is used to lock that open part.
by opening that lock we can place toroid coil inside the ring.

This wooden ring also have a 8mm wide and 4mm deep grove to its circumference to fit 6mm timing belt in it.

![image](https://user-images.githubusercontent.com/19898602/127046396-9429a037-829d-4367-ae61-771dd41de6c6.png)


This is the copper wire spool which I have made from nylon rod,
all the necessary dimensions are shown in image .
why I have choosen nylon rod to make this because nylon rod in lighter then alu. also easy to machine.
and when it runs along with ring it does not create any balancing disturbance in motion

# BODY FRAME OF ARDUINO TOROID COIL WINDING MACHINE


![image](https://user-images.githubusercontent.com/19898602/127046425-701003ae-39d2-426d-b6c5-28f6159384ff.png)![image](https://user-images.githubusercontent.com/19898602/127046441-02475e7b-4e73-4cd7-8c68-a6b008ec4f64.png)![image](https://user-images.githubusercontent.com/19898602/127046450-8c432b4f-6b03-46a6-81af-ffbba21acd5a.png)

![image](https://user-images.githubusercontent.com/19898602/127046458-924a6f60-9b14-4b09-a5cb-be5a10436824.png)![image](https://user-images.githubusercontent.com/19898602/127046467-04c173bd-7493-4905-b5ba-229f67d5df70.png)


This body frame also made from 12mm thick plywood, there is three roller guide are installed at roughly 120 degree.
Rollers are made up of 626Z bearing and some nut bolts, our wooden spool ring will rotate on this roller.
Top from part of frame is act as ring releasing arm tight and loose with the help of wing nut.

While placing ring inside the machine we need to loose that wing nut and reaching raise the releasing arm.
After placing the ring lower the arm so that orange wheel engage within grove of ring and tight the wing nut.
In this way ring fits on it place it’ll not move out while running.

# TOROID ROLLER CUM HOLDERS

![image](https://user-images.githubusercontent.com/19898602/127046500-dfb4cca4-15bd-4cd0-8848-7945a039cbc8.png)


This is the toroid core roller cum holder I have made this roller from nylon rod on my mini lathe.
All the necessary dimension and detail is given in above image.


I ahve pasted a foam tape in roller this will grip core very well, without this foam toroid core will slip during motion.
Wing nuts are most important in this scenario normal nuts will dislocate in vibration.

![image](https://user-images.githubusercontent.com/19898602/127046519-e42c5997-06b4-4a6d-8241-a4f629aeab7a.png)


# STEPPER MOTOR ARRANGEMENT

![image](https://user-images.githubusercontent.com/19898602/127046549-e16a029b-d5a6-449e-a790-9b18ada7acf6.png)


This is the arrangement for stepper motor, I have used here NEMA17 stepper motor.
This motor will rotate toroid core to wind wire automatically on it. 

so we not need to rotate core with our hand. due to this we get even winding all along the core.

# DC MOTOR ARRANGEMENT

![image](https://user-images.githubusercontent.com/19898602/127046595-d0276d58-f9a0-4c1b-b00e-edebd93f33b8.png)![image](https://user-images.githubusercontent.com/19898602/127046602-1c8261a9-0b17-4693-94ad-d7394b2bd403.png)![image](https://user-images.githubusercontent.com/19898602/127046608-e8b53090-6800-427d-ba53-fe9cc40ca43b.png)


![image](https://user-images.githubusercontent.com/19898602/127046614-7981b4e4-4f17-41e7-a7d5-01b89cf2f5c7.png)![image](https://user-images.githubusercontent.com/19898602/127046618-6752be5b-8087-466b-8bda-e687017d8aaf.png)


This DC motor runs the spool ring, I have used ORANGE JHONSON 12V DC MOTOR 300 RPM.
But I’ll suggest you go for 600 or 1000 RPM.
600mm circumference 6mm timing belt is used in this project.
I have made a wooden clamp to mount this motor on 20×20 ALU. extrusion.

# IR SENSOR

![image](https://user-images.githubusercontent.com/19898602/127046669-94859c81-980d-418c-9c6e-073d215b60ba.png)![image](https://user-images.githubusercontent.com/19898602/127046675-13a18b22-cda0-482c-97d8-922a823ec921.png)

IR Sensor is used to count the number of turns
I have used seed studio IR sensor this sensor send signal to arduino interrupt pin.
and arduion count the number of turns done by ring.

This sensor I have mounted on 20×20 alu. prifile in such a way that lock of ring act as a detecting surface for the sensor.
please note that this sensor gives 2 output of single turn like when white part of wooden ring is in front of sensor output is low when black part came in front it became LOW TO HIGH again HIGH TO LOW when black part passed away.

so arduino interrupt pin detect two state changes on the pin so I have to divide the sensor signal by 2 to get actual turns.
This is what I did if anybody know any other better idea please let me know in comment.



# BASE OF MACHINE

![image](https://user-images.githubusercontent.com/19898602/127046754-03fe6083-26ea-4a70-9f09-0eaeecab0cec.png)


![image](https://user-images.githubusercontent.com/19898602/127046759-87000468-f8c0-4c2e-ac6f-813efedb19b6.png)


Again I have used 12mm thick 300 x 200 mm playboard to make base of the machine.
I installed four rubber leg on the base this will provide very stable support to the machine and avoid vibration.


20×20 alu. profile is used for mounting parts, I really like this alu. profile because they are very much flexible to use.
You can easily mount thing on them and very easy to move back or front.
it helps to get proper alignment between parts.

# CONTROLLER BOX

![image](https://user-images.githubusercontent.com/19898602/127046787-5a62fa83-b805-4089-ac9b-7c4d70f2d171.png)![image](https://user-images.githubusercontent.com/19898602/127046794-ce438730-1f87-4de9-9bec-5f391ac05002.png)

This is 3D printed controller box, I have placed my PCB inside this box.
and mounted LCD and encoder in front of the box.
This will gives a very profession controller box type look to our project.
and it is also make easy for user interface.

I have mounted this controller box on base with the help of metal bracket.


# MENU NAVIGATION DETAIL

This arduino toroid coil winding machine have user interface like LCD for display data and rotary encoder for user input.
Let we see detail of each screen.

![image](https://user-images.githubusercontent.com/19898602/127046930-b80c013f-002c-4cc5-96db-c216b3dbe7aa.png)


This is the first screen this is just a welcome screen.

![image](https://user-images.githubusercontent.com/19898602/127046950-c209f120-0660-4426-87ac-5bfdc271ec6e.png)


This is second screen here we have to enter the OD of toroid core I have program machine in such a way that it will work for various size of toroid core.
you just need to enter core diameter.

![image](https://user-images.githubusercontent.com/19898602/127046981-e7bbf5fb-3c98-49cc-a21a-8aec535cdbb4.png)


This is 3rd screen here you have to enter the number of turns need to wound on core.

![image](https://user-images.githubusercontent.com/19898602/127047005-c8c2d3b6-e6d7-4975-abf6-14d56abfcc4b.png)


This is 4rth screen here we have to enter the area of how much core need to wound, like 360 degree means a complete one rotation of core.
if we enter 720 the machine will rotate core two time to wind set number of turns.

![image](https://user-images.githubusercontent.com/19898602/127047028-1050232c-2bc3-4c61-9183-7b31d3c955e1.png)


5th screen on this screen you can cross check all you input data before proceed further. if you are sure with data then and only then press knob to run machine.

![image](https://user-images.githubusercontent.com/19898602/127047080-816dd87c-b6a6-4480-ba91-d0385f621a6c.png)


Here is 6th screen this screen display real time turn numbers

![image](https://user-images.githubusercontent.com/19898602/127047101-77fede63-4f35-4325-bafc-24e92bc3402b.png)


last 7th screen this will appears after winding is complete.





