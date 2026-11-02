/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00110898  Symbol: Hero_Lethal_Kris */

/* Hero_Lethal_Kris(void*) */

void Hero_Lethal_Kris(void *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  CCObject *this;
  int iVar3;
  CCLayer *pCVar4;
  int iVar5;
  int iVar6;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar6 = *(int *)((int)param_1 + 4);
  iVar5 = DAT_00110998 + 0x1108a4;
  uVar2 = __addsf3(*(undefined4 *)(iVar6 + 0x3c),**(undefined4 **)(iVar5 + DAT_0011099c));
  *(undefined4 *)(iVar6 + 0x3c) = uVar2;
  iVar3 = *(int *)((int)param_1 + 4);
  uVar7 = __extendsfdf2(*(undefined4 *)(iVar3 + 0x3c));
  uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
  iVar6 = __aeabi_dcmpgt((int)uVar7,uVar2,DAT_00110980,DAT_00110984);
  if (iVar6 != 0) {
    uVar7 = __subdf3((int)uVar7,uVar2,DAT_00110980,DAT_00110984);
    __divdf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_00110988,DAT_0011098c);
    uVar2 = __truncdfsf2();
    uVar7 = __mulsf3(uVar2,DAT_001109a0);
    cocos2d::CCSize::CCSize((CCSize *)&local_20,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    *(undefined4 *)(iVar3 + 0x110) = local_20;
    *(undefined4 *)(iVar3 + 0x114) = local_1c;
    pCVar4 = **(CCLayer ***)(iVar5 + DAT_001109a4);
    uVar7 = __extendsfdf2(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x38));
    uVar8 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar5 + DAT_001109a8) +
                                                   **(int **)(iVar5 + DAT_001109b0) * 0x6c +
                                                  DAT_001109b4) + 0x21) * 2 +
                                       *(int *)(iVar5 + DAT_001109ac)));
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_00110990,DAT_00110994);
    __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    bVar1 = (bool)__truncdfsf2();
    this = (CCObject *)Unit_Live_Collistion_attck(pCVar4,extraout_s0,bVar1,extraout_s1,false);
    if (this != (CCObject *)0x0) {
      cocos2d::CCObject::release(this);
    }
  }
  return;
}


