

void display(byte pattern[]) {
  for(byte i = 0; i < 8; i++) {
    digitalWrite(rows[i], HIGH);
      for(byte a = 0; a < 8; a++) {
        digitalWrite(cols[a], (pattern[i] >> a) & 0x01);        
          digitalWrite(cols[a], 1);
      }
        digitalWrite(rows[i], LOW);
      }
  }
