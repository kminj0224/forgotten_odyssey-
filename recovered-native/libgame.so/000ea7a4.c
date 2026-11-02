/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ea7a4  Symbol: Lode_img */

/* Hero_HeroEquip::Lode_img() */

void Hero_HeroEquip::Lode_img(void)

{
  int iVar1;
  int *in_r0;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int **ppiVar5;
  int *piVar6;
  float in_s0;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float in_s1;
  undefined8 uVar7;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  undefined local_c4;
  undefined local_c3;
  undefined local_c2;
  CCPoint local_c0;
  CCPoint local_bc;
  int local_b8;
  int local_b4;
  CCPoint local_b0;
  int local_ac;
  CCPoint local_a8;
  int local_a4;
  CCPoint local_a0;
  int local_9c;
  CCPoint local_98;
  int local_94;
  CCPoint local_90;
  int local_8c;
  CCPoint local_88;
  int local_84;
  CCPoint local_80;
  int local_7c;
  CCPoint local_78;
  int local_74;
  CCPoint local_70;
  int local_6c;
  CCPoint local_68;
  int local_64;
  CCPoint local_60;
  CCPoint local_5c;
  int local_58;
  int local_54;
  CCPoint local_50;
  CCPoint local_4c;
  int local_48;
  int local_44;
  CCPoint local_40;
  int local_3c;
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  local_c4 = 100;
  local_c3 = 100;
  local_c2 = 100;
  uVar7 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_c0,in_s0,in_s1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_b8,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000eab88 + 0xea7d8),local_c0,local_bc,local_b8,
                     local_b4);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_b0,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000eab90 + 0xea7fa),local_b0,local_ac,1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_a8,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawFrame((CCNode *)in_r0,(char *)(DAT_000eab9c + 0xea81a),local_a8,local_a4,2);
  cocos2d::CCNode::getChildByTag((CCNode *)in_r0,2);
  uVar7 = Lode_Up_Down((CCNode *)in_r0);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_a0,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawFrame((CCNode *)in_r0,(char *)(DAT_000eaba4 + 0xea848),local_a0,local_9c,3);
  cocos2d::CCNode::getChildByTag((CCNode *)in_r0,3);
  iVar1 = DAT_000eabac;
  ppiVar5 = (int **)(DAT_000eaba8 + 0xea862);
  uVar7 = Lode_Up_Down((CCNode *)in_r0);
  piVar6 = *ppiVar5;
  piVar3 = *(int **)(iVar1 + 0xea86c);
  if (*(char *)(*piVar3 + *piVar6 * 9 + DAT_000eabb0) == '\0') {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,3);
    uVar7 = (**(code **)(*piVar2 + 0xf4))(piVar2,&local_c4);
  }
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_98,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawFrame((CCNode *)in_r0,(char *)(DAT_000eabb8 + 0xea8a8),local_98,local_94,4);
  cocos2d::CCNode::getChildByTag((CCNode *)in_r0,4);
  uVar7 = Lode_Up_Down((CCNode *)in_r0);
  if (*(char *)(*piVar3 + *piVar6 * 9 + DAT_000eabbc) == '\0') {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,4);
    uVar7 = (**(code **)(*piVar2 + 0xf4))(piVar2,&local_c4);
  }
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_90,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawFrame((CCNode *)in_r0,(char *)(DAT_000eabc4 + 0xea8fc),local_90,local_8c,5);
  cocos2d::CCNode::getChildByTag((CCNode *)in_r0,5);
  uVar7 = Lode_Up_Down((CCNode *)in_r0);
  if (*(char *)(*piVar3 + *piVar6 * 9 + DAT_000eabc8) == '\0') {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,5);
    uVar7 = (**(code **)(*piVar2 + 0xf4))(piVar2,&local_c4);
  }
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_88,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawFrame((CCNode *)in_r0,(char *)(DAT_000eabd0 + 0xea950),local_88,local_84,6);
  cocos2d::CCNode::getChildByTag((CCNode *)in_r0,6);
  uVar7 = Lode_Up_Down((CCNode *)in_r0);
  if (*(char *)(*piVar3 + *piVar6 * 9 + DAT_000eabd4) == '\0') {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,6);
    uVar7 = (**(code **)(*piVar3 + 0xf4))(piVar3,&local_c4);
  }
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_80,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000eabe0 + 0xea9aa),local_80,local_7c,10);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_78,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000eabec + 0xea9c8),local_78,local_74,0xb);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_70,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000eabf4 + 0xea9e6),local_70,local_6c,0xc);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_68,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000eabfc + 0xeaa00),local_68,local_64,0xe);
  uVar7 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_60,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_58,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000eac04 + 0xeaa30),local_60,local_5c,local_58,
                     local_54);
  uVar7 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_50,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000eac10 + 0xeaa62),local_50,local_4c,local_48,
                     local_44);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawFrame((CCNode *)in_r0,(char *)(DAT_000eac18 + 0xeaa86),local_40,local_3c,0xd);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0xe);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0xf);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0x10);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0xd);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  piVar3 = (int *)N_Draw_Number::node();
  in_r0[0x4a] = (int)piVar3;
  pcVar4 = *(code **)(*piVar3 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_38,extraout_s0,extraout_s1);
  (*pcVar4)(piVar3,aCStack_38);
  (**(code **)(*in_r0 + 0xcc))(in_r0,in_r0[0x4a],0x14,0x14);
  N_Draw_Number::SetNumberFont((N_Draw_Number *)in_r0[0x4a],3);
  N_Draw_Number::SetNumber((N_Draw_Number *)in_r0[0x4a],1,2);
  piVar3 = (int *)N_Draw_Number::node();
  in_r0[0x4b] = (int)piVar3;
  pcVar4 = *(code **)(*piVar3 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0_00,extraout_s1_00);
  (*pcVar4)(piVar3,aCStack_30);
  (**(code **)(*in_r0 + 0xcc))(in_r0,in_r0[0x4b],0x15,0x15);
  N_Draw_Number::SetNumberFont((N_Draw_Number *)in_r0[0x4b],3);
  N_Draw_Number::SetNumber((N_Draw_Number *)in_r0[0x4b],2,2);
  Hero_Lode((Hero_HeroEquip *)in_r0,in_r0[0x44]);
  piVar3 = (int *)InventoryLayer::node();
  in_r0[0x45] = (int)piVar3;
  pcVar4 = *(code **)(*piVar3 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_28,extraout_s0_01,extraout_s1_01);
  (*pcVar4)(piVar3,aCStack_28);
  (**(code **)(*in_r0 + 0xcc))(in_r0,in_r0[0x45],0x11,0x11);
  piVar3 = (int *)Item_Text_View_Layer::node();
  in_r0[0x46] = (int)piVar3;
  pcVar4 = *(code **)(*piVar3 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0_02,extraout_s1_02);
  (*pcVar4)(piVar3,aCStack_20);
  (**(code **)(*in_r0 + 0xcc))(in_r0,in_r0[0x46],0x12,0x12);
  return;
}


