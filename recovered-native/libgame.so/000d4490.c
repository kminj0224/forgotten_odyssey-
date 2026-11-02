/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d4490  Symbol: Lode_Cash */

/* In_App_Layer::Lode_Cash() */

void __thiscall In_App_Layer::Lode_Cash(In_App_Layer *this)

{
  undefined4 uVar1;
  CCNode *pCVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
  _ccColor4B local_ec;
  undefined local_eb;
  undefined local_ea;
  undefined local_e9;
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
  
  local_ec = (_ccColor4B)0x0;
  local_eb = 0;
  local_ea = 0;
  local_e9 = 0xaa;
  uVar1 = cocos2d::CCLayerColor::layerWithColor(&local_ec);
  uVar9 = (**(code **)(*(int *)this + 0xcc))(this,uVar1,0,0);
  uVar9 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_e8,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_e0,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  uVar9 = vDrawFrame((CCNode *)this,(char *)(DAT_000d47d0 + 0xd44de),local_e8,local_e4,local_e0,
                     local_dc);
  uVar9 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_d8,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_d0,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  uVar9 = vDrawFrame((CCNode *)this,(char *)(DAT_000d47d8 + 0xd450e),local_d8,local_d4,local_d0,
                     local_cc);
  uVar9 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_c8,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_c0,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  pcVar7 = (char *)(DAT_000d47e4 + 0xd453e);
  uVar9 = vDrawFrame((CCNode *)this,pcVar7,local_c8,local_c4,local_c0,local_bc);
  uVar9 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_b8,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_b0,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  vDrawFrame((CCNode *)this,pcVar7,local_b8,local_b4,local_b0,local_ac);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  __mulsf3(*puVar4,0x3f000000);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
  iVar5 = (**(code **)(*piVar3 + 0x7c))();
  uVar9 = __mulsf3(*(undefined4 *)(iVar5 + 4),0x3f000000);
  uVar9 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_a8,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_a0,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  vDrawFrame(pCVar2,(char *)(DAT_000d47ec + 0xd45d6),local_a8,local_a4,local_a0,local_9c);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,4);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,4);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  __mulsf3(*puVar4,0x3f000000);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,4);
  iVar5 = (**(code **)(*piVar3 + 0x7c))();
  uVar9 = __mulsf3(*(undefined4 *)(iVar5 + 4),0x3f000000);
  uVar9 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_98,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_90,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  uVar9 = vDrawFrame(pCVar2,(char *)(DAT_000d47f0 + 0xd463e),local_98,local_94,local_90,local_8c);
  uVar9 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_88,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_80,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  uVar9 = vDrawFrame((CCNode *)this,(char *)(DAT_000d47fc + 0xd466c),local_88,local_84,local_80,
                     local_7c);
  uVar9 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_78,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_70,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  uVar9 = vDrawFrame((CCNode *)this,(char *)(DAT_000d4800 + 0xd469c),local_78,local_74,local_70,
                     local_6c);
  uVar9 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_68,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_60,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  uVar9 = vDrawFrame((CCNode *)this,(char *)(DAT_000d4808 + 0xd46ce),local_68,local_64,local_60,
                     local_5c);
  uVar9 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_58,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_50,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  uVar9 = vDrawFrame((CCNode *)this,(char *)(DAT_000d4810 + 0xd46fe),local_58,local_54,local_50,
                     local_4c);
  uVar9 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_48,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  uVar9 = vDrawFrame((CCNode *)this,(char *)(DAT_000d4814 + 0xd472e),local_48,local_44,local_40,
                     local_3c);
  uVar9 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_38,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  uVar9 = vDrawFrame((CCNode *)this,(char *)(DAT_000d4818 + 0xd475e),local_38,local_34,local_30,
                     local_2c);
  uVar9 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  vDrawFrame((CCNode *)this,(char *)(DAT_000d4820 + 0xd4790),local_28,local_24,local_20,local_1c);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xe);
  pcVar8 = *(code **)(*piVar3 + 0x3c);
  piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,5);
  uVar1 = (**(code **)(*piVar6 + 0x38))();
  (*pcVar8)(piVar3,uVar1);
  *(undefined4 *)(this + 0x114) = 0;
  return;
}


