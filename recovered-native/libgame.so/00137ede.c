/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137ede  Symbol: update */

/* cocos2d::CCEaseOut::update(float) */

void __thiscall cocos2d::CCEaseOut::update(CCEaseOut *this,float param_1)

{
  undefined4 in_r1;
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  piVar1 = *(int **)(this + 0x2c);
  pcVar2 = *(code **)(*piVar1 + 0x10);
  uVar3 = __divsf3(0x3f800000,*(undefined4 *)(this + 0x30));
  powf((float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  (*pcVar2)(piVar1,in_r1);
  return;
}


