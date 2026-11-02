/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e7378  Symbol: set_In_App_Layer */

/* MarketLayer::set_In_App_Layer(int) */

void MarketLayer::set_In_App_Layer(int param_1)

{
  In_App_Layer *this;
  int in_r1;
  
  this = (In_App_Layer *)In_App_Layer::node();
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,this,300);
  In_App_Layer::In_App_Layer_Init
            (this,in_r1,**(int **)(DAT_000e73ac + 0xe73a0),**(int **)(DAT_000e73ac + 0xe73a0));
  return;
}


