/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00113e48  Symbol: Unit_110_Attack_Time */

/* Unit_110_Attack_Time(cocos2d::CCLayer*, _Unit_Stage*, cocos2d::CCNode*) */

int * Unit_110_Attack_Time(CCLayer *param_1,_Unit_Stage *param_2,CCNode *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  CCLayer **ppCVar8;
  CCLayer *pCVar9;
  int iVar10;
  float extraout_s0;
  float extraout_s0_00;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  Unit_Attack_Timeing(param_2);
  iVar6 = *(int *)(param_2 + 4);
  uVar12 = __extendsfdf2(*(undefined4 *)(iVar6 + 0x3c));
  uVar13 = __extendsfdf2(*(undefined4 *)(iVar6 + 0x40));
  uVar13 = __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_00113fc0,DAT_00113fc4);
  iVar1 = __aeabi_dcmpgt((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                         (int)((ulonglong)uVar13 >> 0x20));
  piVar7 = (int *)0x0;
  if (iVar1 != 0) {
    piVar7 = (int *)0x0;
    if (*(char *)(iVar6 + 0x2c) == '\0') {
      *(char *)(iVar6 + 0x2c) = '\x01';
      piVar2 = (int *)Unit_Collistion_Name(param_1,false);
      piVar7 = piVar2;
      if (piVar2 != (int *)0x0) {
        piVar7 = (int *)0x1;
        iVar1 = (**(code **)(*piVar2 + 0xa8))();
        if (param_3 != (CCNode *)0x0) {
          ppCVar8 = *(CCLayer ***)(DAT_00113fc8 + 0x113ec0);
          fVar11 = extraout_s0;
          if ((*(int *)(*(int *)(param_2 + 4) + 0x120) == 0) ||
             (iVar6 = Random(0,100), fVar11 = extraout_s0_00,
             **(int **)(DAT_00113fcc + 0x113ed2) < iVar6)) {
            Target_Attack(param_1,(CCLayer *)piVar2,fVar11);
            pCVar9 = *ppCVar8;
            iVar10 = *(int *)(*(int *)(param_2 + 4) + 4);
            puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x38))(piVar2);
            iVar6 = __fixsfsi(*puVar3);
            iVar4 = (**(code **)(*piVar2 + 0x38))(piVar2);
            uVar5 = __floatsisf(*(int *)(iVar1 + 0xc) / 2);
            uVar5 = __addsf3(uVar5,*(undefined4 *)(iVar4 + 4));
            __subsf3(uVar5,DAT_00113fd0);
            iVar1 = __fixsfsi();
            iVar4 = (**(code **)(*piVar2 + 0x14))(piVar2);
            Effect::Effect_Draw((Effect *)param_3,pCVar9,iVar10,iVar6,iVar1,iVar4,false);
            piVar7 = (int *)0x1;
          }
          else {
            fVar11 = (float)__mulsf3(*(undefined4 *)(*(int *)(param_2 + 4) + 0x38),0x3fc00000);
            Target_Attack(param_1,(CCLayer *)piVar2,fVar11);
            pCVar9 = *ppCVar8;
            iVar10 = *(int *)(*(int *)(param_2 + 4) + 4);
            puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x38))(piVar2);
            iVar6 = __fixsfsi(*puVar3);
            iVar4 = (**(code **)(*piVar2 + 0x38))(piVar2);
            uVar5 = __floatsisf(*(int *)(iVar1 + 0xc) / 2);
            uVar5 = __addsf3(uVar5,*(undefined4 *)(iVar4 + 4));
            __subsf3(uVar5,DAT_00113fd0);
            iVar1 = __fixsfsi();
            iVar4 = (**(code **)(*piVar2 + 0x14))(piVar2);
            Effect::Effect_Draw((Effect *)param_3,pCVar9,iVar10,iVar6,iVar1,iVar4,true);
          }
        }
      }
    }
  }
  return piVar7;
}


