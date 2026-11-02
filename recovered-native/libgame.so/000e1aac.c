/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e1aac  Symbol: Buy_Item_Popup */

/* Market_Store::Buy_Item_Popup(int) */

void __thiscall Market_Store::Buy_Item_Popup(Market_Store *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  undefined8 uVar16;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  CCPoint aCStack_108 [8];
  CCPoint aCStack_100 [8];
  CCPoint aCStack_f8 [8];
  CCSize aCStack_f0 [2];
  CCPoint aCStack_e8 [8];
  CCPoint aCStack_e0 [8];
  CCSize aCStack_d8 [2];
  CCPoint aCStack_d0 [8];
  CCPoint aCStack_c8 [8];
  CCPoint aCStack_c0 [8];
  CCSize aCStack_b8 [2];
  CCPoint aCStack_b0 [8];
  CCPoint aCStack_a8 [8];
  char acStack_a0 [32];
  char acStack_80 [100];
  int local_1c;
  
  iVar14 = DAT_000e1c84 + 0xe1ab8;
  piVar10 = *(int **)(iVar14 + DAT_000e1c88);
  local_1c = *piVar10;
  iVar9 = (param_1 + 0x50) * 4;
  if (*(int *)(this + iVar9) == 0) goto LAB_000e1e94;
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000e1c8c + 0xe1ad8));
  iVar12 = *piVar1;
  pcVar2 = *(code **)(iVar12 + 0x3c);
  iVar13 = *(int *)(iVar14 + DAT_000e1c90) + param_1 * 0x10;
  uVar3 = __floatsisf(*(undefined4 *)(iVar13 + 4));
  puVar4 = (undefined4 *)(**(code **)(iVar12 + 0x7c))(piVar1);
  uVar5 = __mulsf3(*puVar4,0x3f000000);
  __addsf3(uVar3,uVar5);
  uVar3 = __floatsisf(*(undefined4 *)(iVar13 + 0xc));
  iVar12 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar5 = __mulsf3(*(undefined4 *)(iVar12 + 4),0x3f000000);
  uVar16 = __subsf3(uVar3,uVar5);
  cocos2d::CCPoint::CCPoint(aCStack_108,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  (*pcVar2)(piVar1,aCStack_108);
  fVar15 = (float)(**(code **)(*(int *)this + 0xcc))(this,piVar1,DAT_000e1c94,DAT_000e1c94);
  *(int *)(this + 400) = param_1;
  iVar9 = *(int *)(this + iVar9);
  piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (*(char **)(iVar9 * 0xc + *(int *)(iVar14 + DAT_000e1c98)),
                             (char *)(DAT_000e1c9c + 0xe1b78),fVar15);
  pcVar2 = *(code **)(*piVar6 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_100,extraout_s0,extraout_s1);
  uVar16 = (*pcVar2)(piVar6,aCStack_100);
  pcVar2 = *(code **)(*piVar6 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_f8,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  (*pcVar2)(piVar6,aCStack_f8);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar6,0,0);
  memset(acStack_80,0,100);
  iVar12 = *(int *)(iVar14 + DAT_000e1ca8);
  iVar14 = *(int *)(iVar14 + DAT_000e1cac);
  if (iVar9 - 0x51U < 0x46) {
    iVar11 = iVar12 + iVar9 * 0x18;
    iVar13 = *(int *)(iVar11 + 0x14);
    uVar3 = *(undefined4 *)(iVar11 + 0x10);
    if (*(int *)(iVar11 + 0xc) == 2) {
      pcVar8 = (char *)(DAT_000e1cb0 + 0xe1bee);
    }
    else {
      pcVar8 = (char *)(DAT_000e1cb4 + 0xe1bf4);
    }
LAB_000e1bf8:
    iVar13 = iVar13 * 0xc;
    uVar5 = *(undefined4 *)(iVar14 + iVar13);
LAB_000e1cd8:
    uVar7 = *(undefined4 *)(iVar14 + iVar13 + 4);
LAB_000e1ce0:
    sprintf(acStack_80,pcVar8,uVar5,uVar3,uVar7);
  }
  else {
    if (0x12 < iVar9 - 0x97U) {
      if ((0x50 < iVar9) && (iVar13 = iVar12 + iVar9 * 0x18, *(int *)(iVar13 + 0xc) == 2)) {
        iVar13 = *(int *)(iVar13 + 0x14);
        pcVar8 = (char *)(DAT_000e1cb8 + 0xe1c3a);
        uVar3 = 2;
        goto LAB_000e1bf8;
      }
      if ((9 < iVar9 - 0x5bU) && (0x1d < iVar9 - 0x33U)) {
        iVar13 = iVar12 + iVar9 * 0x18;
        uVar3 = *(undefined4 *)(iVar13 + 0xc);
        pcVar8 = (char *)(DAT_000e1ea8 + 0xe1cd6);
        iVar13 = *(int *)(iVar13 + 0x14) * 0xc;
        uVar5 = *(undefined4 *)(iVar14 + iVar13);
        goto LAB_000e1cd8;
      }
      iVar13 = iVar12 + iVar9 * 0x18;
      iVar11 = *(int *)(iVar13 + 0x14) * 0xc;
      uVar5 = *(undefined4 *)(iVar14 + iVar11);
      pcVar8 = (char *)(DAT_000e1cbc + 0xe1c6e);
      uVar3 = __divsi3(*(undefined4 *)(iVar13 + 0xc),10);
      uVar7 = *(undefined4 *)(iVar14 + iVar11 + 4);
      goto LAB_000e1ce0;
    }
    strcpy(acStack_80,*(char **)(iVar14 + *(int *)(iVar12 + iVar9 * 0x18 + 0x14) * 0xc));
  }
  iVar13 = DAT_000e1eac;
  puVar4 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar16 = __subsf3(*puVar4,0x41000000);
  fVar15 = (float)cocos2d::CCSize::CCSize
                            ((CCSize *)aCStack_f0,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (acStack_80,aCStack_f0,0,(char *)(iVar13 + 0xe1d08),fVar15);
  pcVar2 = *(code **)(*piVar6 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_e8,extraout_s0_00,extraout_s1_00);
  uVar16 = (*pcVar2)(piVar6,aCStack_e8);
  pcVar2 = *(code **)(*piVar6 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_e0,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  (*pcVar2)(piVar6,aCStack_e0);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar6,1,1);
  iVar11 = *(int *)(iVar12 + iVar9 * 0x18 + 8);
  if (iVar11 != 0) {
    memset(acStack_a0,0,0x1e);
    sprintf(acStack_a0,(char *)(DAT_000e1ebc + 0xe1d78),iVar11);
    uVar16 = (**(code **)(*piVar1 + 0x7c))(piVar1);
    fVar15 = (float)cocos2d::CCSize::CCSize
                              ((CCSize *)aCStack_d8,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20)
                              );
    piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (acStack_a0,aCStack_d8,0,(char *)(iVar13 + 0xe1d08),fVar15);
    pcVar2 = *(code **)(*piVar6 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_d0,extraout_s0_01,extraout_s1_01);
    uVar16 = (*pcVar2)(piVar6,aCStack_d0);
    pcVar2 = *(code **)(*piVar6 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_c8,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
    (*pcVar2)(piVar6,aCStack_c8);
    (**(code **)(*piVar1 + 0xcc))(piVar1,piVar6,2,2);
  }
  piVar6 = (int *)Draw_Number::node();
  pcVar2 = *(code **)(*piVar6 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_c0,extraout_s0_02,extraout_s1_02);
  (*pcVar2)(piVar6,aCStack_c0);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar6,3,3);
  Draw_Number::SetNumberFont((Draw_Number *)piVar6,0);
  Draw_Number::SetNumber((Draw_Number *)piVar6,*(int *)(iVar12 + iVar9 * 0x18),0);
  pcVar8 = *(char **)(iVar14 + *(int *)(iVar12 + iVar9 * 0x18 + 0x14) * 0xc + 8);
  uVar16 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  fVar15 = (float)cocos2d::CCSize::CCSize
                            ((CCSize *)aCStack_b8,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (pcVar8,aCStack_b8,2,(char *)(DAT_000e1ed0 + 0xe1e48),fVar15);
  pcVar2 = *(code **)(*piVar6 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_b0,extraout_s0_03,extraout_s1_03);
  uVar16 = (*pcVar2)(piVar6,aCStack_b0);
  pcVar2 = *(code **)(*piVar6 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_a8,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  (*pcVar2)(piVar6,aCStack_a8);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar6,4,4);
  Draw_Money_Icon((CCNode *)this,SUB41(piVar1,0));
LAB_000e1e94:
  if (local_1c == *piVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


