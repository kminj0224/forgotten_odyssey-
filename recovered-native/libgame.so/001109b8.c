/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001109b8  Symbol: Hero_Lethal_Mir */

/* Hero_Lethal_Mir(void*) */

void Hero_Lethal_Mir(void *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  CCObject *this;
  CCLayer *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar5 = *(int *)((int)param_1 + 4);
  iVar4 = DAT_00110a70 + 0x1109c4;
  uVar2 = __addsf3(*(undefined4 *)(iVar5 + 0x3c),**(undefined4 **)(iVar4 + DAT_00110a74));
  *(undefined4 *)(iVar5 + 0x3c) = uVar2;
  iVar6 = *(int *)((int)param_1 + 4);
  uVar7 = __extendsfdf2(*(undefined4 *)(iVar6 + 0x3c));
  iVar5 = __aeabi_dcmpgt((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_00110a60,DAT_00110a64);
  if (iVar5 != 0) {
    *(undefined4 *)(iVar6 + 0x110) = DAT_00110a78;
    pCVar3 = **(CCLayer ***)(iVar4 + DAT_00110a7c);
    uVar7 = __extendsfdf2(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x38));
    uVar8 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar4 + DAT_00110a80) +
                                                   **(int **)(iVar4 + DAT_00110a88) * 0x6c +
                                                  DAT_00110a8c) + 0x21) * 2 +
                                       *(int *)(iVar4 + DAT_00110a84)));
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_00110a68,DAT_00110a6c);
    __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    bVar1 = (bool)__truncdfsf2();
    this = (CCObject *)Unit_Live_Collistion_attck(pCVar3,extraout_s0,bVar1,extraout_s1,false);
    if (this != (CCObject *)0x0) {
      cocos2d::CCObject::release(this);
    }
  }
  return;
}


