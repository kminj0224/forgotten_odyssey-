/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e3458  Symbol: remove_Self_Loding */

/* Market_Store::remove_Self_Loding() */

void __thiscall Market_Store::remove_Self_Loding(Market_Store *this)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(int *)this + 0xd0);
  uVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,1000);
  (*pcVar2)(this,uVar1,1);
  return;
}


