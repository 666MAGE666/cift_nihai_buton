#include "C:\Users\ACER\Desktop\cift_nihai_buton\ciftli_nihai_button.h"
#define alt_but pin_a0
#define ust_but pin_a1
#define hareket_but pin_a2
int i=0; 

void main()
{

   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_comparator(NC_NC_NC_NC);
   setup_vref(FALSE);
   output_b(0);

   while(true)
   {
      
      //////// ilk hareket ///////////
      if(input(hareket_but)==1 && i==0)
      {
            while(input(hareket_but)==1 && i==0);
            output_toggle(pin_b0);
      }
     //////////////////////////////////
     
      if(input(hareket_but)==1 && i==1)
      {
            while(input(hareket_but)==1 && i==0);
            output_toggle(pin_b1);
      }
     //////////////////////////////////     
     
      if(input(alt_but)==1)
      {
            output_low(pin_b0);
            i=1;
      }      
      
      if(input(ust_but)==1)
      {
            output_low(pin_b1);
            i=0;
      }      
   
         
   
   
   }

}
