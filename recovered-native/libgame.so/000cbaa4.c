/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cbaa4  Symbol: Draw_Stage_Icon */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000cbb16) */
/* WARNING: Removing unreachable block (ram,0x000cbb16) */
/* StageSelectChild::Draw_Stage_Icon(cocos2d::CCPoint, int, int, int, bool) */

void StageSelectChild::Draw_Stage_Icon
               (CCPoint param_1,int param_2,int param_3,int param_4,bool param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  undefined8 uVar14;
  undefined3 in_stack_00000001;
  undefined4 in_stack_00000004;
  char in_stack_00000008;
  int local_78;
  int *local_64;
  int local_60;
  int local_5c;
  undefined local_54;
  undefined local_53;
  undefined local_52;
  CCPoint aCStack_50 [8];
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  iVar8 = DAT_000cbd84 + 0xcbab0;
  local_60 = param_2;
  local_5c = param_3;
  piVar1 = (int *)cocos2d::CCLayer::node();
  (**(code **)(*piVar1 + 0x3c))(piVar1,&local_60);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar1,param_4,param_4);
  if (in_stack_00000008 == '\0') {
    _param_5 = 0;
    in_stack_00000004 = 0;
  }
  piVar2 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName((char *)(DAT_000cbd88 + 0xcbae6));
  pcVar9 = *(code **)(*piVar2 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_50,extraout_s0,extraout_s1);
  (*pcVar9)(piVar2,aCStack_50);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar2,0,0);
  switch(in_stack_00000004) {
  case 1:
    pcVar4 = (char *)(DAT_000cbd8c + 0xcbb28);
    break;
  case 2:
    pcVar4 = (char *)(DAT_000cbd9c + 0xcbb40);
    break;
  case 3:
    pcVar4 = (char *)(DAT_000cbd98 + 0xcbb3a);
    break;
  default:
    goto switchD_000cbb16_caseD_4;
  case 5:
  case 6:
    pcVar4 = (char *)(DAT_000cbd94 + 0xcbb34);
    break;
  case 8:
    pcVar4 = (char *)(DAT_000cbd90 + 0xcbb2e);
  }
  piVar3 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName(pcVar4);
  if (piVar3 == (int *)0x0) {
switchD_000cbb16_caseD_4:
    piVar3 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName((char *)(DAT_000cbdb4 + 0xcbbbe));
    pcVar9 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_38,extraout_s0_02,extraout_s1_02);
    (*pcVar9)(piVar3,aCStack_38);
    (**(code **)(*piVar1 + 0xcc))(piVar1,piVar3,2,2);
    piVar3 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName((char *)(DAT_000cbdb8 + 0xcbbec));
    pcVar9 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0_03,extraout_s1_03);
    (*pcVar9)(piVar3,aCStack_30);
    (**(code **)(*piVar1 + 0xcc))(piVar1,piVar3,1,1);
  }
  else {
    pcVar9 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_48,extraout_s0_00,extraout_s1_00);
    (*pcVar9)(piVar3,aCStack_48);
    (**(code **)(*piVar1 + 0xcc))(piVar1,piVar3,1,1);
    piVar3 = (int *)N_Draw_Number::node();
    pcVar9 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_40,extraout_s0_01,extraout_s1_01);
    (*pcVar9)(piVar3,aCStack_40);
    (**(code **)(*piVar1 + 0xcc))(piVar1,piVar3,2,2);
    N_Draw_Number::SetNumberFont((N_Draw_Number *)piVar3,9);
    N_Draw_Number::SetNumber
              ((N_Draw_Number *)piVar3,(**(int **)(iVar8 + DAT_000cbdb0) + -1) * 10 + param_4,1);
  }
  iVar10 = DAT_000cbdbc;
  iVar12 = 0x15;
  for (iVar11 = 0; iVar11 < _param_5; iVar11 = iVar11 + 1) {
    piVar1 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName((char *)(iVar10 + 0xcbc24));
    pcVar9 = *(code **)(*piVar1 + 0x3c);
    uVar14 = __floatsisf(iVar12);
    cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
    (*pcVar9)(piVar1,aCStack_28);
    iVar12 = iVar12 + 0xd;
    (**(code **)(*piVar2 + 0xcc))(piVar2,piVar1,iVar11,iVar11);
  }
  local_78 = 0;
  iVar10 = 0;
  do {
    piVar3 = *(int **)(iVar8 + DAT_000cbdc4);
    piVar13 = *(int **)(iVar8 + DAT_000cbdc8);
    piVar1 = *(int **)(iVar8 + DAT_000cbdb0);
    if (*(char *)(*piVar13 * 2000 + (param_4 + (*piVar1 + -1) * 10) * 10 + *piVar3 + local_78 +
                 0xbc0) != '\0') {
      if (iVar10 == 0) {
        pcVar4 = (char *)(DAT_000cbdcc + 0xcbcb6);
LAB_000cbcdc:
        local_64 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName(pcVar4);
      }
      else {
        if (iVar10 == 1) {
          pcVar4 = (char *)(DAT_000cbdd0 + 0xcbcc0);
          goto LAB_000cbcdc;
        }
        if (iVar10 == 2) {
          pcVar4 = (char *)(DAT_000cbdd4 + 0xcbcca);
          goto LAB_000cbcdc;
        }
        if (iVar10 == 3) {
          pcVar4 = (char *)(DAT_000cbdd8 + 0xcbcd4);
          goto LAB_000cbcdc;
        }
        if (iVar10 == 4) {
          pcVar4 = (char *)(DAT_000cbddc + 0xcbcde);
          goto LAB_000cbcdc;
        }
      }
      if (*(char *)(*piVar3 + *piVar13 * 2000 + ((*piVar1 + -1) * 10 + param_4 + -1) * 10 + iVar10 +
                   0xbc0) != '\0') {
        local_54 = 0xff;
        local_53 = 0xff;
        local_52 = 0xff;
        (**(code **)(*local_64 + 0xf4))(local_64);
      }
      pcVar9 = *(code **)(*local_64 + 0x3c);
      puVar5 = (undefined4 *)(**(code **)(*local_64 + 0x7c))(local_64);
      uVar6 = __floatsisf(iVar10);
      uVar7 = __addsf3(*puVar5,0x3f800000);
      uVar6 = __mulsf3(uVar6,uVar7);
      uVar14 = __addsf3(uVar6,0x41800000);
      cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
      (*pcVar9)(local_64,aCStack_20);
      iVar10 = iVar10 + 1;
      (**(code **)(*piVar2 + 0xc4))(piVar2,local_64);
    }
    local_78 = local_78 + 1;
    if (local_78 == 10) {
      return;
    }
  } while( true );
}


