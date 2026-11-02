/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d77e4  Symbol: Draw_Cahs */

/* Market_Equip::Draw_Cahs(int) */

void Market_Equip::Draw_Cahs(int param_1)

{
  In_App_Layer *this;
  int in_r1;
  
  this = (In_App_Layer *)In_App_Layer::node();
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,this,0x68,0x68);
  In_App_Layer::In_App_Layer_Init(this,in_r1,3,3);
  **(undefined4 **)(DAT_000d7818 + 0xd7814) = 0xb;
  return;
}


