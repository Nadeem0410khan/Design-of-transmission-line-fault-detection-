## DESIGN OF REAL TIME TRANSMISSION LINE FAULT DETECTION
### ABSTRACT
When designing power transmission systems, electric utility companies are expected to follow a set of standard specifications. The idea to be kept in mind is that during the planning and construction phases of transmission lines, natural elements, such as trees for example, there will be less of a chance of fault occurrences and therefore more power system reliability. Faults in transmission lines are one of the elements that will affect the reliability of the system. The more fault occurrences, the lesser the system reliability, since this causes outages in the power system that may result in the interruption of service.

   The phenomena of transmission line fault takes place occasionally in our country have a severe impact on power system stability. It has great significance for reliable power supply to identify short circuit fault and cut it quickly. A method of short circuit fault detection is proposed in the project as first part.    
   
   Temporary over voltages in power systems occur for a variety of reasons such as faults, switching, and lightning. Most likely, over voltages will result in insulation breakdown of power apparatus with destructive results. It is therefore imperative for a power system to be designed in such a way that expected over voltages be below the withstand capability of power apparatus insulation. This is done by coordinating with the expected over voltages and the withstand capability of power apparatus. A method of overvoltage fault detection is proposed in the project as second part.    
      
   Transformers are a critical and expensive component of the power system. Due to the long lead time of over excitation and temperature constraint the transformer gets overheated which reduces the life expectancy of it, so proper detection and protection is inevitable. A method of transformer overheating fault detection is proposed in the project as third part.
   
   The electric utility companies are expected to provide the consumer a continuous and also a high quality of service at a competitive and reasonable cost. This means that they have to insure the reliability of the system to provide the consumer with a service that is consistent with the safety of personnel and equipment and meet their demands within not only the specifications of voltage and frequency but with a high degree of reliability and within reasonable cost to the consumer.

### HARDWARE IMPLEMENTATION
This circuit is a prototype of the faults occurring in the power system in real times. Fault detection helps us to know that the equipment performance is deteriorating before the equipment gets damaged and improves the reliability of the power system.

The design of real time transmission lines fault detection consists of three fault detection systems

1.	TRANSFORMER OVERHEATING FAULT DETECTION
2.	OVER VOLTAGE FAULT DETECTION
3.	SHORT CIRCUIT FAULT DETECTION

 #### Components used:
•	230V AC supply
•	Step down transformer
•	Diodes-IN 4007
•	Capacitor-220uF
•	Resistors-1KΩ
•	Transistor-BC 547
•	Temperature sensor- LM 35
•	Voltage regulator-7805
•	Brush less DC motor
•	Lamp load
•	Buzzer 
•	Relay
•	Arduino Microcontroller 

### CIRCUIT DIAGRAM
![CIRCUIT DIAGRAM](https://imgur.com/7Jm58gF.png)

### WORKING
Entire equipment is supplied with 230V AC and the entire supply will be given to the transformer as it is not a centre tap transformer, if input of 230V DC is given then output of 12V AC is obtained and is given as an input to bridge rectifier. The bridge rectifier converts the alternating current to direct current (12V AC- 12V DC)  and is given to the capacitor which attenuates unwanted signals or the spikes from the source signal. We use a microcontroller of input 5V DC so we require a voltage regulator to convert input of 12V DC to output of 5V DC and is given to Arduino (micro controller). The major aim of the project is the fault detection in simultaneous methods (switching of heavy loads like AC load, DC load, transmission line load). We utilize three inputs (A0, A1, and A2) and three outputs (fan-9th pin, bulb-13th pin, buzzer-12th pin) of the Arduino (micro controller).

   The combination of transformer, temperature sensor and coolant system (fan) is a simple control system. Incase transformer overheats for a longer period of time then the temperature sensor will sense the overheat and it makes the coolant system (fan) to work through a switching device i.e., transistor as a switch whose base is triggered by Arduino which switches the DC fan.
  
   Consider the input as potentiometer, this is like a rheostat used in laboratories. Turn right and left the voltage changes (in the clock wise direction voltage decreases and in anti clock wise direction the voltage increases) the change in voltage can be observed in Serial monitor. When the system voltage is less than or equal to specified voltage i.e.,230V (in this case), then the system is said to be working in normal condition, if this voltage exceeds the specified voltage then over voltage is said to be occurred which can be due to switching operations, lightning surges etc., resulting over voltage faults. Then the relay trips which isolates the faulty part from the power system. Here lamp is used as load which is switched off by relay under abnormal conditions.
   
   For transmission line or underground cable faults we are considering here a current circuit consisting of three resistances (R1, R2, and R3) each of 1kilo ohm connected in parallel. To show a transmission line or underground cable fault, consider two wires across R3 and if fault occurs the voltage across resistor is zero and huge amount of current flows resulting in a short circuit and the buzzer operates as an indicator that short circuit fault has occurred.

### SIMULATION RESULTS
![Output when short circuit occurs, buzzer operates and TRANSMISSION SENOR=0](https://imgur.com/T3pJD8Y.png) ![Output during overvoltage condition, bulb switches off and LOAD IS PROTECTED](https://imgur.com/hk6Ot53.png) ![Output when overheating of transformers takes place(as temperature is more than 38 0 C) and FAN OPERATES](https://imgur.com/zwhNXyF.png) ![At normal condition i.e.,<=230 V supply and  BULB GLOWS.](https://imgur.com/cp241aH.png)

### CONCLUSION

Artificially faults are created here in order to show the working of the sensors and protection systems. I have been able to incorporate successfully the detection of real time power system faults that occur in day to day life using Arduino (microcontroller). The entire project signifies the prototype version of the power system. In the first case study short circuit faults are detected, in the second case study overvoltage fault are detected and in the third case study transformer heating faults are detected and results are displayed on the monitoring device. In this project it can ensure faster detection of faults on the power lines and their advanced analysis can be studied from the recorded data by microcontroller.

For higher degree of faults, fault detection using PLC's can be implemented in the long run. An attempt to showcase the fault detection has been done in the miniature level for better understanding in an economical way.

### REFERENCES
•	https://www.arduino.cc/en/Guide/ArduinoUno

•	https://www.arduino.cc/reference/en

•	https://www.wikipedia.org/

•	Electrical Machines by Kothari & Nagrath Published by the Tata McGraw Hill Education Private Limited,Fourth edition.

•	Modern Power System Analysis by Nagrath Kothari   Publisher: Mcgraw Higher Ed

