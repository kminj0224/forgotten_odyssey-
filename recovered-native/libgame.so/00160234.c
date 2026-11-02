/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00160234  Symbol: canDetachWithIME */

/* cocos2d::CCTextFieldTTF::canDetachWithIME() */

byte __thiscall cocos2d::CCTextFieldTTF::canDetachWithIME(CCTextFieldTTF *this)

{
  byte bVar1;
  int *piVar2;
  
  piVar2 = *(int **)(this + 0x1e8);
  bVar1 = 1;
  if (piVar2 != (int *)0x0) {
    bVar1 = (**(code **)(*piVar2 + 4))(piVar2,this);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}


