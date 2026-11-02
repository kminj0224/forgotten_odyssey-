/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e1edc  Symbol: Inventory_Item_Popup */

/* Market_Store::Inventory_Item_Popup(int, int, int, int, int) */

void Market_Store::Inventory_Item_Popup(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  code *pcVar16;
  int *piVar17;
  int iVar18;
  float fVar19;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  undefined8 uVar20;
  undefined4 extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  undefined local_13c;
  undefined local_13b;
  undefined local_13a [10];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  CCPoint aCStack_120 [8];
  CCPoint aCStack_118 [8];
  CCPoint aCStack_110 [8];
  CCSize aCStack_108 [2];
  CCPoint aCStack_100 [8];
  CCPoint aCStack_f8 [8];
  CCSize aCStack_f0 [2];
  CCPoint aCStack_e8 [8];
  CCPoint aCStack_e0 [8];
  CCPoint aCStack_d8 [8];
  CCSize aCStack_d0 [2];
  CCPoint aCStack_c8 [8];
  CCPoint aCStack_c0 [8];
  CCPoint aCStack_b8 [8];
  CCPoint aCStack_b0 [8];
  _func_void_CCObject_ptr *local_a8;
  undefined4 local_a4;
  char acStack_a0 [32];
  char acStack_80 [100];
  int local_1c;
  
  iVar13 = DAT_000e219c + 0xe1eea;
  piVar14 = *(int **)(iVar13 + DAT_000e21a0);
  local_1c = *piVar14;
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,DAT_000e21a4);
  iVar2 = (**(code **)(*piVar1 + 0x38))();
  uVar15 = *(undefined4 *)(iVar2 + 4);
  *(int *)(param_1 + 0x1a8) = param_3;
  *(int *)(param_1 + 0x1ac) = param_4;
  if (param_2 == 0) goto LAB_000e2450;
  __floatsisf(param_4 * 0x25 + 0x10e);
  __subsf3(DAT_000e21a8,uVar15);
  iVar2 = __fixsfsi();
  uVar20 = __floatsisf((0xbf - iVar2) + param_3 * -0x25);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_130,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000e21ac + 0xe1f58));
  uVar15 = local_12c;
  iVar2 = (**(code **)(*piVar1 + 0x7c))();
  uVar15 = __subsf3(uVar15,*(undefined4 *)(iVar2 + 4));
  iVar2 = __aeabi_fcmplt(uVar15,0);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*piVar1 + 0x7c))(piVar1);
    iVar3 = __fixsfsi(local_12c);
    iVar2 = __fixsfsi(*(undefined4 *)(iVar2 + 4));
    uVar7 = iVar3 - iVar2 >> 0x1f;
    uVar15 = __floatsisf((iVar3 - iVar2) + uVar7 ^ uVar7);
    uVar20 = __addsf3(local_12c,uVar15);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&local_128,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
    local_130 = local_128;
    local_12c = local_124;
  }
  uVar15 = local_130;
  pcVar16 = *(code **)(*piVar1 + 0x3c);
  puVar4 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar5 = __mulsf3(*puVar4,0x3f000000);
  __subsf3(uVar15,uVar5);
  uVar15 = local_12c;
  iVar2 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar5 = __mulsf3(*(undefined4 *)(iVar2 + 4),0x3f000000);
  uVar20 = __subsf3(uVar15,uVar5);
  cocos2d::CCPoint::CCPoint(aCStack_120,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  (*pcVar16)(piVar1,aCStack_120);
  fVar19 = (float)(**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar1,DAT_000e21b0,DAT_000e21b0);
  piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (*(char **)(param_2 * 0xc + *(int *)(iVar13 + DAT_000e21b4)),
                             (char *)(DAT_000e21b8 + 0xe2030),fVar19);
  uVar20 = CONCAT44(extraout_s1,extraout_s0);
  piVar17 = *(int **)(iVar13 + DAT_000e21bc);
  piVar8 = *(int **)(iVar13 + DAT_000e21c0);
  iVar3 = *piVar6;
  iVar2 = *(int *)(*piVar17 + param_5 * 0x14 + *piVar8 * 2000 + DAT_000e21c4 + 4);
  if (iVar2 == 1) {
    puVar9 = &local_13c;
    uVar11 = 0;
    pcVar16 = *(code **)(iVar3 + 0xf4);
    local_13c = 0;
    local_13b = 0xff;
LAB_000e209c:
    puVar9[2] = uVar11;
    uVar20 = (*pcVar16)(piVar6);
  }
  else {
    if (iVar2 == 2) {
      puVar9 = local_13a + 2;
      local_13a[2] = 0xff;
      local_13a[3] = 0xff;
      pcVar16 = *(code **)(iVar3 + 0xf4);
      uVar11 = 0;
      goto LAB_000e209c;
    }
    if (iVar2 == 3) {
      puVar9 = local_13a + 6;
      pcVar16 = *(code **)(iVar3 + 0xf4);
      local_13a[6] = 0xbe;
      local_13a[7] = 0x3d;
      uVar11 = 0xff;
      goto LAB_000e209c;
    }
  }
  pcVar16 = *(code **)(*piVar6 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_118,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  uVar20 = (*pcVar16)(piVar6,aCStack_118);
  pcVar16 = *(code **)(*piVar6 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_110,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  (*pcVar16)(piVar6,aCStack_110);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar6,0,0);
  memset(acStack_80,0,100);
  iVar2 = *(int *)(iVar13 + DAT_000e21d0);
  iVar3 = *(int *)(iVar13 + DAT_000e21d4);
  if ((param_2 < 0x50) || (iVar12 = iVar2 + param_2 * 0x18, *(int *)(iVar12 + 0xc) != 2)) {
    if (0x12 < param_2 - 0x97U) {
      if ((9 < param_2 - 0x5bU) && (0x1d < param_2 - 0x33U)) {
        iVar12 = *(int *)(iVar2 + param_2 * 0x18 + 0x14) * 0xc;
        uVar15 = *(undefined4 *)(iVar3 + iVar12);
        iVar18 = *piVar17;
        pcVar10 = (char *)(DAT_000e2464 + 0xe2200);
        goto LAB_000e21fe;
      }
      iVar12 = *(int *)(iVar2 + param_2 * 0x18 + 0x14) * 0xc;
      uVar15 = *(undefined4 *)(iVar3 + iVar12);
      pcVar10 = (char *)(DAT_000e21dc + 0xe2182);
      uVar5 = *(undefined4 *)
               (*piVar17 + *(int *)(param_1 + 0x194) * 0x14 + *piVar8 * 2000 + DAT_000e21e0 + 4);
      goto LAB_000e221e;
    }
    strcpy(acStack_80,*(char **)(iVar3 + *(int *)(iVar2 + param_2 * 0x18 + 0x14) * 0xc));
  }
  else {
    iVar12 = *(int *)(iVar12 + 0x14) * 0xc;
    pcVar10 = (char *)(DAT_000e21d8 + 0xe2118);
    uVar15 = *(undefined4 *)(iVar3 + iVar12);
    iVar18 = *piVar17;
LAB_000e21fe:
    uVar5 = *(undefined4 *)
             (iVar18 + *(int *)(param_1 + 0x194) * 0x14 + *piVar8 * 2000 + DAT_000e2468 + 4);
LAB_000e221e:
    sprintf(acStack_80,pcVar10,uVar15,uVar5,*(undefined4 *)(iVar3 + iVar12 + 4));
  }
  iVar12 = DAT_000e246c;
  puVar4 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar20 = __subsf3(*puVar4,0x41000000);
  fVar19 = (float)cocos2d::CCSize::CCSize
                            ((CCSize *)aCStack_108,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20))
  ;
  piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (acStack_80,aCStack_108,0,(char *)(iVar12 + 0xe224c),fVar19);
  pcVar16 = *(code **)(*piVar6 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_100,extraout_s0_00,extraout_s1_00);
  uVar20 = (*pcVar16)(piVar6,aCStack_100);
  pcVar16 = *(code **)(*piVar6 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_f8,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  (*pcVar16)(piVar6,aCStack_f8);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar6,1,1);
  iVar18 = *(int *)(iVar2 + param_2 * 0x18 + 8);
  if (iVar18 != 0) {
    memset(acStack_a0,0,0x1e);
    sprintf(acStack_a0,(char *)(DAT_000e247c + 0xe22ba),iVar18);
    uVar20 = (**(code **)(*piVar1 + 0x7c))(piVar1);
    fVar19 = (float)cocos2d::CCSize::CCSize
                              ((CCSize *)aCStack_f0,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20)
                              );
    piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (acStack_a0,aCStack_f0,0,(char *)(iVar12 + 0xe224c),fVar19);
    pcVar16 = *(code **)(*piVar6 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_e8,extraout_s0_01,extraout_s1_01);
    uVar20 = (*pcVar16)(piVar6,aCStack_e8);
    pcVar16 = *(code **)(*piVar6 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_e0,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
    (*pcVar16)(piVar6,aCStack_e0);
    (**(code **)(*piVar1 + 0xcc))(piVar1,piVar6,2,2);
  }
  piVar6 = (int *)Draw_Number::node();
  pcVar16 = *(code **)(*piVar6 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_d8,extraout_s0_02,extraout_s1_02);
  (*pcVar16)(piVar6,aCStack_d8);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar6,3,3);
  Draw_Number::SetNumberFont((Draw_Number *)piVar6,0);
  iVar2 = iVar2 + param_2 * 0x18;
  Draw_Number::SetNumber((Draw_Number *)piVar6,*(int *)(iVar2 + 4),0);
  pcVar10 = *(char **)(iVar3 + *(int *)(iVar2 + 0x14) * 0xc + 8);
  uVar20 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  fVar19 = (float)cocos2d::CCSize::CCSize
                            ((CCSize *)aCStack_d0,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (pcVar10,aCStack_d0,2,(char *)(DAT_000e2490 + 0xe238a),fVar19);
  pcVar16 = *(code **)(*piVar6 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_c8,extraout_s0_03,extraout_s1_03);
  uVar20 = (*pcVar16)(piVar6,aCStack_c8);
  pcVar16 = *(code **)(*piVar6 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_c0,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  (*pcVar16)(piVar6,aCStack_c0);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar6,4,4);
  if (param_2 < 0x50) {
    piVar6 = (int *)cocos2d::CCMenu::menuWithItems((CCMenuItem *)0x0);
    local_a8 = *(_func_void_CCObject_ptr **)(iVar13 + DAT_000e249c);
    local_a4 = 0;
    uVar15 = 0;
    piVar8 = (int *)cocos2d::CCMenuItemImage::itemFromNormalImage
                              ((char *)(DAT_000e24a0 + 0xe23e8),(char *)(DAT_000e24a0 + 0xe23e8),
                               (CCObject *)param_1,local_a8);
    pcVar16 = *(code **)(*piVar8 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_b8,extraout_s0_04,extraout_s1_04);
    (*pcVar16)(piVar8,aCStack_b8);
    (**(code **)(*piVar6 + 0xcc))(piVar6,piVar8,0,0,uVar15);
    pcVar16 = *(code **)(*piVar6 + 0x3c);
    uVar20 = (**(code **)(*piVar1 + 0x7c))(piVar1);
    cocos2d::CCPoint::CCPoint(aCStack_b0,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
    (*pcVar16)(piVar6,aCStack_b0);
    (**(code **)(*piVar1 + 0xcc))(piVar1,piVar6,10,10);
  }
  Draw_Money_Icon((CCNode *)param_1,SUB41(piVar1,0));
LAB_000e2450:
  if (local_1c == *piVar14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


