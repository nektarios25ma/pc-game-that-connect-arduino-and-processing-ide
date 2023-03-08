# pc-game-that-connect-arduino-and-processing-ide
Αυτό το project έχει ακοπό να συστήσει το open software περιβάλλον του processing ide στους μαθητές μας και την συνεργασία του με το arduino uno.
Τρία project σε ένα , μία συσκευή με τρείς λειτουργίες.
Δύο παιγνίδια και έναν όμορφο αναλογικό γραφικό περιβάλλον που επιδεικωύει πχ θερμοκρασία και υγρασία
και  συνδέει το arduino uno και τους αισθητήρες του, μέσω bluetooth ή usb με τον υπολογιστή μας.
1)Αποφυγή εμποδίων  με την κίνηση του χεριού μας μέσω ultrasonic sensor.
Με την κίνηση του χεριού μας θα λαμβάνει μέσω hc-sr04 το uno τα δεδομένα .τα οποία θα μεταφέρονται στο pc 
όπου το processing προγραμμά μας θα τα μετατρέπει σε παιγνίδι. 

Η επαυξημένη πραγματικότητα και το εικονικό παιχνίδι έχουν γίνει μια πρόσφατη τάση στη βιομηχανία τυχερών παιχνιδιών. 
Οι χρόνοι χρήσης πληκτρολογίου/Joystick και ποντικιού για να παίξετε ένα παιχνίδι υπολογιστή έχουν περάσει πίσω. 

Τώρα, κάθε κονσόλα παιχνιδιών συνοδεύεται από έναν Virtual Controller που μας βοηθά να παίξουμε το παιχνίδι 
χρησιμοποιώντας τις κινήσεις και τις χειρονομίες του σώματός μας, με αυτόν τον τρόπο η εμπειρία παιχνιδιού έχει απογειωθεί
και ο χρήστης αισθάνεται μεγαλύτερη συμμετοχή στο παιχνίδι.

Τι είναι όμως το περιβάλλον processing ide (https://processing.org/):
το Processing είναι μια δωρεάν γραφική βιβλιοθήκη και ένα ολοκληρωμένο περιβάλλον ανάπτυξης (IDE) που έχει δημιουργηθεί για τις ηλεκτρονικές τέχνες,
την τέχνη νέων μέσων και τις κοινότητες οπτικού σχεδιασμού με σκοπό να διδάξει σε μη προγραμματιστές τις βασικές αρχές του προγραμματισμού υπολογιστών σε οπτικό πλαίσιο.

To προψεσσινγ χρησιμοποιεί τη γλώσσα Java , με πρόσθετες απλοποιήσεις όπως πρόσθετες κλάσεις και ψευδώνυμα(aliased) μαθηματικές συναρτήσεις και πράξεις. 
Παρέχει επίσης μια γραφική διεπαφή χρήστη για την απλοποίηση του σταδίου μεταγλώττισης και εκτέλεσης.

Η γλώσσα επεξεργασίας PROCESSING και το IDE ήταν ο πρόδρομος άλλων έργων, όπως το Arduino και το Wiring .

Προσθέσαμε ένα αισθητήρα θερμοκρασίας - υγρασίας με αντίστοιχο πρόγραμμα processing pde που επιδεικνύει με όμορφο αναλογικό τρόπο την τιμές,
όπως και ένα παιχνίδι ping pong που ελέγχεται απο ένα ποτενσιόμετρο που καθορίζει την θέση της ρακέτας.
Το 1ο ποτενσιόμτρο λειτουργεί ως ένας επιλογέας mode, μέσω του οποίου επιλέγουμε λειτουργία(δηλαδή ping pong,avoid obstacle game, DHT VALUES demonstation).
Φτιάξαμε επίσης μέσω του tinkercad 3d-stl κουτί για την τοποθέτηση των συσκευών μας.

1)ΣΧΗΜΑΤΙΚΟ ΔΙΑΓΡΑΜΜΑ ΕΝΩΣΕΩΝ-SCHAMETIC ,PIN OUT:
https://www.tinkercad.com/things/53lLq5LIQLN-hsr04-connection/editel?sharecode=PmCyip97oHABN1HMhwtkbMbY11XmnVlXyoVj72j1bXw

2)Το συνολικό διάγραμμα είναι η εικόνα-png all-schematic.
ΥΛΙΚΑ:

ARDUINO UNO  = €23.92
LINK: https://grobotronics.com/arduino-uno-rev3.html


BREADBOARD + Proto Shield X2= €7,40
LINK: https://grobotronics.com/proto-shield-for-arduino-uno-with-mini-breadboard.html

SENSOR Potentiometer Linear B10Kohm Χ2=€1.60
LINK: https://grobotronics.com/potentiometer-linear-b10kohm-stereo-d6mm-h9mm-pcb.html


Ultrasonic Module Distance for Arduino=€1,88
LINK: https://www.hellasdigital.gr/electronics/sensors/ultasonic/hc-sr04-ultrasonic-module-distance-measuring-transducer-sensor-for-arduino/

ARDUINO NANO  CLONE=€11,99
LINK: https://www.hellasdigital.gr/go-create/arduino/arduino-nano-v3.0-w-atmega328p/

Arduino Nano IO Expansion Shield=€3,45
LINK:https://www.hellasdigital.gr/electronics/prototyping/modules/nano-i-o-expansion-shield-for-arduino-uno-r3/

Bluetooth Module for Arduino - HC05=€6.80
LINK : https://grobotronics.com/bluetooth-module-for-arduino-hc05.html

Αισθητήρας Θερμοκρασίας & Υγρασίας AM2302 (DHT22) = €6.90
Link : https://grobotronics.com/rht03-dht22.html

Jumper Cables = €9,60
link: https://grobotronics.com/ribbon-40wire-20cm-female-to-ale.html
και https://grobotronics.com/breadboard-jumper-wires-140pcs.html

ΣΥΝΟΛΟ=100€

