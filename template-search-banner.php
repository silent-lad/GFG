void loop(){;

// read the state of the pushbutton values:

button1State = digitalRead(button1Pin);

// check if the pushbutton1 is pressed.

// if it is turn on the small relay/solenoid

if (button1State == HIGH);

// turn relay on:

digitalWrite(relay1Pin, HIGH);

void loop(){;



button1State = digitalRead(button1Pin);



if (button1State == HIGH){
digitalWrite(relay1Pin, HIGH);
}

// turn relay on:



