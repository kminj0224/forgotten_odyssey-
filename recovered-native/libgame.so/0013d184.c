/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d184  Symbol: update */

/* cocos2d::CCBlink::update(float) */

float __thiscall cocos2d::CCBlink::update(CCBlink *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  float extraout_s0;
  float __x;
  float __y;
  
  if ((*(int *)(this + 0x18) != 0) &&
     (iVar1 = (**(code **)(*(int *)this + 0x14))(), param_1 = extraout_s0, iVar1 == 0)) {
    uVar2 = __floatunsisf(*(undefined4 *)(this + 0x2c));
    uVar2 = __divsf3(0x3f800000,uVar2);
    fmodf(__x,__y);
    uVar2 = __mulsf3(uVar2,0x3f000000);
    iVar1 = __aeabi_fcmpgt(in_r1,uVar2);
    param_1 = (float)(**(code **)(**(int **)(this + 0x18) + 0x6c))
                               (*(int **)(this + 0x18),iVar1 != 0);
  }
  return param_1;
}


