/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013cab4  Symbol: update */

/* cocos2d::CCFadeTo::update(float) */

undefined8 cocos2d::CCFadeTo::update(float param_1)

{
  byte bVar1;
  undefined uVar2;
  int in_r0;
  int *piVar3;
  undefined4 uVar4;
  undefined4 in_r1;
  int iVar5;
  undefined4 local_1c;
  
  local_1c = in_r1;
  if ((*(int *)(in_r0 + 0x18) != 0) &&
     (piVar3 = (int *)__dynamic_cast(*(int *)(in_r0 + 0x18),*(undefined4 *)(DAT_0013cb10 + 0x13caca)
                                     ,*(undefined4 *)(DAT_0013cb14 + 0x13cacc),0xfffffffe),
     piVar3 != (int *)0x0)) {
    bVar1 = *(byte *)(in_r0 + 0x2a);
    iVar5 = *piVar3;
    local_1c = __floatsisf((uint)bVar1);
    uVar4 = __floatsisf((uint)*(byte *)(in_r0 + 0x29) - (uint)bVar1);
    uVar4 = __mulsf3(uVar4,in_r1);
    __addsf3(local_1c,uVar4);
    uVar2 = __fixunssfsi();
    (**(code **)(iVar5 + 0xc))(piVar3,uVar2);
  }
  return CONCAT44(local_1c,in_r1);
}


