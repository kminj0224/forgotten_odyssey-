/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00160200  Symbol: canAttachWithIME */

/* cocos2d::CCTextFieldTTF::canAttachWithIME() */

byte __thiscall cocos2d::CCTextFieldTTF::canAttachWithIME(CCTextFieldTTF *this)

{
  byte bVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(this + 0x1e8);
  bVar1 = 1;
  if (puVar2 != (undefined4 *)0x0) {
    bVar1 = (**(code **)*puVar2)(puVar2,this);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}


