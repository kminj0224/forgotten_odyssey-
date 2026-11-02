/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ded10  Symbol: UI_Loding */

/* Market_Hero::UI_Loding() */

void Market_Hero::UI_Loding(void)

{
  int iVar1;
  int *in_r0;
  CCNode *pCVar2;
  int *piVar3;
  CCActionInterval *pCVar4;
  CCAction *pCVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  float in_s0;
  float extraout_s0;
  float in_s1;
  undefined8 uVar10;
  undefined local_dc;
  undefined local_db;
  undefined local_da;
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
  CCPoint local_78;
  CCPoint local_74;
  int local_70;
  int local_6c;
  CCPoint local_68;
  CCPoint local_64;
  int local_60;
  int local_5c;
  CCPoint local_58;
  CCPoint local_54;
  int local_50;
  int local_4c;
  CCPoint local_48;
  CCPoint local_44;
  int local_40;
  int local_3c;
  CCPoint local_38;
  CCPoint local_34;
  int local_30;
  int local_2c;
  CCPoint local_28;
  CCPoint local_24;
  int local_20;
  int local_1c;
  
  uVar10 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_d8,in_s0,in_s1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_d0,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000df07c + 0xded3a),local_d8,local_d4,local_d0,
                      local_cc);
  uVar10 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_c8,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_c0,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  pcVar7 = (char *)(DAT_000df088 + 0xded6c);
  uVar10 = vDrawFrame((CCNode *)in_r0,pcVar7,local_c8,local_c4,local_c0,local_bc);
  uVar10 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_b8,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_b0,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  iVar1 = DAT_000df090;
  uVar10 = vDrawFrame((CCNode *)in_r0,pcVar7,local_b8,local_b4,local_b0,local_ac);
  uVar10 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_a8,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_a0,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = vDrawFrame((CCNode *)in_r0,pcVar7,local_a8,local_a4,local_a0,local_9c);
  uVar10 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_98,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_90,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000df0a0 + 0xdee04),local_98,local_94,local_90,
                      local_8c);
  uVar10 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_88,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_80,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000df0ac + 0xdee36),local_88,local_84,local_80,
                      local_7c);
  uVar10 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_78,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_70,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000df0b8 + 0xdee68),local_78,local_74,local_70,
                      local_6c);
  piVar9 = *(int **)(iVar1 + 0xdedd4);
  piVar8 = *(int **)(DAT_000df0bc + 0xdee80);
  if (*(int *)(*piVar8 + *piVar9 * 0x24 + DAT_000df0c0) != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0xb);
    uVar10 = set_Icon_New(pCVar2,0,0);
  }
  uVar10 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_68,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_60,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000df0c8 + 0xdeec6),local_68,local_64,local_60,
                      local_5c);
  local_dc = 100;
  local_db = 100;
  local_da = 100;
  if (*(char *)(*piVar8 + *piVar9 * 9 + DAT_000df0cc) == '\0') {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0xc);
    uVar10 = (**(code **)(*piVar3 + 0xf4))(piVar3,&local_dc);
  }
  else if (*(int *)(*piVar8 + *piVar9 * 0x24 + DAT_000df0d0) != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0xc);
    uVar10 = set_Icon_New(pCVar2,0,0);
  }
  uVar10 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_58,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_50,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000df0d8 + 0xdef4a),local_58,local_54,local_50,
                      local_4c);
  if (*(char *)(*piVar8 + *piVar9 * 9 + DAT_000df0dc) == '\0') {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0xd);
    uVar10 = (**(code **)(*piVar3 + 0xf4))(piVar3,&local_dc);
  }
  else if (*(int *)(*piVar8 + *piVar9 * 0x24 + DAT_000df0e0) != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0xd);
    uVar10 = set_Icon_New(pCVar2,0,0);
  }
  uVar10 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_48,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000df0e8 + 0xdefc4),local_48,local_44,local_40,
                      local_3c);
  if (*(char *)(*piVar8 + *piVar9 * 9 + DAT_000df0ec) == '\0') {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0xe);
    uVar10 = (**(code **)(*piVar3 + 0xf4))(piVar3,&local_dc);
  }
  else if (*(int *)(*piVar8 + *piVar9 * 0x24 + DAT_000df0f0) != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0xe);
    uVar10 = set_Icon_New(pCVar2,0,0);
  }
  uVar10 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_38,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000df0f8 + 0xdf03e),local_38,local_34,local_30,
                      local_2c);
  if (*(char *)(*piVar8 + *piVar9 * 9 + DAT_000df0fc) == '\0') {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0xf);
    uVar10 = (**(code **)(*piVar3 + 0xf4))(piVar3,&local_dc);
  }
  else if (*(int *)(*piVar8 + *piVar9 * 0x24 + DAT_000df1dc) != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0xf);
    uVar10 = set_Icon_New(pCVar2,0,0);
  }
  uVar10 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_28,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  vDrawFrame((CCNode *)in_r0,(char *)(DAT_000df1e4 + 0xdf146),local_28,local_24,local_20,local_1c);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0x10);
  pCVar4 = (CCActionInterval *)cocos2d::CCBlink::actionWithDuration(extraout_s0,0x3f800000);
  pCVar5 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(pCVar4);
  cocos2d::CCNode::runAction(pCVar2,pCVar5);
  if (*(int *)(*piVar8 + (*piVar9 + DAT_000df1e8) * 4 + 4) == 0xe) {
    uVar6 = Tutorial_Layer::node();
    (**(code **)(*in_r0 + 0xcc))(in_r0,uVar6,0x17,0x17);
  }
  piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,2);
  (**(code **)(*piVar8 + 0x6c))(piVar8,0);
  piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,3);
  (**(code **)(*piVar8 + 0x6c))(piVar8,0);
  piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,4);
  (**(code **)(*piVar8 + 0x6c))(piVar8,0);
  piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,5);
  (**(code **)(*piVar8 + 0x6c))(piVar8,0);
  return;
}


