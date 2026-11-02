/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00114be8  Symbol: Unit_Attack_Time */

/* Unit_Attack_Time(cocos2d::CCLayer*, void*, cocos2d::CCNode*) */

undefined4 Unit_Attack_Time(CCLayer *param_1,void *param_2,CCNode *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  CCNode *pCVar6;
  
  iVar3 = *(int *)((int)param_2 + 4);
  uVar1 = 0;
  if (*(int *)(iVar3 + 100) < 3) {
    pCVar6 = param_3;
    uVar4 = __extendsfdf2(*(undefined4 *)(iVar3 + 0x3c));
    uVar5 = __extendsfdf2(*(undefined4 *)(iVar3 + 0x40));
    uVar5 = __muldf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_00114d00,DAT_00114d04,uVar4,
                     pCVar6);
    iVar2 = __aeabi_dcmpgt((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar5,
                           (int)((ulonglong)uVar5 >> 0x20));
    if (((iVar2 != 0) && (*(char *)(iVar3 + 0x2c) == '\0')) && (*(char *)(iVar3 + 0x13c) == '\0')) {
      iVar3 = ani_Att_Sound(*(int *)(iVar3 + 4));
      if (iVar3 == 0) {
        ani_Att_Sound(*(int *)(*(int *)((int)param_2 + 4) + 4) + DAT_00114d08);
      }
      *(undefined *)(*(int *)((int)param_2 + 4) + 0x13c) = 1;
    }
    iVar3 = *(int *)(*(int *)((int)param_2 + 4) + 4);
    if (iVar3 == 0xb4) {
      uVar1 = Unit_180_Attack_Time(param_1,(_Unit_Stage *)param_2,param_3);
    }
    else {
      if (iVar3 < 0xb5) {
        if (iVar3 == 0x82) {
          uVar1 = Unit_130_Attack_Time(param_1,(_Unit_Stage *)param_2,param_3);
          return uVar1;
        }
        if (iVar3 == 0xa0) {
          uVar1 = Unit_160_Attack_Time(param_1,(_Unit_Stage *)param_2,param_3);
          return uVar1;
        }
        if (iVar3 == 0x6e) {
          uVar1 = Unit_110_Attack_Time(param_1,(_Unit_Stage *)param_2,param_3);
          return uVar1;
        }
      }
      else {
        if (iVar3 == DAT_00114d0c) {
          uVar1 = Unit_2100_Attack_Time(param_1,(_Unit_Stage *)param_2,param_3);
          return uVar1;
        }
        if (iVar3 == DAT_00114d0c || iVar3 < DAT_00114d0c) {
          if (iVar3 == 0xe6) {
            uVar1 = Unit_230_Attack_Time(param_1,(_Unit_Stage *)param_2,param_3);
            return uVar1;
          }
        }
        else {
          if (iVar3 == 0xaf0) {
            uVar1 = Unit_2800_Attack_Time(param_1,(_Unit_Stage *)param_2,param_3);
            return uVar1;
          }
          if (iVar3 == DAT_00114d10) {
            uVar1 = Unit_8020_Attack_Time(param_1,(_Unit_Stage *)param_2,param_3);
            return uVar1;
          }
        }
      }
      uVar1 = Unit_default_Attack_Time(param_1,(_Unit_Stage *)param_2,param_3);
    }
  }
  return uVar1;
}


