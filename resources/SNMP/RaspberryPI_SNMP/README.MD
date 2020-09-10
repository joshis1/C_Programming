# Here are the steps to do SNMP 

## My reference - 

http://net-snmp.sourceforge.net/wiki/index.php/Tutorials

**Please note that the wiringPi GPIO Pin number is different from the bcm Pin number i.e. Physical Pin number"**

* wiringPi GPIO pin is actually a virtual pin number which maps finally to the bcm Pin Number
* Here is the diagram which maps gpio1.png which tells the wiringPi GPIO pin number to bcm pin number.
* In my example, the BCM GPIO PIN 18 is wiringPI pin number 1.

### Get the OID for this SNMP object

* $snmptranslate -m +RASP-MIB -IR -On nodejsStart

If it shows bunch of errors then you need to put the RASP-MIB in one of the folder shown in the error message.


* Generate the code - using utility mib2c  -- Don't try this since it will override your code.

env MIBS="+RASP-MIB" mib2c nodejsStart

This will generate a template to do the changes


* Add your code on what you want to --

note, I have already done step 2 so running step 2 will overwrite the code.

* Compile the code -

Since I am using wiringPi to set the GPIO pin -18, connected to 5V and resistor 560Ohms in RaspberryPi.

This will compile the code -- 

The output binary file will be - "nodeMibSubagent" and I am linking with the library wiringPi since I am using wiringPi to set the GPIO pin.

$net-snmp-config --compile-subagent nodeMibSubagent nodejsStart.c -lwiringPi


#### Running the Server first - note we are using agentx of netsnmp, snmpd by default in linux is basically netSnmp only.

* sudo pkill  snmpd

* sudo snmpd -f -Lo -C --rwcommunity=public --master=agentx --agentXSocket=tcp:10.16.1.96:1705

Note, I have given IP address of 10.16.1.96 but you need to give the appropriate IP address. Basically, the IP address of your machine, where you are going to host the snmpd.


##### Run the subAgent now.


* $sudo ./nodeMibSubagent -f -Lo -x  tcp:10.16.1.96:1705


###### Testing this - 

* snmpget -v 1 -c public -m "+RASP-MIB" localhost 1.3.6.1.4.1.9100.1.1.0


####### Troubleshooting

* Somebody told me to use tkmib in order to test it.

* Always run the subagent and snmpd in sudo mode since, my subagent is accessing GPIO pins of raspberry pi.

* Try export 

* echo 18 > /sys/class/gpio/export

* echo out > /sys/class/gpio/gpio18/direction
  
* echo 1 > /sys/class/gpio/gpio18/value


######### Troubleshooting Circuit - 

Directly give 5V input to the LED Diode with resistor obviously so that you know that it works.
Basically, GPIO pulls up so that the 5V is avaiable from the source to the GPIO output pin. 


* syslog in the code , I found it very helpful. This way you know that your code is getting executed.

* SNMP MIB Browser is a good thing to add. I have compiled it in the MIB browser and I can set/get this OID.
I am using public community string.


* Ensure that the snmpd.conf in /etc/snmp/snmpd.conf has got the following entry
 
 * master agentx

* I found that I have to give the --rwcommunity=public while executing the snmpd. See the following command - 

$sudo snmpd -f -Lo -C --rwcommunity=public --master=agentx --agentXSocket=tcp:10.16.1.96:1705


* Resistor is very important in this circuit. If you don't put a resistor then it will draw infinite current which will damage the raspberry Pi.

* V = I R - Ohms Law.

*  V/R = I 

If there is no resistance then the current will be infinite.

* The LED takes around 1.8V and the power supply voltage is 5V.

Thus, the net Voltage is 5V - 1.8 V = 3.2 V

Now, the current rating for LED is around 5mA

Next, 3.2/5 * 1000 =  640 ohms.

I got around 560 ohms resistance and if I check , the current it allows is 5.7mA.