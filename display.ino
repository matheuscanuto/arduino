#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
#define DP 9

byte cont = 0;

const byte tabela_7seg[10][7] = 
{ //A B C D E F G
  { 1,1,1,1,1,1,0},  //0
  { 0,1,1,0,0,0,0}, //1
  { 1,1,0,1,1,0,1}, //2
  { 1,1,1,1,0,0,1}, //3 
  { 0,1,1,0,0,1,1}, //4
  { 1,0,1,1,0,1,1}, //5
  { 1,0,1,1,1,1,1}, //6
  { 1,1,1,0,0,0,0}, //7
  { 1,1,1,1,1,1,1}, //8
  { 1,1,1,1,0,1,1}  //9  
};

void converteValorDisplay(byte valor){
  byte pino = 2;
 
  for(byte x = 0;x<7;x++){
    digitalWrite(pino,tabela_7seg[valor][x]);
    pino++;
  }
}


void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);
}

void loop()
{
  converteValorDisplay(cont);
  if(cont<9)cont++;
  delay(1000);
}
 
