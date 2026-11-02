/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00111ef8  Symbol: Unit_2800_Attack_Time */

/* Unit_2800_Attack_Time(cocos2d::CCLayer*, _Unit_Stage*, cocos2d::CCNode*) */

int * Unit_2800_Attack_Time(CCLayer *param_1,_Unit_Stage *param_2,CCNode *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  CCLayer *pCVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar6 = *(int *)(param_2 + 4);
  uVar9 = __extendsfdf2(*(undefined4 *)(iVar6 + 0x3c));
  uVar10 = __extendsfdf2(*(undefined4 *)(iVar6 + 0x40));
  uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_00111fe8,DAT_00111fec);
  iVar1 = __aeabi_dcmpge((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                         (int)((ulonglong)uVar10 >> 0x20));
  piVar7 = (int *)0x0;
  if (iVar1 != 0) {
    piVar7 = (int *)0x0;
    if (*(char *)(iVar6 + 0x2c) == '\0') {
      *(char *)(iVar6 + 0x2c) = '\x01';
      piVar2 = (int *)Unit_Collistion_Name(param_1,false);
      piVar7 = piVar2;
      if (piVar2 != (int *)0x0) {
        iVar1 = (**(code **)(*piVar2 + 0xa8))();
        iVar6 = *(int *)(iVar1 + 4);
        uVar3 = __subsf3(*(undefined4 *)(iVar6 + 0x24),*(undefined4 *)(*(int *)(param_2 + 4) + 0x38)
                        );
        *(undefined4 *)(iVar6 + 0x24) = uVar3;
        *(undefined *)(*(int *)(iVar1 + 4) + 0x124) = 1;
        if (*(int *)(**(int **)(DAT_00111ff0 + 0x111f76) + 0x2c) ==
            *(int *)(*(int *)(iVar1 + 4) + 4)) {
          *(undefined *)(*(int *)(iVar1 + 4) + 0x84) = 0;
        }
        piVar7 = (int *)0x1;
        if (param_3 != (CCNode *)0x0) {
          pCVar8 = **(CCLayer ***)(DAT_00111ff4 + 0x111f94);
          puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x38))(piVar2);
          __addsf3(*puVar4,DAT_00111ff8);
          iVar1 = __fixsfsi();
          iVar6 = (**(code **)(*piVar2 + 0x38))(piVar2);
          __addsf3(*(undefined4 *)(iVar6 + 4),DAT_00111ffc);
          iVar6 = __fixsfsi();
          iVar5 = (**(code **)(*piVar2 + 0x14))(piVar2);
          Effect::Effect_Draw((Effect *)param_3,pCVar8,0xaf0,iVar1,iVar6,iVar5,false);
        }
      }
    }
  }
  return piVar7;
}


