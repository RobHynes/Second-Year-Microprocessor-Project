#include <MIDI.h>
#include <midi_Defs.h>
#include <midi_Message.h>
#include <midi_Namespace.h>
#include <midi_Settings.h>

MIDI_CREATE_DEFAULT_INSTANCE();

const int velocity = 127; //Max Velocity (range is 0-127)
const int channel = 1; //MIDI Channel 1 (out of 16)

void setup() {
  MIDI.begin();
}


void loop() {
  //  E B C D C B A
  //  A C E D C B
  //  C D E C A A
  //  D F A G F E
  //  C E D C B
  //  B C D E C A A
  
  // E
  MIDI.sendNoteOn(76, velocity, channel);  // Turn the note on.
  delay(1000);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(76, velocity, channel); // Turn the note off.
  // B
  MIDI.sendNoteOn(71, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(71, velocity, channel); // Turn the note off.
  // C
  MIDI.sendNoteOn(72, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(72, velocity, channel); // Turn the note off.
  // D
  MIDI.sendNoteOn(74, velocity, channel);  // Turn the note on.
  delay(1000);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(74, velocity, channel); // Turn the note off.
  // C
  MIDI.sendNoteOn(72, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(72, velocity, channel); // Turn the note off.
  // B
  MIDI.sendNoteOn(71, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(71, velocity, channel); // Turn the note off.
  // A
  MIDI.sendNoteOn(69, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(69, velocity, channel); // Turn the note off.

  delay(200);
  
  // A
  MIDI.sendNoteOn(69, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(69, velocity, channel); // Turn the note off.
  // C
  MIDI.sendNoteOn(72, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(72, velocity, channel); // Turn the note off.
  // E
  MIDI.sendNoteOn(76, velocity, channel);  // Turn the note on.
  delay(1000);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(76, velocity, channel); // Turn the note off.
  // D
  MIDI.sendNoteOn(74, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(74, velocity, channel); // Turn the note off.
  // C
  MIDI.sendNoteOn(72, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(72, velocity, channel); // Turn the note off.
  // B
  MIDI.sendNoteOn(71, velocity, channel);  // Turn the note on.
  delay(1200);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(71, velocity, channel); // Turn the note off.

  delay(200);
  
  // C
  MIDI.sendNoteOn(72, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(72, velocity, channel); // Turn the note off.
  // D
  MIDI.sendNoteOn(74, velocity, channel);  // Turn the note on.
  delay(1000);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(74, velocity, channel); // Turn the note off.
  // E
  MIDI.sendNoteOn(76, velocity, channel);  // Turn the note on.
  delay(1000);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(76, velocity, channel); // Turn the note off.
  // C
  MIDI.sendNoteOn(72, velocity, channel);  // Turn the note on.
  delay(1000);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(72, velocity, channel); // Turn the note off.
  // A
  MIDI.sendNoteOn(69, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(69, velocity, channel); // Turn the note off.
  // A
  MIDI.sendNoteOn(69, velocity, channel);  // Turn the note on.
  delay(1000);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(69, velocity, channel); // Turn the note off.

  delay(200);
  
  // D
  MIDI.sendNoteOn(74, velocity, channel);  // Turn the note on.
  delay(1000);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(74, velocity, channel); // Turn the note off.
  // F
  MIDI.sendNoteOn(77, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(77, velocity, channel); // Turn the note off.
  // A
  MIDI.sendNoteOn(69, velocity, channel);  // Turn the note on.
  delay(1000);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(69, velocity, channel); // Turn the note off.
  // G
  MIDI.sendNoteOn(79, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(79, velocity, channel); // Turn the note off.
  // F
  MIDI.sendNoteOn(77, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(77, velocity, channel); // Turn the note off.
  // E
  MIDI.sendNoteOn(76, velocity, channel);  // Turn the note on.
  delay(1000);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(76, velocity, channel); // Turn the note off.

  delay(200);
  
  // C
  MIDI.sendNoteOn(72, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(72, velocity, channel); // Turn the note off.
  // E
  MIDI.sendNoteOn(76, velocity, channel);  // Turn the note on.
  delay(1000);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(76, velocity, channel); // Turn the note off.
  // D
  MIDI.sendNoteOn(74, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(74, velocity, channel); // Turn the note off.
  // C
  MIDI.sendNoteOn(72, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(72, velocity, channel); // Turn the note off.
  // B
  MIDI.sendNoteOn(71, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(71, velocity, channel); // Turn the note off.

  delay(200);

  // B
  MIDI.sendNoteOn(71, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(71, velocity, channel); // Turn the note off.
  // C
  MIDI.sendNoteOn(72, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(72, velocity, channel); // Turn the note off.
  // D
  MIDI.sendNoteOn(74, velocity, channel);  // Turn the note on.
  delay(1000);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(74, velocity, channel); // Turn the note off.
  // E
  MIDI.sendNoteOn(76, velocity, channel);  // Turn the note on.
  delay(1000);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(76, velocity, channel); // Turn the note off.
  // C
  MIDI.sendNoteOn(72, velocity, channel);  // Turn the note on.
  delay(1000);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(72, velocity, channel); // Turn the note off.
  // A
  MIDI.sendNoteOn(69, velocity, channel);  // Turn the note on.
  delay(500);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(69, velocity, channel); // Turn the note off.
  // A
  MIDI.sendNoteOn(69, velocity, channel);  // Turn the note on.
  delay(1000);                               // Wait 500 milliseconds.
  MIDI.sendNoteOff(69, velocity, channel); // Turn the note off.
  
  delay(1000);
}
