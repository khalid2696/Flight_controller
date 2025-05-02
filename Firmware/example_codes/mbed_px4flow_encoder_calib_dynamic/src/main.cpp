
#include <mbed.h>
#include "BufferedSerial.h"
#include "px4flow.h"
#include "quadratureEncoder.h"

#define PIN_A PB_4
#define PIN_B PB_5

quadrature enco(PIN_A, PIN_B);
Timer tim;
BufferedSerial pc(USBTX, USBRX);
int disp(int);
long oldTime=0, diffTime_i2c = 0;

int old_counts = 0;
px4flow flow;

int main() {
  tim.start();
    pc.baud(115200);
    i2c.frequency(400e3);

    while (1) {
        wait(0.02);

           float dt = ((float)tim.read_us() - oldTime);
           float rotation_speed = ((enco.counts-old_counts)/4000.0f*2.0*3.14159/dt)*1000000.0f;
           old_counts  = enco.counts;
           oldTime    = tim.read_us();
           float gx_flow_frame = 0;
           float gy_flow_frame = rotation_speed;

           flow.update_flow(gx_flow_frame, gy_flow_frame);
        disp(flow.frame.frame_count);
        pc.printf("%d ",flow.frame2.frame_count_since_last_readout);
        disp(tim.read_ms());
        pc.printf("%d ",flow.frame2.integration_timespan);
        disp(flow.frame.quality);
         pc.printf("%f ",enco.counts/4000.0*360.0);// counts/cpr*360degrees

         pc.printf("%f %f %f ",flow.y_flow_unGyroCompensated, flow.y_flow_gyroCompensated,gx_flow_frame);
         pc.printf("%f %f %f ",flow.x_flow_unGyroCompensated, flow.x_flow_gyroCompensated,gy_flow_frame);


        pc.printf("\n");
    }
}
int disp(int abc)
{
  pc.printf("%5d ", abc);
  // tele.printf("%5d ", abc);
  return 0;
}
