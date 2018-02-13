#include "Entropy.h"
#include <StandardCplusplus.h>
#include <system_configuration.h>
#include <unwind-cxx.h>
#include <utility.h>
#include <serstream>
#include <string>
//#include <vector>
//#include <iterator>
//#include <map>

using namespace std;


Entropy e;

char str[501];
unsigned long time1;
unsigned long time2;
size_t k = 255;
void setup() {
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Program ready");
  fillString();
  Serial.println("String ready");
  time1 = millis();
  float minE=0;
  //6.3.1
  //minE = e.mostCommonValueEstimate(&str[0], 500);
  //6.3.2
  //minE = e.collisionEstimate(&str[0], 100);
  //6.3.3
  //minE = e.markovEstimate(&str[0],100);
  //6.3.4
  //minE = e.compressionEstimate(&str[0],21);
  //6.3.5
  //minE = e.tTupleEstimate(&str[0],21);
  //6.3.6
  //minE = e.lrsEstimate(&str[0],10);
  //6.3.7
  //minE = e.multiMCWEstimate(&str[0],10);
  //6.3.8
  //minE = e.lagPredictionEstimate(&str[0],5);
  //6.3.9
  //minE = e.multiMMCEstimate(&str[0],12);
  //6.3.10
  //float minE = e.LZ78YEstimate(&str[0], 12);

  time2 = millis();
  Serial.println(minE);
  Serial.println(time2 - time1);

  for (;;) {
    delay(1000);
  }
}

void fillString() {
  for (int i = 0; i < 21; i++) {
    str[i] = random(3) + '0';
    
  }
}
