# pc-game-that-connect-arduino-and-processing-ide
Η βούληση να φτιάξουμε μια εύκολα πραγματοποιήσιμη παιχνιδομηχανή με Virtual Controller και όχι μόνο μας οδήγησε 
σε αυτό το έργο.

1. Έρευνα

α. Μελέτη υπάρχουσας
κατάστασης
Σε πολλές εφαρμογές ανοικτού λογισμικού όπως με το arduino και τους αισθητήρες του , χρειαζόμαστε ένα γραφικό περιβάλλον διασύνδεσης που “τρέχει” στο pc-laptop μας, με δυνατότητα διαμόρφωσης ανάλογα με τις τρέχουσες ανάγκες . 

β.Σαφής ορισμός
προβλήματος – ανάγκης

Το open software arduino ide, μας παρέχει το serial plotter ,που όμως δεν διαμορφώνεται κατα βούληση -customize. 

2. Σχεδιασμός
 
 α. Σαφής ορισμός προτεινόμενης λύσης
 Έτσι χρειαζόμαστε ένα προγραμματιστικό περιβάλλον open ,easy customized με παρόμοια προγραμματιστική αρχιτεκτονική-φιλοσοφία , όπως το arduino ide. Επίσης free , open δηλαδή ανοικτό με μεγάλη κοινότητα υποστήριξης κτλ. Επίσης να μπορεί να υποστηρίξει μια παιχνιδομηχανή με αισθητήρες διασυνδεμένους στο arduino uno και μια επιστημονική επέκταση αυτών.

β. Πρωτοτυπία λύσης
Η λύση βρίσκεται στο processing ide δλδ στις ρίζες μας*.
*Η γλώσσα επεξεργασίας PROCESSING και το IDE ήταν ο πρόδρομος άλλων έργων, όπως το Arduino και το Wiring .
Τι είναι όμως το περιβάλλον processing ide (https://processing.org/): το Processing είναι μια δωρεάν γραφική βιβλιοθήκη και ένα ολοκληρωμένο περιβάλλον ανάπτυξης (IDE) που έχει δημιουργηθεί για τις ηλεκτρονικές τέχνες, την τέχνη νέων μέσων και τις κοινότητες οπτικού σχεδιασμού με σκοπό να διδάξει σε μη προγραμματιστές τις βασικές αρχές του προγραμματισμού υπολογιστών σε οπτικό πλαίσιο.
To processing χρησιμοποιεί τη γλώσσα Java , με πρόσθετες απλοποιήσεις όπως πρόσθετες κλάσεις και ψευδώνυμα(aliased) μαθηματικές συναρτήσεις και πράξεις. Παρέχει επίσης μια γραφική διεπαφή χρήστη για την απλοποίηση του σταδίου μεταγλώττισης και εκτέλεσης.
Αυτό το project  έχει σκοπό να συστήσει το open software περιβάλλον του processing ide στους μαθητές μας και την συνεργασία του με το arduino uno. 
Τρία project σε ένα , μία συσκευή με τρείς λειτουργίες. Δύο παιγνίδια. Επίσης ένα όμορφο αναλογικό γραφικό περιβάλλον που επιδεικνύει πχ θερμοκρασία και υγρασία. Η συσκευή συνδέει το arduino uno και τους αισθητήρες του, μέσω bluetooth ή usb με τον υπολογιστή μας.

1)Αποφυγή εμποδίων με την κίνηση του χεριού μας μέσω ultrasonic sensor. Με την κίνηση του χεριού μας -πλησιάζει και απομακρύνεται από τον αισθητήρα μεταβάλλοντας έτσι την απόσταση που καταγράφει ο αισθητήρας- λαμβάνει μέσω hc-sr04 το uno τα δεδομένα ,τα οποία μεταφέρονται στο pc όπου το processing προγραμμά μας τα μετατρέπει σε παιγνίδι αποφυγής εμποδίων.
Η επαυξημένη πραγματικότητα και το εικονικό παιχνίδι έχουν γίνει μια πρόσφατη τάση στη βιομηχανία τυχερών παιχνιδιών. Οι χρόνοι χρήσης πληκτρολογίου/Joystick και ποντικιού για να παίξετε ένα παιχνίδι υπολογιστή έχουν περάσει πίσω.
Τώρα, κάθε κονσόλα παιχνιδιών συνοδεύεται από έναν Virtual Controller που μας βοηθά να παίξουμε το παιχνίδι χρησιμοποιώντας τις κινήσεις και τις χειρονομίες του σώματός μας, με αυτόν τον τρόπο η εμπειρία παιχνιδιού έχει απογειωθεί και ο χρήστης αισθάνεται μεγαλύτερη συμμετοχή στο παιχνίδι. Αυτή την ιδιαίτερη λειτουργία της συσκευής μας μπορείτε να την φτιάξετε ως ξεχωριστό έργο συμφωνα με το branche αυτού του GITHUB: https://github.com/nektarios25ma/pc-game-that-connect-arduino-and-processing-ide/tree/ultrasonic-avoid-obsacle-game

