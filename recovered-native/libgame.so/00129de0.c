/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00129de0  Symbol: Inventory_Item_Popup */

/* GameScene::Inventory_Item_Popup(cocos2d::CCNode*, int, int, int, int, int) */

void GameScene::Inventory_Item_Popup
               (CCNode *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float in_s0;
  float fVar15;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float in_s1;
  undefined4 extraout_s1;
  undefined8 uVar16;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  int in_stack_00000008;
  undefined local_120;
  undefined local_11f;
  undefined local_11e [12];
  undefined local_112;
  CCPoint aCStack_110 [8];
  CCPoint aCStack_108 [8];
  CCPoint aCStack_100 [8];
  CCSize aCStack_f8 [2];
  CCPoint aCStack_f0 [8];
  CCPoint aCStack_e8 [8];
  CCSize aCStack_e0 [2];
  CCPoint aCStack_d8 [8];
  CCPoint aCStack_d0 [8];
  CCPoint aCStack_c8 [8];
  CCSize aCStack_c0 [2];
  CCPoint aCStack_b8 [8];
  CCPoint aCStack_b0 [8];
  CCPoint aCStack_a8 [8];
  char acStack_a0 [32];
  char acStack_80 [100];
  int local_1c;
  
  iVar13 = DAT_00129f88 + 0x129dee;
  piVar8 = *(int **)(iVar13 + DAT_00129f8c);
  local_1c = *piVar8;
  if (param_3 == 0) goto LAB_0012a228;
  cocos2d::CCPoint::CCPoint(aCStack_110,in_s0,in_s1);
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00129f98 + 0x129e12));
  (**(code **)(*piVar1 + 0x3c))(piVar1,aCStack_110);
  fVar15 = (float)(**(code **)(*(int *)param_2 + 0xcc))(param_2,piVar1,DAT_00129f9c,DAT_00129f9c);
  piVar2 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (*(char **)(param_3 * 0xc + *(int *)(iVar13 + DAT_00129fa0)),
                             (char *)(DAT_00129fa4 + 0x129e44),fVar15);
  uVar16 = CONCAT44(extraout_s1,extraout_s0);
  iVar7 = *(int *)(param_1 + param_4 * 0x14 + 0x130);
  iVar9 = *piVar2;
  if (iVar7 == 1) {
    puVar4 = &local_120;
    uVar6 = 0;
    pcVar10 = *(code **)(iVar9 + 0xf4);
    local_120 = 0;
    local_11f = 0xff;
LAB_00129e94:
    puVar4[2] = uVar6;
    uVar16 = (*pcVar10)(piVar2);
  }
  else {
    if (iVar7 == 2) {
      puVar4 = local_11e + 2;
      local_11e[2] = 0xff;
      local_11e[3] = 0xff;
      pcVar10 = *(code **)(iVar9 + 0xf4);
      uVar6 = 0;
      goto LAB_00129e94;
    }
    if (iVar7 == 3) {
      puVar4 = local_11e + 6;
      pcVar10 = *(code **)(iVar9 + 0xf4);
      local_11e[6] = 0xbe;
      local_11e[7] = 0x3d;
      uVar6 = 0xff;
      goto LAB_00129e94;
    }
  }
  pcVar10 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_108,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  uVar16 = (*pcVar10)(piVar2,aCStack_108);
  pcVar10 = *(code **)(*piVar2 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_100,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  (*pcVar10)(piVar2,aCStack_100);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar2,0,0);
  memset(acStack_80,0,100);
  iVar7 = *(int *)(iVar13 + DAT_00129fb0);
  iVar9 = *(int *)(iVar13 + DAT_00129fb4);
  if (in_stack_00000008 == 0) {
    if (0x12 < param_3 - 0x97U) {
      if ((param_3 < 0x51) || (iVar11 = iVar7 + param_3 * 0x18, *(int *)(iVar11 + 0xc) != 2)) {
        iVar11 = *(int *)(iVar7 + param_3 * 0x18 + 0x14);
        pcVar5 = (char *)(DAT_0012a23c + 0x129fdc);
      }
      else {
        iVar11 = *(int *)(iVar11 + 0x14);
        pcVar5 = (char *)((int)&DAT_00129f88 + DAT_00129fc8);
      }
      goto LAB_00129fda;
    }
    if (param_3 == 0xa9) {
      pcVar5 = (char *)(DAT_00129fc4 + 0x129f58);
    }
    else {
      pcVar5 = *(char **)(iVar9 + *(int *)(iVar7 + param_3 * 0x18 + 0x14) * 0xc);
    }
    strcpy(acStack_80,pcVar5);
  }
  else {
    if ((param_3 < 0x51) || (iVar11 = iVar7 + param_3 * 0x18, *(int *)(iVar11 + 0xc) != 2)) {
      if ((param_3 - 0x5bU < 10) || (param_3 - 0x33U < 0x1e)) {
        iVar11 = *(int *)(iVar7 + param_3 * 0x18 + 0x14);
        pcVar5 = (char *)(DAT_00129fbc + 0x129f34);
      }
      else {
        iVar11 = *(int *)(iVar7 + param_3 * 0x18 + 0x14);
        pcVar5 = (char *)(DAT_00129fc0 + 0x129f44);
      }
    }
    else {
      iVar11 = *(int *)(iVar11 + 0x14);
      pcVar5 = (char *)(DAT_00129fb8 + 0x129f0c);
    }
LAB_00129fda:
    sprintf(acStack_80,pcVar5,*(undefined4 *)(iVar9 + iVar11 * 0xc),
            *(undefined4 *)(param_1 + param_4 * 0x14 + 0x138),
            *(undefined4 *)(iVar9 + iVar11 * 0xc + 4));
  }
  iVar11 = DAT_0012a240;
  puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar16 = __subsf3(*puVar3,0x41000000);
  fVar15 = (float)cocos2d::CCSize::CCSize
                            ((CCSize *)aCStack_f8,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  piVar2 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (acStack_80,aCStack_f8,0,(char *)(iVar11 + 0x12a022),fVar15);
  pcVar10 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_f0,extraout_s0_00,extraout_s1_00);
  uVar16 = (*pcVar10)(piVar2,aCStack_f0);
  pcVar10 = *(code **)(*piVar2 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_e8,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  (*pcVar10)(piVar2,aCStack_e8);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar2,1,1);
  iVar12 = iVar7 + param_3 * 0x18;
  iVar14 = *(int *)(iVar12 + 8);
  if (iVar14 != 0) {
    memset(acStack_a0,0,0x1e);
    sprintf(acStack_a0,(char *)(DAT_0012a250 + 0x12a092),iVar14);
    uVar16 = (**(code **)(*piVar1 + 0x7c))(piVar1);
    fVar15 = (float)cocos2d::CCSize::CCSize
                              ((CCSize *)aCStack_e0,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20)
                              );
    piVar2 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (acStack_a0,aCStack_e0,0,(char *)(iVar11 + 0x12a022),fVar15);
    pcVar10 = *(code **)(*piVar2 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_d8,extraout_s0_01,extraout_s1_01);
    uVar16 = (*pcVar10)(piVar2,aCStack_d8);
    pcVar10 = *(code **)(*piVar2 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_d0,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
    (*pcVar10)(piVar2,aCStack_d0);
    if (*(int *)(**(int **)(iVar13 + DAT_0012a25c) +
                 (**(int **)(iVar13 + DAT_0012a264) * 9 +
                  (int)*(char *)(**(int **)(iVar13 + DAT_0012a25c) +
                                 **(int **)(iVar13 + DAT_0012a264) + DAT_0012a260 + 4) +
                 DAT_0012a268) * 4 + 4) < *(int *)(iVar12 + 8)) {
      local_11e[10] = 0xff;
      local_11e[11] = 0;
      local_112 = 0;
      (**(code **)(*piVar2 + 0xf4))(piVar2);
    }
    (**(code **)(*piVar1 + 0xcc))(piVar1,piVar2,2,2);
  }
  piVar2 = (int *)Draw_Number::node();
  pcVar10 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_c8,extraout_s0_02,extraout_s1_02);
  (*pcVar10)(piVar2,aCStack_c8);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar2,3,3);
  Draw_Number::SetNumberFont((Draw_Number *)piVar2,0);
  iVar7 = iVar7 + param_3 * 0x18;
  Draw_Number::SetNumber((Draw_Number *)piVar2,*(int *)(iVar7 + 4),0);
  pcVar5 = *(char **)(iVar9 + *(int *)(iVar7 + 0x14) * 0xc + 8);
  uVar16 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  fVar15 = (float)cocos2d::CCSize::CCSize
                            ((CCSize *)aCStack_c0,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  piVar2 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (pcVar5,aCStack_c0,2,(char *)(DAT_0012a274 + 0x12a1a8),fVar15);
  pcVar10 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_b8,extraout_s0_03,extraout_s1_03);
  uVar16 = (*pcVar10)(piVar2,aCStack_b8);
  pcVar10 = *(code **)(*piVar2 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_b0,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  (*pcVar10)(piVar2,aCStack_b0);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar2,4,4);
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0012a280 + 0x12a1f0));
  pcVar10 = *(code **)(*piVar2 + 0x3c);
  puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar16 = __subsf3(*puVar3,DAT_0012a284);
  cocos2d::CCPoint::CCPoint(aCStack_a8,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  (*pcVar10)(piVar2,aCStack_a8);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar2,0xb,0xb);
LAB_0012a228:
  if (local_1c == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


