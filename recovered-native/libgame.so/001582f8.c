/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001582f8  Symbol: update */

/* cocos2d::CCAccelerometer::update(float, float, float, long) */

undefined8 __thiscall
cocos2d::CCAccelerometer::update
          (CCAccelerometer *this,float param_1,float param_2,float param_3,long param_4)

{
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 in_stack_00000000;
  
  uVar2 = CONCAT44(param_2,param_1);
  puVar1 = *(undefined4 **)this;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = __extendsfdf2(param_4);
    uVar2 = __divdf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_00158368,DAT_0015836c);
    *(int *)(this + 8) = (int)uVar2;
    *(int *)(this + 0xc) = (int)((ulonglong)uVar2 >> 0x20) + -0x80000000;
    uVar2 = __extendsfdf2(in_r2);
    uVar2 = __divdf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_00158368,DAT_0015836c);
    *(int *)(this + 0x10) = (int)uVar2;
    *(int *)(this + 0x14) = (int)((ulonglong)uVar2 >> 0x20) + -0x80000000;
    uVar2 = __extendsfdf2(in_r3);
    uVar2 = __divdf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_00158368,DAT_0015836c);
    *(int *)(this + 0x18) = (int)uVar2;
    *(int *)(this + 0x1c) = (int)((ulonglong)uVar2 >> 0x20) + -0x80000000;
    uVar2 = __floatsidf(in_stack_00000000);
    *(undefined8 *)(this + 0x20) = uVar2;
    uVar2 = (**(code **)*puVar1)(puVar1,this + 8);
  }
  return uVar2;
}


