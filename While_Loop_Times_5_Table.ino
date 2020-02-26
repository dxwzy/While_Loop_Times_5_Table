
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  int a=5;
  while(a<51){
    Serial.println(a);
    a = a+5;
    }
    delay(3000);
}
