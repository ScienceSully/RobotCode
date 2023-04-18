int trig = 2;
int echo = 3;
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = duration * 0.034/2;
  Serial.print("Distance:");
  Serial.println(distance);
  if (distance < 40){
    Stop();
    delay(500);
  
  }
  else{

  }
}





