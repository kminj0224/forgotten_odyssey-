/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d4f28  Symbol: Not_is_Money */

/* In_App_Layer::Not_is_Money() */

void __thiscall In_App_Layer::Not_is_Money(In_App_Layer *this)

{
  New_Notice *this_00;
  
  In_App_Layer_Init(this,1);
  this_00 = (New_Notice *)New_Notice::node();
  New_Notice::noticeWithType(this_00,(char *)(DAT_000d4f58 + 0xd4f40),0xd,0);
  (**(code **)(*(int *)this + 0xcc))(this,this_00,DAT_000d4f5c);
  return;
}


