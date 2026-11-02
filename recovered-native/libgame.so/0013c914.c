/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c914  Symbol: update */

/* cocos2d::CCTintBy::update(float) */

float __thiscall cocos2d::CCTintBy::update(CCTintBy *this,float param_1)

{
  undefined uVar1;
  undefined uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_r1;
  code *pcVar6;
  float extraout_s0;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  
  if ((*(int *)(this + 0x18) != 0) &&
     (puVar3 = (undefined4 *)
               __dynamic_cast(*(int *)(this + 0x18),*(undefined4 *)(DAT_0013c9d0 + 0x13c92c),
                              *(undefined4 *)(DAT_0013c9d4 + 0x13c92e),0xfffffffe),
     param_1 = extraout_s0, puVar3 != (undefined4 *)0x0)) {
    pcVar6 = *(code **)*puVar3;
    uVar4 = __floatsisf((int)*(short *)(this + 0x32));
    uVar5 = __floatsisf((int)*(short *)(this + 0x2c));
    uVar5 = __mulsf3(uVar5,in_r1);
    __addsf3(uVar4,uVar5);
    uVar1 = __fixunssfsi();
    uVar4 = __floatsisf((int)*(short *)(this + 0x34));
    uVar5 = __floatsisf((int)*(short *)(this + 0x2e));
    uVar5 = __mulsf3(uVar5,in_r1);
    __addsf3(uVar4,uVar5);
    uVar2 = __fixunssfsi();
    uVar4 = __floatsisf((int)*(short *)(this + 0x30));
    uVar5 = __floatsisf((int)*(short *)(this + 0x2a));
    uVar5 = __mulsf3(uVar5,in_r1);
    __addsf3(uVar4,uVar5);
    local_1c = __fixunssfsi();
    local_1b = uVar1;
    local_1a = uVar2;
    param_1 = (float)(*pcVar6)(puVar3,&local_1c);
  }
  return param_1;
}


