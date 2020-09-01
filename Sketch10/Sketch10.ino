/*
 Name:		Sketch10.ino
 Created:	7/28/2020 1:10:47 PM
 Author:	Janie
*/

int buttons[] = { 2,NULL,NULL,NULL,NULL,NULL};
int notes[] = { 262,294,330,349 };


// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(9600);
}

// the loop function runs over and over again until power down or reset
void loop() {
	int keyVal = analogRead(A0);
	Serial.println(keyVal);
	if (keyVal == 1023) {
		tone(8, notes[0]);
	}
	else if (keyVal >= 990 && keyVal <= 1010) {
		tone(8, notes[1]);
	}
	else if (keyVal >= 505 && keyVal <= 515) {
		tone(8, notes[2]);
	}
	else if (keyVal >= 5 && keyVal <= 10) {
		tone(8, notes[3]);
	}
	else {
		noTone(8);
	}
}
