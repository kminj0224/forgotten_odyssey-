/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001107d0  Symbol: Hero_Lethal_Reina */

/* Hero_Lethal_Reina(void*) */

undefined8 Hero_Lethal_Reina(void *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  CCObject *this;
  undefined4 in_r1;
  int iVar3;
  int iVar4;
  CCLayer *pCVar5;
  int iVar6;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar7;
  undefined8 uVar8;
  void *local_20;
  
  iVar3 = *(int *)((int)param_1 + 4);
  iVar6 = DAT_00110878 + 0x1107dc;
  uVar2 = __addsf3(*(undefined4 *)(iVar3 + 0x3c),**(undefined4 **)(iVar6 + DAT_0011087c));
  *(undefined4 *)(iVar3 + 0x3c) = uVar2;
  iVar4 = *(int *)((int)param_1 + 4);
  iVar3 = __aeabi_fcmpgt(*(undefined4 *)(iVar4 + 0x3c),0x3fc00000);
  local_20 = param_1;
  if (iVar3 != 0) {
    *(undefined4 *)(iVar4 + 0x110) = DAT_00110880;
    pCVar5 = **(CCLayer ***)(iVar6 + DAT_00110884);
    uVar7 = __extendsfdf2(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x38));
    uVar8 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar6 + DAT_00110888) +
                                                   **(int **)(iVar6 + DAT_00110890) * 0x6c +
                                                  DAT_00110894) + 0x21) * 2 +
                                       *(int *)(iVar6 + DAT_0011088c)));
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_00110870,DAT_00110874);
    __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    bVar1 = (bool)__truncdfsf2();
    local_20 = (void *)0x0;
    this = (CCObject *)Unit_Live_Collistion_attck(pCVar5,extraout_s0,bVar1,extraout_s1,false);
    if (this != (CCObject *)0x0) {
      cocos2d::CCObject::release(this);
    }
  }
  return CONCAT44(in_r1,local_20);
}


