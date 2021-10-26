# Water-Quantity-Measurement <a href="https://dt021a-3.wixsite.com/website/ultrasonic-level" target= "_blank" >View Project</a> 

<h2>Project Details: </h2>
<p>This project measures the water level in the tank using ultrasonic sensor</p>

![20201124_112849](https://user-images.githubusercontent.com/73076876/138971549-5f6b6d4a-a09b-4e10-9ecf-4bdc1662eb66.jpg)

![Device](https://user-images.githubusercontent.com/73076876/138971563-edd120de-48e6-4bcc-a953-190e28feea6b.jpg)

![image](https://user-images.githubusercontent.com/73076876/138971583-f2465d3d-1f87-4504-8662-b421ca45b1a9.png)

Ultrasonic Water measurement system measures the distance of the water in cm & inches. 

Arduino Nano is programmed to read Ultrasonic values and calculates the distance in cm and volume in litres. LCD displays the volume and distance of the water level in the container without using the serial monitor 

<h2>What is Ultrasonic?</h2>
<p>Ultrasonic sensor HC-SR04 is a sensor that can measure distance. It emits ultrasound at 40kHz which travels through the air and if there is an object or obstacle on its path it will bounce back to the module. We can calculate the distance if we know the travel time and speed of the sound.</p>

![image](https://user-images.githubusercontent.com/73076876/138969327-731db9ee-3644-4bb9-9372-ef881d58e34e.png)

<p>The HC-SR04 Ultrasonic Module has 4 pins, VCC, Trig, Echo and Ground. The Ground and the VCC pins of the module needs to be connected to the Ground and the 5 volts pins on the Arduino Board respectively and the trig and echo pins to any Digital I/O in the Arduino Board.</p>

![HC-SR04-PINOUT](https://user-images.githubusercontent.com/73076876/138969377-10b33736-df05-4703-819c-e7e48b2b779e.jpg)

<h2>Pictorial Circuit Diagram</h2>

The LCD display is added to the system which displays distance and volume of the tank in Litres.

![UltraSonic](https://user-images.githubusercontent.com/73076876/138969609-fab4d61d-6e2d-4d2e-9209-f74890ce546d.png)

<h2>Specifications</h2>

![image](https://user-images.githubusercontent.com/73076876/138970372-78917209-09a1-4cdd-a177-a7a7dce9f9bc.png)

To generate the ultrasound, the Trig is set on a High State for 10 µs. That will send out an 8 cycle sonic burst which will travel at the speed sound and it will be received in the Echo pin. The Echo pin will output the time in microseconds the sound wave travelled.

![image](https://user-images.githubusercontent.com/73076876/138970428-49521199-d265-4fe4-8d40-70b2f71765a8.png)

If the object is 20.5 cm away from the sensor, and the speed of the sound is 340 m/s or 0.034 cm/µs the sound wave will need to travel about 602.9 u seconds. But what you will get from the Echo pin will be double that number because the sound wave needs to travel forward and bounce backwards.  So in order to get the distance in cm, multiply the received travel time value from the echo pin by 0.034 and divide it by 2.

<h2>Calculations</h2>

![image](https://user-images.githubusercontent.com/73076876/138970579-13c4f240-4e7b-4d19-a081-354c68d3a17e.png)

![Capturee](https://user-images.githubusercontent.com/73076876/138970758-00d22f75-fb0d-4288-9eb6-729118d414bf.JPG)

<h3>height (h) = 20.5cm
  
radious (r) = 5.45cm

distance(d) = t * 0.034/2
  
Water level height (wlh) = h -  d

Volume (v) = pai*r^2* wlh
  
Capacity in litre = v/1000 </h3>



		Enter height of the tank =	20.5	cm		
		Enter radius of the tank =	5.45	cm		
						
		speed of sound =	0.034	cm/us		
						
		if (t)	d (cm)	wl h	volume (cm^3)	Capacity 
		0	0	20.5	1912.92	1.91
		100	1.7	18.8	1754.29	1.75
		200	3.4	17.1	1595.65	1.60
		300	5.1	15.4	1437.02	1.44
		400	6.8	13.7	1278.39	1.28
		500	8.5	12	1119.76	1.12
		600	10.2	10.3	961.13	0.96
		700	11.9	8.6	802.49	0.80
		800	13.6	6.9	643.86	0.64
		900	15.3	5.2	485.23	0.49
		1000	17	3.5	326.60	0.33
		1100	18.7	1.8	167.96	0.17
		1200	20.4	0.1	9.33	0.01
![image](https://user-images.githubusercontent.com/73076876/138971443-65b3fdfc-4c62-4a7c-a84c-dba3503e32fc.png)

# <a href="https://dt021a-3.wixsite.com/website/ultrasonic-level" target= "_blank" >VIEW PROJECT</a> 