2)'Ενα παιχνίδι ping pong το οποίο ελέγχεται από ένα ποτενσιόμετρο(το 2ο)* ως περιστροφικό διακόπτη(Potentiometer Knob) και καθορίζει την θέση της ρακέτας. Αυτή την ιδιαίτερη λειτουργία της συσκευής μας μπορείτε να την φτιάξετε ως ξεχωριστό έργο συμφωνα με το branche αυτού του GITHUB: https://github.com/nektarios25ma/pc-game-that-connect-arduino-and-processing-ide/tree/ping-pong-pot-sellection

*Το 1ο ποτενσιόμτρο λειτουργεί ως ένας επιλογέας mode, μέσω του οποίου επιλέγουμε λειτουργία(δηλαδή ping pong,avoid obstacle game, DHT VALUES demonstation). 

3)Προσθέσαμε ένα αισθητήρα θερμοκρασίας - υγρασίας με αντίστοιχο πρόγραμμα processing pde που επιδεικνύει με όμορφο αναλογικό τρόπο την τιμές. Αυτή την ιδιαίτερη λειτουργία της συσκευής μας μπορείτε να την φτιάξετε ως ξεχωριστό έργο συμφωνα με το branche αυτού του GITHUB:https://github.com/nektarios25ma/pc-game-that-connect-arduino-and-processing-ide/tree/temperature-and-humidity-analog-circle-graph+ 

Φτιάξαμε επίσης μέσω του tinkercad 3d-stl κουτί για την τοποθέτηση των συσκευών μας. Ο σχεδιασμός του 3D κουτιού όπως και των υπόλοιπων 3D κομματιών έγινε από τα παιδιά και εκτυπώθηκε από τον Αναστασάκη Νίκο-ΕΚΦΕ ΧΑΝΙΩΝ που συνδράμει πάντοτε στα έργα μας. 

γ)κόστος και δ)υλικά

ARDUINO UNO = €23.92 LINK: https://grobotronics.com/arduino-uno-rev3.html
BREADBOARD + Proto Shield X2= €7,40 LINK: https://grobotronics.com/proto-shield-for-arduino-uno-with-mini-breadboard.html
SENSOR Potentiometer Linear B10Kohm Χ2=€1.60 LINK: https://grobotronics.com/potentiometer-linear-b10kohm-stereo-d6mm-h9mm-pcb.html
Ultrasonic Module Distance for Arduino=€1,88 LINK: https://www.hellasdigital.gr/electronics/sensors/ultasonic/hc-sr04-ultrasonic-module-distance-measuring-transducer-sensor-for-arduino/
ARDUINO NANO CLONE=€11,99 LINK: https://www.hellasdigital.gr/go-create/arduino/arduino-nano-v3.0-w-atmega328p/
Arduino Nano IO Expansion Shield=€3,45 LINK:https://www.hellasdigital.gr/electronics/prototyping/modules/nano-i-o-expansion-shield-for-arduino-uno-r3/
Bluetooth Module for Arduino - HC05=€6.80 LINK : https://grobotronics.com/bluetooth-module-for-arduino-hc05.html
Αισθητήρας Θερμοκρασίας & Υγρασίας AM2302 (DHT22) = €6.90 Link : https://grobotronics.com/rht03-dht22.html
Jumper Cables = €9,60 link: https://grobotronics.com/ribbon-40wire-20cm-female-to-ale.html και https://grobotronics.com/breadboard-jumper-wires-140pcs.html
ΣΥΝΟΛΟ=100€

