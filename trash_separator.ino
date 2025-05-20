// Pin assignments 
const int moisturePin = A0; 
const int redLEDPin = 8; 
const int greenLEDPin = 9; 
 
// Thresholds (tweak based on your sensor's range)
const int dryThreshold = 700; // Adjust based on actual readings 
 
void setup() { 
  pinMode(redLEDPin, OUTPUT); 
  pinMode(greenLEDPin, OUTPUT); 
  Serial.begin(9600); // For monitoring sensor values 
} 
 
void loop() { 
  int moistureValue = analogRead(moisturePin); 
  Serial.print("Moisture Value: "); 
  Serial.println(moistureValue); 
 
  if (moistureValue > dryThreshold) { 
    // Dry: Red ON, Green OFF 
    digitalWrite(redLEDPin, HIGH); 
    digitalWrite(greenLEDPin, LOW); 
  } else { 
    // Wet: Green ON, Red OFF 
    digitalWrite(greenLEDPin, HIGH); 
    digitalWrite(redLEDPin, LOW); 
  } 
 
  delay(50); // Wait 1 second before next reading 
} 
