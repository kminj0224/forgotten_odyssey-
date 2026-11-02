/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e359c  Symbol: UI_Loding */

/* Market_Store::UI_Loding() */

void Market_Store::UI_Loding(void)

{
  int *in_r0;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
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
  int local_bc;
  CCPoint local_b8;
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
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_c0,in_s0,in_s1);
  uVar7 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000e397c + 0xe35c0),local_c0,local_bc,0);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_b8,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000e3984 + 0xe35de),local_b8,local_b4,1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_b0,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawFrame((CCNode *)in_r0,(char *)(DAT_000e3990 + 0xe35fe),local_b0,local_ac,2);
  cocos2d::CCNode::getChildByTag((CCNode *)in_r0,2);
  uVar7 = Lode_Up_Down((CCNode *)in_r0);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_a8,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawFrame((CCNode *)in_r0,(char *)(DAT_000e3998 + 0xe362c),local_a8,local_a4,3);
  cocos2d::CCNode::getChildByTag((CCNode *)in_r0,3);
  uVar7 = Lode_Up_Down((CCNode *)in_r0);
  piVar4 = *(int **)(DAT_000e399c + 0xe364c);
  piVar6 = *(int **)(DAT_000e39a0 + 0xe3650);
  if (*(char *)(*piVar6 + *piVar4 * 9 + DAT_000e39a4) == '\0') {
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,3);
    uVar7 = (**(code **)(*piVar1 + 0xf4))(piVar1,&local_c4);
  }
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_a0,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawFrame((CCNode *)in_r0,(char *)(DAT_000e39ac + 0xe368e),local_a0,local_9c,4);
  cocos2d::CCNode::getChildByTag((CCNode *)in_r0,4);
  uVar7 = Lode_Up_Down((CCNode *)in_r0);
  if (*(char *)(*piVar6 + *piVar4 * 9 + DAT_000e39b0) == '\0') {
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,4);
    uVar7 = (**(code **)(*piVar1 + 0xf4))(piVar1,&local_c4);
  }
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_98,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawFrame((CCNode *)in_r0,(char *)(DAT_000e39b8 + 0xe36e4),local_98,local_94,5);
  cocos2d::CCNode::getChildByTag((CCNode *)in_r0,5);
  uVar7 = Lode_Up_Down((CCNode *)in_r0);
  if (*(char *)(*piVar6 + *piVar4 * 9 + DAT_000e39bc) == '\0') {
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,5);
    uVar7 = (**(code **)(*piVar1 + 0xf4))(piVar1,&local_c4);
  }
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_90,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawFrame((CCNode *)in_r0,(char *)(DAT_000e39c4 + 0xe373a),local_90,local_8c,6);
  cocos2d::CCNode::getChildByTag((CCNode *)in_r0,6);
  uVar7 = Lode_Up_Down((CCNode *)in_r0);
  if (*(char *)(*piVar6 + *piVar4 * 9 + DAT_000e39c8) == '\0') {
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,6);
    uVar7 = (**(code **)(*piVar1 + 0xf4))(piVar1,&local_c4);
  }
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_88,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000e39d4 + 0xe378e),local_88,local_84,0x68);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_80,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000e39e0 + 0xe37ac),local_80,local_7c,0x69);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_78,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000e39e4 + 0xe37ca),local_78,local_74,0x6a);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_70,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000e39ec + 0xe37e8),local_70,local_6c,0x6b);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_68,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000e39f4 + 0xe3806),local_68,local_64,0x6d);
  uVar7 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_60,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_58,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000e39fc + 0xe3834),local_60,local_5c,local_58,
                     local_54);
  uVar7 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_50,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000e3a08 + 0xe3866),local_50,local_4c,local_48,
                     local_44);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawFrame((CCNode *)in_r0,(char *)(DAT_000e3a10 + 0xe3888),local_40,local_3c,0x6c);
  Item_Buy_Sell_Effect((Market_Store *)in_r0);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0x6d);
  (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0x6e);
  (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0x6f);
  (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0x6c);
  (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  piVar1 = (int *)InventoryLayer::node();
  in_r0[0x4a] = (int)piVar1;
  pcVar5 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_38,extraout_s0,extraout_s1);
  (*pcVar5)(piVar1,aCStack_38);
  (**(code **)(*in_r0 + 0xcc))(in_r0,in_r0[0x4a],100,100);
  piVar1 = (int *)Item_Text_View_Layer::node();
  in_r0[0x4b] = (int)piVar1;
  pcVar5 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0_00,extraout_s1_00);
  (*pcVar5)(piVar1,aCStack_30);
  (**(code **)(*in_r0 + 0xcc))(in_r0,in_r0[0x4b],0x65,0x65);
  piVar1 = (int *)ShopLayer::node();
  in_r0[0x4c] = (int)piVar1;
  pcVar5 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_28,extraout_s0_01,extraout_s1_01);
  (*pcVar5)(piVar1,aCStack_28);
  (**(code **)(*in_r0 + 0xcc))(in_r0,in_r0[0x4c],0x66,0x66);
  piVar1 = (int *)CP_Shop::node();
  in_r0[0x4d] = (int)piVar1;
  pcVar5 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0_02,extraout_s1_02);
  (*pcVar5)(piVar1,aCStack_20);
  (**(code **)(*in_r0 + 0xcc))(in_r0,in_r0[0x4d],0x67,0x67);
  if (*(int *)(*piVar6 + (*piVar4 + DAT_000e3a8c) * 4 + 4) == 0x14) {
    uVar2 = Tutorial_Layer::node();
    (**(code **)(*in_r0 + 0xcc))(in_r0,uVar2,0x71,0x71);
  }
  iVar3 = Inventory_Is_Full();
  if (iVar3 == 0) {
    Stop_inventory_Socket_Effect();
  }
  else {
    Set_Inventory_Socket_Effect((Market_Store *)in_r0);
  }
  return;
}


