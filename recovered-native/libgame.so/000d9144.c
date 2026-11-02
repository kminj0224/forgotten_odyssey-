/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d9144  Symbol: Inventory_Item_Popup */

/* Market_Equip::Inventory_Item_Popup(int, int, int, int, int) */

void __thiscall
Market_Equip::Inventory_Item_Popup
          (Market_Equip *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  CCNode *pCVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  CCActionInterval *pCVar9;
  CCAction *pCVar10;
  uint uVar11;
  char *pcVar12;
  undefined *puVar13;
  undefined uVar14;
  int *piVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  int *piVar21;
  code *pcVar22;
  int *piVar23;
  float fVar24;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  undefined8 uVar25;
  undefined4 extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  undefined local_18c;
  undefined local_18b;
  undefined local_18a [22];
  undefined local_174;
  undefined local_173;
  undefined local_172;
  undefined auStack_170 [16];
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  CCPoint aCStack_140 [8];
  CCPoint aCStack_138 [8];
  CCPoint aCStack_130 [8];
  CCSize aCStack_128 [2];
  CCPoint aCStack_120 [8];
  CCPoint aCStack_118 [8];
  CCSize aCStack_110 [2];
  CCPoint aCStack_108 [8];
  CCPoint aCStack_100 [8];
  CCPoint aCStack_f8 [8];
  CCSize aCStack_f0 [2];
  CCPoint aCStack_e8 [8];
  CCPoint aCStack_e0 [8];
  CCPoint aCStack_d8 [8];
  CCPoint aCStack_d0 [8];
  CCPoint aCStack_c8 [8];
  CCPoint aCStack_c0 [8];
  CCPoint aCStack_b8 [8];
  CCPoint aCStack_b0 [8];
  _func_void_CCObject_ptr *local_a8;
  undefined4 local_a4;
  char acStack_a0 [32];
  char acStack_80 [100];
  int local_1c;
  
  iVar1 = DAT_000d94dc + 0xd9154;
  piVar15 = *(int **)(iVar1 + DAT_000d94e0);
  local_1c = *piVar15;
  if (param_5 != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,9);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,0);
    (**(code **)(*piVar3 + 0x6c))(piVar3,0);
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,9);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,1);
    (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  }
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,99);
  iVar4 = (**(code **)(*piVar3 + 0x38))();
  uVar20 = *(undefined4 *)(iVar4 + 4);
  *(int *)(this + 0x148) = param_2;
  *(int *)(this + 0x14c) = param_3;
  if (param_1 == 0) {
    FUN_000d9a78();
  }
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_160);
  if (param_5 == 0) {
    __floatsisf(param_3 * 0x25 + 0x10e);
    __subsf3(DAT_000d94e8,uVar20);
    iVar4 = __fixsfsi();
    uVar25 = __floatsisf((0xbf - iVar4) + param_2 * -0x25);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&local_150,(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
    local_160 = local_150;
    local_154 = local_14c;
  }
  else {
    uVar25 = __floatsisf(param_2 * -0x2b + 0xd2);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&local_158,(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
    local_160 = local_158;
  }
  local_15c = local_154;
  piVar3 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000d94ec + 0xd9234));
  uVar20 = local_15c;
  iVar4 = (**(code **)(*piVar3 + 0x7c))();
  uVar20 = __subsf3(uVar20,*(undefined4 *)(iVar4 + 4));
  iVar4 = __aeabi_fcmplt(uVar20,0);
  if (iVar4 != 0) {
    iVar4 = (**(code **)(*piVar3 + 0x7c))(piVar3);
    iVar5 = __fixsfsi(local_15c);
    iVar4 = __fixsfsi(*(undefined4 *)(iVar4 + 4));
    uVar11 = iVar5 - iVar4 >> 0x1f;
    uVar20 = __floatsisf((iVar5 - iVar4) + uVar11 ^ uVar11);
    uVar25 = __addsf3(local_15c,uVar20);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&local_148,(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
    local_160 = local_148;
    local_15c = local_144;
  }
  uVar20 = local_160;
  pcVar22 = *(code **)(*piVar3 + 0x3c);
  puVar6 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))(piVar3);
  uVar7 = __mulsf3(*puVar6,0x3f000000);
  __subsf3(uVar20,uVar7);
  uVar20 = local_15c;
  iVar4 = (**(code **)(*piVar3 + 0x7c))(piVar3);
  uVar7 = __mulsf3(*(undefined4 *)(iVar4 + 4),0x3f000000);
  uVar25 = __subsf3(uVar20,uVar7);
  cocos2d::CCPoint::CCPoint(aCStack_140,(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
  (*pcVar22)(piVar3,aCStack_140);
  fVar24 = (float)(**(code **)(*(int *)this + 0xcc))(this,piVar3,0x67,0x67);
  piVar8 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (*(char **)(param_1 * 0xc + *(int *)(iVar1 + DAT_000d94f0)),
                             (char *)(DAT_000d94f4 + 0xd9306),fVar24);
  uVar25 = CONCAT44(extraout_s1,extraout_s0);
  piVar21 = *(int **)(iVar1 + DAT_000d94f8);
  piVar23 = *(int **)(iVar1 + DAT_000d94fc);
  iVar4 = *piVar8;
  if (param_5 == 0) {
    iVar5 = *(int *)(*piVar21 + param_4 * 0x14 + *piVar23 * 2000 + DAT_000d9504 + 4);
    if (iVar5 == 1) {
      local_18a[10] = 0;
      pcVar22 = *(code **)(iVar4 + 0xf4);
      local_18a[11] = 0xff;
      local_18a[12] = 0;
      goto LAB_000d93ea;
    }
    if (iVar5 == 2) {
      pcVar22 = *(code **)(iVar4 + 0xf4);
      local_18a[14] = 0xff;
      local_18a[15] = 0xff;
      local_18a[16] = 0;
      goto LAB_000d93ea;
    }
    if (iVar5 == 3) {
      pcVar22 = *(code **)(iVar4 + 0xf4);
      puVar13 = local_18a + 0x12;
      goto LAB_000d93de;
    }
  }
  else {
    iVar5 = *(int *)(*piVar21 +
                     param_2 * 0x14 + (*(int *)(this + 0x110) + -8) * 0x50 + *piVar23 * 0x2d0 +
                     DAT_000d9500 + 4);
    if (iVar5 == 1) {
      puVar13 = &local_18c;
      uVar14 = 0;
      pcVar22 = *(code **)(iVar4 + 0xf4);
      local_18c = 0;
      local_18b = 0xff;
    }
    else if (iVar5 == 2) {
      puVar13 = local_18a + 2;
      local_18a[2] = 0xff;
      local_18a[3] = 0xff;
      pcVar22 = *(code **)(iVar4 + 0xf4);
      uVar14 = 0;
    }
    else {
      uVar25 = CONCAT44(extraout_s1,extraout_s0);
      if (iVar5 != 3) goto LAB_000d93ee;
      pcVar22 = *(code **)(iVar4 + 0xf4);
      puVar13 = local_18a + 6;
LAB_000d93de:
      *puVar13 = 0xbe;
      puVar13[1] = 0x3d;
      uVar14 = 0xff;
    }
    puVar13[2] = uVar14;
LAB_000d93ea:
    uVar25 = (*pcVar22)(piVar8);
  }
LAB_000d93ee:
  pcVar22 = *(code **)(*piVar8 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_138,(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
  uVar25 = (*pcVar22)(piVar8,aCStack_138);
  pcVar22 = *(code **)(*piVar8 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_130,(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
  (*pcVar22)(piVar8,aCStack_130);
  (**(code **)(*piVar3 + 0xcc))(piVar3,piVar8,0,0);
  memset(acStack_80,0,100);
  iVar4 = *(int *)(iVar1 + DAT_000d9510);
  iVar5 = *(int *)(iVar1 + DAT_000d9514);
  if (param_5 == 0) {
    if (0x12 < param_1 - 0x97U) {
      if ((param_1 < 0x51) || (iVar16 = iVar4 + param_1 * 0x18, *(int *)(iVar16 + 0xc) != 2)) {
        if ((param_1 - 0x5bU < 10) || (param_1 - 0x33U < 0x1e)) {
          pcVar12 = (char *)(DAT_000d95b0 + 0xd95a2);
          iVar16 = *(int *)(iVar4 + param_1 * 0x18 + 0x14);
        }
        else {
          pcVar12 = (char *)(DAT_000d9958 + 0xd95c2);
          iVar16 = *(int *)(iVar4 + param_1 * 0x18 + 0x14);
        }
      }
      else {
        iVar16 = *(int *)(iVar16 + 0x14);
        pcVar12 = (char *)(DAT_000d95ac + 0xd957c);
      }
      uVar7 = *(undefined4 *)(iVar5 + iVar16 * 0xc);
      uVar17 = *(undefined4 *)
                (*piVar21 + *(int *)(this + 0x130) * 0x14 + *piVar23 * 2000 + DAT_000d995c + 4);
      uVar20 = *(undefined4 *)(iVar5 + iVar16 * 0xc + 4);
      goto LAB_000d95fc;
    }
    strcpy(acStack_80,*(char **)(iVar5 + *(int *)(iVar4 + param_1 * 0x18 + 0x14) * 0xc));
  }
  else {
    if ((param_1 < 0x51) || (iVar16 = iVar4 + param_1 * 0x18, *(int *)(iVar16 + 0xc) != 2)) {
      if ((param_1 - 0x5bU < 10) || (param_1 - 0x33U < 0x1e)) {
        pcVar12 = (char *)(DAT_000d951c + 0xd948c);
        iVar16 = *(int *)(iVar4 + param_1 * 0x18 + 0x14);
      }
      else {
        pcVar12 = (char *)(DAT_000d95a8 + 0xd9532);
        iVar16 = *(int *)(iVar4 + param_1 * 0x18 + 0x14);
      }
    }
    else {
      iVar16 = *(int *)(iVar16 + 0x14);
      pcVar12 = (char *)(DAT_000d9518 + 0xd9466);
    }
    uVar7 = *(undefined4 *)(iVar5 + iVar16 * 0xc);
    uVar17 = *(undefined4 *)
              (*piVar21 + *piVar23 * 0x2d0 + param_2 * 0x14 + (*(int *)(this + 0x110) + -8) * 0x50 +
               DAT_000d9520 + 4);
    uVar20 = *(undefined4 *)(iVar5 + iVar16 * 0xc + 4);
LAB_000d95fc:
    sprintf(acStack_80,pcVar12,uVar7,uVar17,uVar20);
  }
  iVar16 = DAT_000d9960;
  puVar6 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))(piVar3);
  uVar25 = __subsf3(*puVar6,0x41000000);
  fVar24 = (float)cocos2d::CCSize::CCSize
                            ((CCSize *)aCStack_128,(float)uVar25,(float)((ulonglong)uVar25 >> 0x20))
  ;
  piVar8 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (acStack_80,aCStack_128,0,(char *)(iVar16 + 0xd9624),fVar24);
  pcVar22 = *(code **)(*piVar8 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_120,extraout_s0_00,extraout_s1_00);
  uVar25 = (*pcVar22)(piVar8,aCStack_120);
  pcVar22 = *(code **)(*piVar8 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_118,(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
  (*pcVar22)(piVar8,aCStack_118);
  (**(code **)(*piVar3 + 0xcc))(piVar3,piVar8,1,1);
  iVar18 = iVar4 + param_1 * 0x18;
  iVar19 = *(int *)(iVar18 + 8);
  if (iVar19 != 0) {
    memset(acStack_a0,0,0x1e);
    sprintf(acStack_a0,(char *)(DAT_000d9970 + 0xd9698),iVar19);
    uVar25 = (**(code **)(*piVar3 + 0x7c))(piVar3);
    fVar24 = (float)cocos2d::CCSize::CCSize
                              ((CCSize *)aCStack_110,(float)uVar25,
                               (float)((ulonglong)uVar25 >> 0x20));
    piVar8 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (acStack_a0,aCStack_110,0,(char *)(iVar16 + 0xd9624),fVar24);
    pcVar22 = *(code **)(*piVar8 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_108,extraout_s0_01,extraout_s1_01);
    uVar25 = (*pcVar22)(piVar8,aCStack_108);
    pcVar22 = *(code **)(*piVar8 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_100,(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
    (*pcVar22)(piVar8,aCStack_100);
    if (*(int *)(*piVar21 + (*piVar23 * 9 + *(int *)(this + 0x110) + DAT_000d997c) * 4 + 4) <
        *(int *)(iVar18 + 8)) {
      local_174 = 0xff;
      local_173 = 0;
      local_172 = 0;
      (**(code **)(*piVar8 + 0xf4))(piVar8);
    }
    (**(code **)(*piVar3 + 0xcc))(piVar3,piVar8,2,2);
  }
  piVar8 = (int *)Draw_Number::node();
  pcVar22 = *(code **)(*piVar8 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_f8,extraout_s0_02,extraout_s1_02);
  (*pcVar22)(piVar8,aCStack_f8);
  (**(code **)(*piVar3 + 0xcc))(piVar3,piVar8,3,3);
  Draw_Number::SetNumberFont((Draw_Number *)piVar8,0);
  iVar4 = iVar4 + param_1 * 0x18;
  Draw_Number::SetNumber((Draw_Number *)piVar8,*(int *)(iVar4 + 4),0);
  pcVar12 = *(char **)(iVar5 + *(int *)(iVar4 + 0x14) * 0xc + 8);
  uVar25 = (**(code **)(*piVar3 + 0x7c))(piVar3);
  fVar24 = (float)cocos2d::CCSize::CCSize
                            ((CCSize *)aCStack_f0,(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
  piVar8 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (pcVar12,aCStack_f0,2,(char *)(DAT_000d9988 + 0xd97a4),fVar24);
  pcVar22 = *(code **)(*piVar8 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_e8,extraout_s0_03,extraout_s1_03);
  uVar25 = (*pcVar22)(piVar8,aCStack_e8);
  pcVar22 = *(code **)(*piVar8 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_e0,(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
  (*pcVar22)(piVar8,aCStack_e0);
  (**(code **)(*piVar3 + 0xcc))(piVar3,piVar8,4,4);
  if (param_1 < 0x50) {
    piVar8 = (int *)cocos2d::CCMenu::menuWithItems((CCMenuItem *)0x0);
    local_a8 = *(_func_void_CCObject_ptr **)(iVar1 + DAT_000d9994);
    local_a4 = 0;
    uVar20 = 0;
    piVar21 = (int *)cocos2d::CCMenuItemImage::itemFromNormalImage
                               ((char *)(DAT_000d9998 + 0xd9802),(char *)(DAT_000d9998 + 0xd9802),
                                (CCObject *)this,local_a8);
    pcVar22 = *(code **)(*piVar21 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_d8,extraout_s0_04,extraout_s1_04);
    (*pcVar22)(piVar21,aCStack_d8);
    (**(code **)(*piVar8 + 0xcc))(piVar8,piVar21,0,0,uVar20);
    pcVar22 = *(code **)(*piVar8 + 0x3c);
    uVar25 = (**(code **)(*piVar3 + 0x7c))(piVar3);
    cocos2d::CCPoint::CCPoint(aCStack_d0,(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
    (*pcVar22)(piVar8,aCStack_d0);
    (**(code **)(*piVar3 + 0xcc))(piVar3,piVar8,10,10);
  }
  uVar11 = __divsi3(param_1 + -1,10);
  puVar6 = *(undefined4 **)(iVar1 + DAT_000d999c);
  if (uVar11 < 0xf) {
    uVar11 = 1 << (uVar11 & 0xff);
    if ((uVar11 & 0x7800) != 0) {
      piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x66);
      pcVar22 = *(code **)(*piVar8 + 0x3c);
      __floatsisf(puVar6[8]);
      uVar25 = __floatsisf(puVar6[10]);
      cocos2d::CCPoint::CCPoint(aCStack_b8,(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
      (*pcVar22)(piVar8,aCStack_b8);
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x66);
      pCVar9 = (CCActionInterval *)cocos2d::CCBlink::actionWithDuration(extraout_s0_07,0x3f800000);
      pCVar10 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(pCVar9);
      cocos2d::CCNode::runAction(pCVar2,pCVar10);
      piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x66);
      puVar13 = auStack_170 + 8;
      pcVar22 = *(code **)(*piVar8 + 0xf4);
      goto LAB_000d9a62;
    }
    if ((uVar11 & 0xe0) != 0) {
      piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x66);
      pcVar22 = *(code **)(*piVar8 + 0x3c);
      __floatsisf(puVar6[4]);
      uVar25 = __floatsisf(puVar6[6]);
      cocos2d::CCPoint::CCPoint(aCStack_c0,(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
      (*pcVar22)(piVar8,aCStack_c0);
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x66);
      pCVar9 = (CCActionInterval *)cocos2d::CCBlink::actionWithDuration(extraout_s0_06,0x3f800000);
      pCVar10 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(pCVar9);
      cocos2d::CCNode::runAction(pCVar2,pCVar10);
      piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x66);
      puVar13 = auStack_170 + 4;
      pcVar22 = *(code **)(*piVar8 + 0xf4);
      goto LAB_000d9a62;
    }
    if ((uVar11 & 0x1f) != 0) {
      piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x66);
      pcVar22 = *(code **)(*piVar8 + 0x3c);
      __floatsisf(*puVar6);
      uVar25 = __floatsisf(puVar6[2]);
      cocos2d::CCPoint::CCPoint(aCStack_c8,(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
      (*pcVar22)(piVar8,aCStack_c8);
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x66);
      pCVar9 = (CCActionInterval *)cocos2d::CCBlink::actionWithDuration(extraout_s0_05,0x3f800000);
      pCVar10 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(pCVar9);
      cocos2d::CCNode::runAction(pCVar2,pCVar10);
      piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x66);
      puVar13 = auStack_170;
      pcVar22 = *(code **)(*piVar8 + 0xf4);
      goto LAB_000d9a62;
    }
  }
  piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x66);
  pcVar22 = *(code **)(*piVar8 + 0x3c);
  __floatsisf(puVar6[0xc]);
  uVar25 = __floatsisf(puVar6[0xe]);
  cocos2d::CCPoint::CCPoint(aCStack_b0,(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
  (*pcVar22)(piVar8,aCStack_b0);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x66);
  pCVar9 = (CCActionInterval *)cocos2d::CCBlink::actionWithDuration(extraout_s0_08,0x3f800000);
  pCVar10 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(pCVar9);
  cocos2d::CCNode::runAction(pCVar2,pCVar10);
  piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x66);
  puVar13 = auStack_170 + 0xc;
  pcVar22 = *(code **)(*piVar8 + 0xf4);
LAB_000d9a62:
  *puVar13 = 0xff;
  puVar13[1] = 0xff;
  puVar13[2] = 0x7f;
  (*pcVar22)();
  Draw_Money_Icon((CCNode *)this,SUB41(piVar3,0));
  if (local_1c == *piVar15) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


