/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d4f60  Symbol: Not_is_CP */

/* In_App_Layer::Not_is_CP() */

void __thiscall In_App_Layer::Not_is_CP(In_App_Layer *this)

{
  New_Notice *this_00;
  
  In_App_Layer_Init(this,0);
  this_00 = (New_Notice *)New_Notice::node();
  New_Notice::noticeWithType(this_00,(char *)(DAT_000d4f90 + 0xd4f78),0xc,0);
  (**(code **)(*(int *)this + 0xcc))(this,this_00,DAT_000d4f94);
  return;
}


