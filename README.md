# pc-game-that-connect-arduino-and-processing-ide
Αυτό το project έχει σκοπό να συστήσει το open software περιβάλλον του processing ide στους μαθητές μας και την συνεργασία του με το arduino uno.
Τρία project σε ένα , μία συσκευή με τρείς λειτουργίες.
Δύο παιγνίδια. Επίσης ένα όμορφο αναλογικό γραφικό περιβάλλον που επιδεικνύει πχ θερμοκρασία και υγρασία.
Η συσκευή  συνδέει το arduino uno και τους αισθητήρες του, μέσω bluetooth ή usb με τον υπολογιστή μας.

1)Αποφυγή εμποδίων  με την κίνηση του χεριού μας μέσω ultrasonic sensor.
Με την κίνηση του χεριού μας λαμβάνει μέσω hc-sr04 το uno τα δεδομένα ,τα οποία μεταφέρονται στο pc 
όπου το processing προγραμμά μας τα μετατρέπει σε παιγνίδι. 

Η επαυξημένη πραγματικότητα και το εικονικό παιχνίδι έχουν γίνει μια πρόσφατη τάση στη βιομηχανία τυχερών παιχνιδιών. 
Οι χρόνοι χρήσης πληκτρολογίου/Joystick και ποντικιού για να παίξετε ένα παιχνίδι υπολογιστή έχουν περάσει πίσω. 

Τώρα, κάθε κονσόλα παιχνιδιών συνοδεύεται από έναν Virtual Controller που μας βοηθά να παίξουμε το παιχνίδι 
χρησιμοποιώντας τις κινήσεις και τις χειρονομίες του σώματός μας, με αυτόν τον τρόπο η εμπειρία παιχνιδιού έχει απογειωθεί
και ο χρήστης αισθάνεται μεγαλύτερη συμμετοχή στο παιχνίδι.
Αυτή την υπολειτουργία της συσκευής μας μπορείτε να την φτιάξετε ως ξεχωριστό έργο συμφωνα με το branche αυτού του GITHUB: https://github.com/nektarios25ma/pc-game-that-connect-arduino-and-processing-ide/tree/ultrasonic-avoid-obsacle-game

2)'Ενα παιχνίδι ping pong που ελέγχεται απο ένα ποτενσιόμετρο που καθορίζει την θέση της ρακέτας.
Αυτή την υπολειτουργία της συσκευής μας μπορείτε να την φτιάξετε ως ξεχωριστό έργο συμφωνα με το branche αυτού του GITHUB: https://github.com/nektarios25ma/pc-game-that-connect-arduino-and-processing-ide/tree/ping-pong-pot-sellection

3)Προσθέσαμε ένα αισθητήρα θερμοκρασίας - υγρασίας με αντίστοιχο πρόγραμμα processing pde που επιδεικνύει με όμορφο αναλογικό τρόπο την τιμές.
Αυτή την υπολειτουργία της συσκευής μας μπορείτε να την φτιάξετε ως ξεχωριστό έργο συμφωνα με το branche αυτού του GITHUB: https://github.com/nektarios25ma/pc-game-that-connect-arduino-and-processing-ide/tree/temperature-and-humidity-analog-circle-graph+

Τι είναι όμως το περιβάλλον processing ide (https://processing.org/):
το Processing είναι μια δωρεάν γραφική βιβλιοθήκη και ένα ολοκληρωμένο περιβάλλον ανάπτυξης (IDE) που έχει δημιουργηθεί για τις ηλεκτρονικές τέχνες,
την τέχνη νέων μέσων και τις κοινότητες οπτικού σχεδιασμού με σκοπό να διδάξει σε μη προγραμματιστές τις βασικές αρχές του προγραμματισμού υπολογιστών σε οπτικό πλαίσιο.

To processing χρησιμοποιεί τη γλώσσα Java , με πρόσθετες απλοποιήσεις όπως πρόσθετες κλάσεις και ψευδώνυμα(aliased) μαθηματικές συναρτήσεις και πράξεις. 
Παρέχει επίσης μια γραφική διεπαφή χρήστη για την απλοποίηση του σταδίου μεταγλώττισης και εκτέλεσης.

Η γλώσσα επεξεργασίας PROCESSING και το IDE ήταν ο πρόδρομος άλλων έργων, όπως το Arduino και το Wiring .

Το 1ο ποτενσιόμτρο λειτουργεί ως ένας επιλογέας mode, μέσω του οποίου επιλέγουμε λειτουργία(δηλαδή ping pong,avoid obstacle game, DHT VALUES demonstation).
Φτιάξαμε επίσης μέσω του tinkercad 3d-stl κουτί για την τοποθέτηση των συσκευών μας.

ΕΞΗΓΗΣΗ
VIDEO LINK :https://drive.google.com/file/d/1yuXesDzbK-p1zB9N3SUM91SjlKLq627T/view?usp=sharing ή
https://youtu.be/bH8vBlg4YJ4


1)ΣΧΗΜΑΤΙΚΟ ΔΙΑΓΡΑΜΜΑ ΕΝΩΣΕΩΝ-SCHAMETIC ,PIN OUT:
https://www.tinkercad.com/things/53lLq5LIQLN-hsr04-connection/editel?sharecode=PmCyip97oHABN1HMhwtkbMbY11XmnVlXyoVj72j1bXw

2)Το συνολικό διάγραμμα είναι η εικόνα-png all-schematic.

3)Ο Κώσικας του που εκτελεί όλες τις λειτουργίες και είναι εγκατεστημένος στο μικροελεγκτή : https://github.com/nektarios25ma/pc-game-that-connect-arduino-and-processing-ide/blob/main/PONGINOCOMPLEXf.ino

4)Τα 3 pde -σχέδια ή προγράμματα που τρέχουν στο pc μας (processing ide) είναι (GITHUB):

α)για την αποφυγή εμποδίων:  https://github.com/nektarios25ma/pc-game-that-connect-arduino-and-processing-ide/blob/main/flappy1try.pde

β)ping pong:  https://github.com/nektarios25ma/pc-game-that-connect-arduino-and-processing-ide/blob/main/pongFINALpde2.pde

γ) για την επίδειξη θερμοκρασίας -υγρασίας:  https://github.com/nektarios25ma/pc-game-that-connect-arduino-and-processing-ide/blob/main/PROCESSING_DHTB.pde

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

