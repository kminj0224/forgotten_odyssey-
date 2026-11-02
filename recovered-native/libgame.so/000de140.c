/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000de140  Symbol: Hero_img_Draw */

/* Market_Hero::Hero_img_Draw(int) */

void __thiscall Market_Hero::Hero_img_Draw(Market_Hero *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  CCNode *pCVar3;
  int *piVar4;
  undefined4 *puVar5;
  _ccColor3B _Var6;
  CCFiniteTimeAction *pCVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  code *pcVar11;
  undefined4 extraout_s0;
  float fVar12;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  undefined4 extraout_s1;
  undefined8 uVar13;
  float fVar14;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s2;
  float extraout_s2_00;
  undefined4 in_stack_fffffeb0;
  undefined uVar15;
  undefined local_134;
  undefined local_133;
  undefined local_132;
  undefined2 local_130;
  undefined local_12e;
  undefined2 local_12c;
  undefined local_12a;
  undefined2 local_128;
  undefined local_126;
  undefined2 local_124;
  undefined local_122;
  CCPoint local_120;
  int local_11c;
  CCPoint local_118;
  CCPoint local_114;
  int local_110;
  int local_10c;
  CCPoint local_108;
  CCPoint local_104;
  int local_100;
  int local_fc;
  CCPoint local_f8;
  CCPoint local_f4;
  int local_f0;
  int local_ec;
  CCPoint local_e8;
  CCPoint local_e4;
  int local_e0;
  int local_dc;
  CCPoint local_d8;
  CCPoint local_d4;
  int local_d0;
  int local_cc;
  CCPoint local_c8;
  CCPoint local_c4;
  int local_c0;
  int local_bc;
  CCPoint local_b8;
  CCPoint local_b4;
  int local_b0;
  int local_ac;
  CCPoint local_a8;
  CCPoint local_a4;
  int local_a0;
  int local_9c;
  CCPoint local_98;
  CCPoint local_94;
  int local_90;
  int local_8c;
  CCPoint local_88;
  CCPoint local_84;
  int local_80;
  int local_7c;
  CCPoint aCStack_78 [8];
  CCPoint aCStack_70 [8];
  CCPoint local_68;
  CCPoint local_64;
  char *local_60;
  int local_5c;
  CCPoint local_58;
  CCPoint local_54;
  char *local_50;
  int local_4c;
  CCPoint local_48;
  CCPoint local_44;
  char *local_40;
  int local_3c;
  CCPoint local_38;
  CCPoint local_34;
  char *local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint aCStack_20 [12];
  
  uVar15 = (undefined)((uint)in_stack_fffffeb0 >> 0x18);
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,6);
  if (iVar1 != 0) {
    pcVar11 = *(code **)(*(int *)this + 0xd0);
    uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,6);
    (*pcVar11)(this,uVar2,1);
  }
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,7);
  if (iVar1 != 0) {
    pcVar11 = *(code **)(*(int *)this + 0xd0);
    uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,7);
    (*pcVar11)(this,uVar2,1);
  }
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x12);
  if (iVar1 != 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x12);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar3,true);
  }
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x11);
  if (iVar1 != 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x11);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar3,true);
  }
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,10);
  if (iVar1 != 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,10);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar3,true);
  }
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x13);
  uVar13 = CONCAT44(extraout_s1,extraout_s0);
  if (iVar1 != 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x13);
    uVar13 = cocos2d::CCNode::removeFromParentAndCleanup(pCVar3,true);
  }
  piVar10 = *(int **)(DAT_000de560 + 0xde1fa);
  piVar9 = *(int **)(DAT_000de564 + 0xde1fe);
  if (*(int *)((*piVar10 * 9 + param_1 + 0x910) * 4 + *piVar9) != 0) {
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&local_120,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    uVar13 = set_Icon_New((CCNode *)this,local_120,local_11c,10);
  }
  fVar14 = (float)((ulonglong)uVar13 >> 0x20);
  fVar12 = (float)uVar13;
  if (param_1 == 1) {
    uVar13 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_118,fVar12,fVar14);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&local_110,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    piVar4 = (int *)vDrawFrame((CCNode *)this,(char *)(DAT_000de570 + 0xde258),local_118,local_114,
                               local_110,local_10c);
    uVar13 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_108,extraout_s0_00,extraout_s1_00);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&local_100,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    pcVar8 = (char *)(DAT_000de57c + 0xde28a);
