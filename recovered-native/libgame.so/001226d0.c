/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001226d0  Symbol: Game_Boss_Mant */

/* GameScene::Game_Boss_Mant(int) */

void __thiscall GameScene::Game_Boss_Mant(GameScene *this,int param_1)

{
  CCNode *pCVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  CCPoint *pCVar7;
  char *__src;
  int iVar8;
  int iVar9;
  CCNode **ppCVar10;
  int *piVar11;
  code *pcVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar17;
  float extraout_s1;
  undefined8 uVar18;
  float extraout_s1_00;
  float extraout_s1_01;
  float fVar19;
  int local_f4;
  undefined4 local_ec;
  CCPoint aCStack_c0 [8];
  CCPoint aCStack_b8 [8];
  CCSize aCStack_b0 [2];
  CCPoint aCStack_a8 [8];
  CCPoint aCStack_a0 [8];
  CCPoint aCStack_98 [8];
  CCPoint aCStack_90 [8];
  CCPoint aCStack_88 [8];
  char acStack_80 [100];
  int local_1c;
  
  piVar11 = *(int **)(DAT_001229f0 + 0x1226dc);
  ppCVar10 = *(CCNode ***)(DAT_001229f4 + 0x1226e0);
  local_1c = *piVar11;
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar10,1);
  iVar2 = cocos2d::CCNode::getChildByTag(pCVar1,DAT_001229f8);
  if (iVar2 != 0) {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar10,1);
    pcVar12 = *(code **)(*piVar3 + 0xd0);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar10,1);
    uVar4 = cocos2d::CCNode::getChildByTag(pCVar1,DAT_001229f8);
    (*pcVar12)(piVar3,uVar4,1);
  }
  piVar3 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_001229fc + 0x12272a));
  bVar13 = param_1 + DAT_00122a00 == 0;
  bVar14 = param_1 + DAT_00122a04 == 0;
  if (((bVar14) || (bVar13)) || (param_1 == DAT_00122a08)) {
    uVar18 = (**(code **)(*piVar3 + 0x2c))(piVar3,DAT_00122a0c);
    pcVar12 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_c0,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
    pCVar7 = aCStack_c0;
  }
  else {
    pcVar12 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_b8,extraout_s0,extraout_s1);
    pCVar7 = aCStack_b8;
  }
  (*pcVar12)(piVar3,pCVar7);
  iVar2 = **(int **)(DAT_00122a1c + 0x12278e) + -1 + (**(int **)(DAT_00122a20 + 0x122790) + -1) * 10
  ;
  local_f4 = 0;
  do {
    memset(acStack_80,0,100);
    if ((iVar2 == 9) && (param_1 + DAT_00122a24 == 0)) {
      __src = (char *)(DAT_00122a28 + 0x1227ce);
LAB_001228a4:
      strcpy(acStack_80,__src);
      fVar17 = extraout_s0_01;
      fVar19 = extraout_s1_01;
    }
    else {
      bVar15 = param_1 + DAT_00122a2c == 0;
      if ((iVar2 == 0xb) && (bVar15)) {
        __src = (char *)(DAT_00122a30 + 0x1227e6);
        goto LAB_001228a4;
      }
      bVar16 = param_1 + DAT_00122a34 == 0;
      if ((iVar2 == 0x10) && (bVar16)) {
        __src = (char *)(DAT_00122a38 + 0x1227fe);
        goto LAB_001228a4;
      }
      if ((iVar2 == 0x12) && (bVar15)) {
        __src = (char *)(DAT_00122a3c + 0x12280c);
        goto LAB_001228a4;
      }
      if ((iVar2 == 0x1d) && (param_1 + DAT_00122a40 == 0)) {
        __src = (char *)(DAT_00122a44 + 0x122820);
        goto LAB_001228a4;
      }
      if ((iVar2 == 0x20) && (bVar13)) {
        __src = (char *)(DAT_00122a48 + 0x122830);
        goto LAB_001228a4;
      }
      if ((iVar2 == 0x23) && (bVar13)) {
        __src = (char *)(DAT_00122a4c + 0x122840);
        goto LAB_001228a4;
      }
      bVar15 = param_1 + DAT_00122a50 == 0;
      if ((iVar2 == 0x2f) && (bVar15)) {
        __src = (char *)(DAT_00122a54 + 0x122858);
        goto LAB_001228a4;
      }
      if ((iVar2 == 0x49) && (bVar16)) {
        __src = (char *)(DAT_00122a58 + 0x122866);
        goto LAB_001228a4;
      }
      if ((iVar2 == 0x4b) && (bVar15)) {
        __src = (char *)(DAT_00122a5c + 0x122874);
        goto LAB_001228a4;
      }
      if ((iVar2 == 0x4d) && (bVar16)) {
        __src = (char *)(DAT_00122a60 + 0x122882);
        goto LAB_001228a4;
      }
      if ((iVar2 == 0x4f) && (bVar14)) {
        __src = (char *)(DAT_00122a64 + 0x122892);
        goto LAB_001228a4;
      }
      fVar17 = extraout_s0_00;
      fVar19 = extraout_s1_00;
      if ((iVar2 == 0x50) && (param_1 + DAT_00122a68 == 0)) {
        __src = (char *)(DAT_00122a6c + 0x1228a6);
        goto LAB_001228a4;
      }
    }
    fVar17 = (float)cocos2d::CCSize::CCSize((CCSize *)aCStack_b0,fVar17,fVar19);
    uVar4 = DAT_00122a78;
    piVar5 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (acStack_80,aCStack_b0,1,(char *)(DAT_00122a7c + 0x1228c0),fVar17);
    if ((iVar2 == 0x4d) || (iVar2 == 0x4b)) {
      local_ec = DAT_00122a80;
    }
    else if ((iVar2 == 0x50) || (iVar2 == 0x4f)) {
      local_ec = DAT_00122a80;
    }
    else {
      local_ec = 0;
    }
    (**(code **)(*piVar3 + 0xcc))(piVar3,piVar5,local_f4,local_f4,uVar4);
    iVar9 = *piVar3;
    iVar8 = *piVar5;
    if (local_f4 == 0) {
      pcVar12 = *(code **)(iVar8 + 0x3c);
      puVar6 = (undefined4 *)(**(code **)(iVar9 + 0x7c))(piVar3);
      uVar4 = __mulsf3(*puVar6,0x3f000000);
      uVar4 = __addsf3(uVar4,0x40000000);
      __addsf3(uVar4,0x3f800000);
      iVar8 = (**(code **)(*piVar3 + 0x7c))(piVar3);
      uVar4 = __subsf3(*(undefined4 *)(iVar8 + 4),DAT_00122a84);
      uVar4 = __addsf3(uVar4,DAT_00122a88);
      uVar18 = __subsf3(uVar4,local_ec);
      cocos2d::CCPoint::CCPoint(aCStack_a8,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
      (*pcVar12)(piVar5,aCStack_a8);
      (**(code **)(*piVar5 + 0xf4))(piVar5);
      local_f4 = 1;
    }
    else if (local_f4 == 1) {
      pcVar12 = *(code **)(iVar8 + 0x3c);
      puVar6 = (undefined4 *)(**(code **)(iVar9 + 0x7c))(piVar3);
      uVar4 = __mulsf3(*puVar6,0x3f000000);
      __addsf3(uVar4,0x40000000);
      iVar8 = (**(code **)(*piVar3 + 0x7c))(piVar3);
      uVar4 = __subsf3(*(undefined4 *)(iVar8 + 4),DAT_00122a84);
      uVar4 = __addsf3(uVar4,DAT_00122a88);
      uVar4 = __addsf3(uVar4,0x3f800000);
      uVar18 = __subsf3(uVar4,local_ec);
      cocos2d::CCPoint::CCPoint(aCStack_a0,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
      (*pcVar12)(piVar5,aCStack_a0);
      (**(code **)(*piVar5 + 0xf4))(piVar5);
      local_f4 = 2;
    }
    else if (local_f4 == 2) {
      pcVar12 = *(code **)(iVar8 + 0x3c);
      puVar6 = (undefined4 *)(**(code **)(iVar9 + 0x7c))(piVar3);
      uVar4 = __mulsf3(*puVar6,0x3f000000);
      uVar4 = __addsf3(uVar4,0x40000000);
      __subsf3(uVar4,0x3f800000);
      iVar8 = (**(code **)(*piVar3 + 0x7c))(piVar3);
      uVar4 = __subsf3(*(undefined4 *)(iVar8 + 4),DAT_00122bf8);
      uVar4 = __addsf3(uVar4,DAT_00122bfc);
      uVar18 = __subsf3(uVar4,local_ec);
      cocos2d::CCPoint::CCPoint(aCStack_98,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
      (*pcVar12)(piVar5,aCStack_98);
      (**(code **)(*piVar5 + 0xf4))(piVar5);
      local_f4 = 3;
    }
    else {
      pcVar12 = *(code **)(iVar8 + 0x3c);
      if (local_f4 == 3) {
        puVar6 = (undefined4 *)(**(code **)(iVar9 + 0x7c))(piVar3);
        uVar4 = __mulsf3(*puVar6,0x3f000000);
        __addsf3(uVar4,0x40000000);
        iVar8 = (**(code **)(*piVar3 + 0x7c))(piVar3);
        uVar4 = __subsf3(*(undefined4 *)(iVar8 + 4),DAT_00122bf8);
        uVar4 = __addsf3(uVar4,DAT_00122bfc);
        uVar4 = __subsf3(uVar4,0x3f800000);
        uVar18 = __subsf3(uVar4,local_ec);
        cocos2d::CCPoint::CCPoint(aCStack_90,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
        (*pcVar12)(piVar5,aCStack_90);
        (**(code **)(*piVar5 + 0xf4))(piVar5);
        local_f4 = 4;
      }
      else {
        puVar6 = (undefined4 *)(**(code **)(iVar9 + 0x7c))(piVar3);
        uVar4 = __mulsf3(*puVar6,0x3f000000);
        __addsf3(uVar4,0x40000000);
        iVar8 = (**(code **)(*piVar3 + 0x7c))(piVar3);
        uVar4 = __subsf3(*(undefined4 *)(iVar8 + 4),DAT_00122bf8);
        uVar4 = __addsf3(uVar4,DAT_00122bfc);
        uVar18 = __subsf3(uVar4,local_ec);
        cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
        (*pcVar12)(piVar5,aCStack_88);
        local_f4 = local_f4 + 1;
        if (local_f4 == 5) {
          piVar5 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar10,1);
          (**(code **)(*piVar5 + 0xcc))(piVar5,piVar3,DAT_00122c00,DAT_00122c00);
          if (local_1c == *piVar11) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
    }
  } while( true );
}


