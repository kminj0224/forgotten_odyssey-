/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011cf2c  Symbol: Slot_Rmove */

/* New_Notice::Slot_Rmove() */

void __thiscall New_Notice::Slot_Rmove(New_Notice *this)

{
  MainMenuLayer *this_00;
  
  RemoveData(*(int *)(this + 0x128));
  *(undefined4 *)(this + 0x128) = 0xffffffff;
  this_00 = (MainMenuLayer *)(**(code **)(*(int *)this + 0x90))(this);
  MainMenuLayer::AllRmove();
  MainMenuLayer::FileLode(this_00);
  return;
}


