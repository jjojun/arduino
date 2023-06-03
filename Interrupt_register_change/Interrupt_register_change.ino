PCICR = 0x04;
PCMSK = 0x10;
SREG = 0x80;
ISR(PCINT2_vect){
piun_mask = PIND & 0x04;
if(pin_mask == 0x00){
}
