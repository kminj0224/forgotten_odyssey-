/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00110a90  Symbol: Hero_Lethal_Tao */

/* Hero_Lethal_Tao(void*) */

undefined8 Hero_Lethal_Tao(void *param_1)

{
  undefined4 uVar1;
  CCObject *this;
  undefined4 in_r1;
  int iVar2;
  int iVar3;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar4;
  void *local_18;
  
  iVar2 = *(int *)((int)param_1 + 4);
  uVar1 = __addsf3(*(undefined4 *)(iVar2 + 0x3c),**(undefined4 **)(DAT_00110ae8 + 0x110a9c));
  *(undefined4 *)(iVar2 + 0x3c) = uVar1;
  iVar3 = *(int *)((int)param_1 + 4);
  uVar4 = __extendsfdf2(*(undefined4 *)(iVar3 + 0x3c));
  iVar2 = __aeabi_dcmpgt((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_00110ae0,DAT_00110ae4);
  local_18 = param_1;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar3 + 0x110) = DAT_00110aec;
    local_18 = (void *)0x0;
    this = (CCObject *)
           Unit_Live_Collistion_attck
                     (**(CCLayer ***)(DAT_00110af0 + 0x110ac8),extraout_s0,
                      SUB41(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x38),0),extraout_s1,false)
    ;
    if (this != (CCObject *)0x0) {
      cocos2d::CCObject::release(this);
    }
  }
  return CONCAT44(in_r1,local_18);
}


