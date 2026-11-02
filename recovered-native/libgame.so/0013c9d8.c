/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c9d8  Symbol: update */

/* cocos2d::CCTintTo::update(float) */

float __thiscall cocos2d::CCTintTo::update(CCTintTo *this,float param_1)

{
  CCTintTo CVar1;
  CCTintTo CVar2;
  undefined uVar3;
  undefined uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_r1;
  code *pcVar8;
  float extraout_s0;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  
  if ((*(int *)(this + 0x18) != 0) &&
     (puVar5 = (undefined4 *)
               __dynamic_cast(*(int *)(this + 0x18),*(undefined4 *)(DAT_0013caac + 0x13c9f0),
                              *(undefined4 *)(DAT_0013cab0 + 0x13c9f2),0xfffffffe),
     param_1 = extraout_s0, puVar5 != (undefined4 *)0x0)) {
    pcVar8 = *(code **)*puVar5;
    CVar1 = this[0x2c];
    CVar2 = this[0x2d];
    uVar6 = __floatsisf((uint)(byte)CVar2);
    uVar7 = __floatsisf((uint)(byte)this[0x2a] - (uint)(byte)CVar2);
    uVar7 = __mulsf3(uVar7,in_r1);
    __addsf3(uVar6,uVar7);
    uVar3 = __fixsfsi();
    CVar2 = this[0x2e];
    uVar6 = __floatsisf((uint)(byte)CVar2);
    uVar7 = __floatsisf((uint)(byte)this[0x2b] - (uint)(byte)CVar2);
    uVar7 = __mulsf3(uVar7,in_r1);
    __addsf3(uVar6,uVar7);
    uVar4 = __fixsfsi();
    uVar6 = __floatsisf((uint)(byte)CVar1);
    uVar7 = __floatsisf((uint)(byte)this[0x29] - (uint)(byte)CVar1);
    uVar7 = __mulsf3(uVar7,in_r1);
    __addsf3(uVar6,uVar7);
    local_1c = __fixunssfsi();
    local_1b = uVar3;
    local_1a = uVar4;
    param_1 = (float)(*pcVar8)(puVar5,&local_1c);
  }
  return param_1;
}


