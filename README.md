# SerialUltrasonic-
Interfacing of Serial Ultrasonic Sensor
Rhydolabz’s “ECHO”(Ascii) Ultrasonic Distance Sensor with Ascii serial O/P is an amazing product that provides very short to long-range detection and ranging. The sensor provides precise,Stable non-contact distance measurements from about 2cm to 400 cm with very high accuracy. Its compact size, higher range and easy usability make it a handy sensor for distance measurement and mapping. The board can easily be interfaced to microcontrollers RX pin (USART). At every 50ms sensor transmits an ultrasonic burst and send out Ascii value of distance that corresponds to the time required for the burst echo to return to the sensor.

This sensor is perfect for any number of applications that require you to perform measurements between moving or stationary objects. Naturally, robotics applications are very popular but you’ll also find this product to be useful in security systems or as an infrared replacement if so desired. Since it is very stable ,the “ECHO” Ultrasonic sensor module can be used for Micromouse application instead of IR sensor.

Features:

    Professional EMI/RFI Complaint PCB Layout Design for Noise Reduction
    Range: 2 cm to 400 cm 
    Accurate and Stable range data
    Data loss in Error zone eliminated
    Modulation at 40 KHz
    Mounting holes provided on the circuit board
    Automatically Triggered at every 50 ms
    5V DC Supply voltage
    Current  <20mA
    Ascii output format
    Operating temperature 0° C to 70°C
    On Board Burst LED Indicatorshows measurement in progress
    3-pin header makes it easy to connect using a servo extension cable, no soldering required
     PIN Diagram:

                                                                     Ultrasonic Distance Sensor (Serial ASCII O/P) PIN descriptions are as below

PRACTICAL CONSIDERATION FOR USE:

Object Positioning :
The ECHO sensor cannot accurately measure the distance to an object:

    That has its reflective surface at a shallow angle so that sound will not be reflected back towards the sensor (Angle θ < 90°) or is more than 4 meters away,that is shown below
     Is too small to reflect enough sound back to the sensor.In addition, if your ECHO sensor is mounted low on your device, you may detect sound reflecting off the floor.Positioning of Ultrasonic Distance Sensor(Ascii O/P) as shown below

                                                                    

    Output Format:
        The serial output data consist of six Ascii bytes ie xxx.x<CR>
        The distance output is in centimeters (cm)
        The output baud rate is 9600 bps.

    Example for Output values 

    Description:

    Error Case: 
        The serial output data consist of four Ascii bytes ie ERR<CR>
        The output baud rate is 9600 bps.
        The sensor outputs the error message only if the distance is out of range ie above 4.3 m

    The output is as per the table below:

    Interfacing Serial Ultrasonic Sensor with Arduino

    Arduino board suitable with any micro-controller is used to connect UltraSonic Distance Sensor (Serial Ascii O/P) and data is available at SIG pin of sensor module which is connected to Rx pin of the Arduino board.“5V” pin of the UltraSonic Distance Sensor ( Serial Ascii O/p) connected to the 5V of Arduino board and GND pin of sensor  is directly connected GND of Arduino board.

     Code for Interfacing With arduino