LAB_000de426:
    uVar13 = vDrawFrame((CCNode *)this,pcVar8,local_108,local_104,local_100,local_fc);
  }
  else {
    if (param_1 == 2) {
      uVar13 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_f8,fVar12,fVar14);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_f0,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      piVar4 = (int *)vDrawFrame((CCNode *)this,(char *)(DAT_000de580 + 0xde2bc),local_f8,local_f4,
                                 local_f0,local_ec);
      uVar13 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_e8,extraout_s0_01,extraout_s1_01);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_e0,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      pcVar8 = (char *)(DAT_000de584 + 0xde2ee);
      local_108 = local_e8;
      local_104 = local_e4;
      local_100 = local_e0;
      local_fc = local_dc;
      goto LAB_000de426;
    }
    if (param_1 == 3) {
      uVar13 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_d8,fVar12,fVar14);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_d0,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      piVar4 = (int *)vDrawFrame((CCNode *)this,(char *)(DAT_000de588 + 0xde320),local_d8,local_d4,
                                 local_d0,local_cc);
      uVar13 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_c8,extraout_s0_02,extraout_s1_02);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_c0,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      pcVar8 = (char *)(DAT_000de58c + 0xde352);
      local_108 = local_c8;
      local_104 = local_c4;
      local_100 = local_c0;
      local_fc = local_bc;
      goto LAB_000de426;
    }
    if (param_1 == 4) {
      uVar13 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_b8,fVar12,fVar14);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_b0,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      piVar4 = (int *)vDrawFrame((CCNode *)this,(char *)(DAT_000de590 + 0xde384),local_b8,local_b4,
                                 local_b0,local_ac);
      uVar13 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_a8,extraout_s0_03,extraout_s1_03);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_a0,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      pcVar8 = (char *)(DAT_000de594 + 0xde3b6);
      local_108 = local_a8;
      local_104 = local_a4;
      local_100 = local_a0;
      local_fc = local_9c;
      goto LAB_000de426;
    }
    piVar4 = (int *)0x0;
    if (param_1 == 5) {
      uVar13 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_98,fVar12,fVar14);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_90,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      piVar4 = (int *)vDrawFrame((CCNode *)this,(char *)(DAT_000de598 + 0xde3ea),local_98,local_94,
                                 local_90,local_8c);
      uVar13 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_88,extraout_s0_04,extraout_s1_04);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_80,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      pcVar8 = (char *)(DAT_000de59c + 0xde41c);
      local_108 = local_88;
      local_104 = local_84;
      local_100 = local_80;
      local_fc = local_7c;
      goto LAB_000de426;
    }
  }
  pcVar11 = *(code **)(*piVar4 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_78,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  (*pcVar11)(piVar4,aCStack_78);
  pcVar11 = *(code **)(*piVar4 + 0x3c);
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x7c))(piVar4);
  uVar2 = __mulsf3(*puVar5,0x3f000000);
  uVar13 = __addsf3(uVar2,0x41800000);
  cocos2d::CCPoint::CCPoint(aCStack_70,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  (*pcVar11)(piVar4,aCStack_70);
  uVar13 = (**(code **)(*piVar4 + 0x2c))(piVar4,DAT_000de5a4);
  local_134 = 0;
  local_133 = 0;
  local_132 = 0;
  if (*(char *)(*piVar9 + *piVar10 * 9 + param_1 + DAT_000de5a8) != '\0') {
    pCVar7 = (CCFiniteTimeAction *)
             cocos2d::CCScaleTo::actionWithDuration
                       ((float)uVar13,(float)((ulonglong)uVar13 >> 0x20),extraout_s2);
    uVar2 = cocos2d::CCScaleTo::actionWithDuration(extraout_s0_05,extraout_s1_05,extraout_s2_00);
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar7,uVar2,0);
  }
  (**(code **)(*piVar4 + 0xf4))(piVar4,&local_134);
  piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,7);
  uVar13 = (**(code **)(*piVar4 + 0xf4))(piVar4,&local_134);
  fVar14 = (float)((ulonglong)uVar13 >> 0x20);
  fVar12 = (float)uVar13;
  if (param_1 == 2) {
    uVar13 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_68,fVar12,fVar14);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_60,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20))
    ;
    local_130 = 0xffff;
    local_12e = 0xff;
    pcVar8 = (char *)(DAT_000de5b4 + 0xde4ee);
    _Var6 = DAT_000de5b8 + 0xde4f0;
    iVar1 = CONCAT22((short)(CONCAT13(uVar15,0xff0000) >> 0x10),0xffff);
  }
  else if (param_1 == 3) {
    uVar13 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_58,fVar12,fVar14);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_50,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20))
    ;
    local_12c = 0xffff;
    local_12a = 0xff;
    pcVar8 = (char *)(DAT_000de5bc + 0xde53e);
    _Var6 = DAT_000de5c0 + 0xde540;
    iVar1 = CONCAT22((short)(CONCAT13(uVar15,0xff0000) >> 0x10),0xffff);
    local_68 = local_58;
    local_64 = local_54;
    local_60 = local_50;
    local_5c = local_4c;
  }
  else if (param_1 == 4) {
    uVar13 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,fVar12,fVar14);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20))
    ;
    local_128 = 0xffff;
    local_126 = 0xff;
    pcVar8 = (char *)(DAT_000de71c + 0xde5f8);
    _Var6 = DAT_000de720 + 0xde5fa;
    iVar1 = CONCAT22((short)(CONCAT13(uVar15,0xff0000) >> 0x10),0xffff);
    local_68 = local_48;
    local_64 = local_44;
    local_60 = local_40;
    local_5c = local_3c;
  }
  else {
    if (param_1 != 5) goto LAB_000de696;
    uVar13 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,fVar12,fVar14);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20))
    ;
    local_124 = 0xffff;
    local_122 = 0xff;
    pcVar8 = (char *)(DAT_000de728 + 0xde648);
    _Var6 = DAT_000de72c + 0xde64a;
    iVar1 = CONCAT22((short)(CONCAT13(uVar15,0xff0000) >> 0x10),0xffff);
    local_68 = local_38;
    local_64 = local_34;
    local_60 = local_30;
    local_5c = local_2c;
  }
  uVar13 = vDrawString((CCNode *)this,pcVar8,local_68,local_64,local_60,local_5c,_Var6,0xc,iVar1);
LAB_000de696:
  if (*(char *)(*piVar9 + *piVar10 + DAT_000de73c + 4) == param_1) {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20))
    ;
    vDrawFrame((CCNode *)this,(char *)(DAT_000de744 + 0xde6c4),local_28,local_24,0x11);
  }
  piVar9 = *(int **)(DAT_000de748 + 0xde6d6);
  *(int *)(this + 0x114) = param_1;
  *piVar9 = param_1;
  piVar9 = (int *)Equip_Layer::node();
  *(int **)(this + 0x138) = piVar9;
  pcVar11 = *(code **)(*piVar9 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0_06,extraout_s1_06);
  (*pcVar11)(piVar9,aCStack_20);
  (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x138),0x12,0x12);
  SetHeroState(this);
  return;
}