δ. Λίστα  εργαλείων

Arduino ide & processing ide -→software

και κατσαβίδι ,κολλητήρι, και 3D εκτυπωτής (ΕΚΦΕ ΧΑΝΙΩΝ)-→hardware

ε. Σχέδια (Μηχανισμοί και ηλεκτρονικά)

ΣΧΗΜΑΤΙΚΟ ΔΙΑΓΡΑΜΜΑ ΕΝΩΣΕΩΝ-SCHAMETIC ,PIN OUT: https://www.tinkercad.com/things/53lLq5LIQLN-hsr04-connection/editel?sharecode=PmCyip97oHABN1HMhwtkbMbY11XmnVlXyoVj72j1bXw  ή 
 η εικόνα-png all-schematic στο GITHUB.

Επίσης τα 3D STL αρχεία στο GITHUB : https://github.com/nektarios25ma/pc-game-that-connect-arduino-and-processing-ide/tree/main/3d-STL%20FILES%20FOR%20Placing%20devices

στ. Βασικός αλγόριθμος

Ο Κώδικας που εκτελεί όλες τις λειτουργίες και είναι εγκατεστημένος στο μικροελεγκτή :
PONGINOCOMPLEXf.ino →όνομα του στο GITHUB και link:
 https://github.com/nektarios25ma/pc-game-that-connect-arduino-and-processing-ide/blob/main/PONGINOCOMPLEXf.ino
με σχόλια για την κατανόησή του.

->Τα 3 pde -σχέδια ή προγράμματα που τρέχουν στο pc μας (processing ide) είναι (GITHUB):

α)για την αποφυγή εμποδίων: https://github.com/nektarios25ma/pc-game-that-connect-arduino-and-processing-ide/blob/main/flappy1try.pde

β)ping pong: https://github.com/nektarios25ma/pc-game-that-connect-arduino-and-processing-ide/blob/main/pongFINALpde2.pde

γ) για την επίδειξη θερμοκρασίας -υγρασίας: https://github.com/nektarios25ma/pc-game-that-connect-arduino-and-processing-ide/blob/main/PROCESSING_DHTB.pde

3. Υλοποίηση-Αποτελεσματικότητα – αρτιότητα

Το αποτέλεσμα είναι ικανοποιητικό όπως φαίνεται και απο το βίντεο.


Σελίδα github: https://github.com/nektarios25ma/pc-game-that-connect-arduino-and-processing-ide

Σελίδα robotics.ellak : https://openedtech.ellak.gr/robotics2023/omada-gamers-pc-game-that-connect-arduino-and-processing-ide/

Βίντεο από μαθητές:
ΕΞΗΓΗΣΗ VIDEO LINK : https://youtu.be/FJJp1MoLb2Q

IN ENGLISH: https://drive.google.com/file/d/1eoebnZaPJoS6Eic72A88gzOE-BJhELMh/view?usp=sharing

References/Sources:

Α. WIKI: https://en.wikipedia.org/wiki/Processing

B.PROJECT:
1.https://processing.org/
2.https://www.youtube.com/watch?v=YgjsWvFRpSE
3.https://circuitdigest.com/microcontroller-projects/ping-pong-game-using-arduino-accelerometer
4.https://www.youtube.com/watch?v=Rc_sbgp6Eho




