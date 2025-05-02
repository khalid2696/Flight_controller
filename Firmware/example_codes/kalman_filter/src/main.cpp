#include <mbed.h>
#include <iostream>
#include <kalman.h>

using namespace std;
Serial pc(USBTX, USBRX);

int counter = 0;
int main() {
  pc.baud(115200);
  Timer abc, def;
  long tim;
  abc.start();
  def.start();
  float uk =  20*3.14159/180;
  float y = 1*3.14159/180;
  start:
  abc.reset();
  att_kf.run(uk, y);
  tim = abc.read_us();
  counter++;
  if(counter == 100){
    counter = 0;
    def.reset();
    cout<<att_kf.Xk<<"\n\n"<<att_kf.uk<<" "<<att_kf.Yk1<<" "<<tim<<def.read_us()<<"\n\n";
  }
  wait(0.004);
  goto start;

return 0;
}
