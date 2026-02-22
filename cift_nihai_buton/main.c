#include "C:\Users\ACER\Desktop\cift_nihai_buton\main.h"

int yon=0;

void main()
{

   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DIV_BY_4,249,1);
   setup_ccp1(CCP_PWM);
   set_pwm1_duty(125);
   setup_comparator(NC_NC_NC_NC);
   setup_vref(FALSE);
   output_high(pin_b7);

   while(true)
   {
      if(input(pin_a0)==1 && yon==0 )
      {
         yon=1;
         output_low(pin_b7);
         set_pwm1_duty(0);  
         delay_ms(4000);
         set_pwm1_duty(125);
      }
      
      if(input(pin_a1)==1 && yon==1 )
      {
         yon=0;
         output_high(pin_b7);
         set_pwm1_duty(0);  
         delay_ms(4000);
         set_pwm1_duty(125);
      }      
      
      
      
   }

}

