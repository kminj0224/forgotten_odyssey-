/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e6858  Symbol: SetPage */

/* MarketLayer::SetPage(int) */

void __thiscall MarketLayer::SetPage(MarketLayer *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  CCNode *pCVar3;
  code *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s1;
  undefined8 uVar7;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  CCPoint local_a8;
  CCPoint local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  CCPoint local_80;
  CCPoint local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  CCPoint local_58;
  CCPoint local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  CCPoint local_30;
  CCPoint local_2c;
  CCPoint local_28;
  CCPoint local_24;
  CCPoint local_20;
  CCPoint local_1c;
  
  iVar6 = 0x15;
  do {
    iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,iVar6);
    if (iVar1 != 0) {
      pcVar4 = *(code **)(*(int *)this + 0xd0);
      uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,iVar6);
      (*pcVar4)(this,uVar2,1);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x18);
  iVar6 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x18);
  uVar7 = CONCAT44(extraout_s1,extraout_s0);
  if (iVar6 != 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x18);
    uVar7 = cocos2d::CCNode::removeFromParentAndCleanup(pCVar3,true);
  }
  uVar7 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_30,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_28,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_20,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  if (param_1 == 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
    iVar6 = cocos2d::CCNode::getChildByTag(pCVar3,0);
    uVar7 = CONCAT44(extraout_s1_00,extraout_s0_00);
    if (iVar6 == 0) {
      iVar6 = 0;
      do {
        if (*(int *)(**(int **)(DAT_000e6b40 + 0xe68e0) + **(int **)(DAT_000e6b44 + 0xe68e8) * 0x24
                     + iVar6 + 0x2440) != 0) {
          pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
          uVar7 = set_Icon_New(pCVar3,0,0);
          break;
        }
        iVar6 = iVar6 + 4;
        uVar7 = CONCAT44(extraout_s1_00,extraout_s0_00);
      } while (iVar6 != 0x24);
    }
    uVar7 = cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&local_a8,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_a0,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    uVar7 = vDrawFrame((CCNode *)this,(char *)(DAT_000e6b50 + 0xe693a),local_a8,local_a4,local_a0,
                       local_9c);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_98,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    uVar7 = vDrawFrame((CCNode *)this,(char *)(DAT_000e6b54 + 0xe6962),local_30,local_2c,local_98,
                       local_94);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_90,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    pcVar5 = (char *)(DAT_000e6b58 + 0xe698a);
    uVar7 = vDrawFrame((CCNode *)this,pcVar5,local_28,local_24,local_90,local_8c);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_88,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    local_38 = local_88;
    local_34 = local_84;
  }
  else if (param_1 == 1) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
    iVar6 = cocos2d::CCNode::getChildByTag(pCVar3,0);
    uVar7 = CONCAT44(extraout_s1_01,extraout_s0_01);
    if (iVar6 != 0) {
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar3,0);
      uVar7 = cocos2d::CCNode::removeFromParentAndCleanup(pCVar3,true);
    }
    uVar7 = cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&local_80,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_78,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    uVar7 = vDrawFrame((CCNode *)this,(char *)(DAT_000e6b5c + 0xe69fc),local_80,local_7c,local_78,
                       local_74);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_70,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    pcVar5 = (char *)(DAT_000e6b60 + 0xe6a24);
    uVar7 = vDrawFrame((CCNode *)this,pcVar5,local_30,local_2c,local_70,local_6c);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_68,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    uVar7 = vDrawFrame((CCNode *)this,(char *)(DAT_000e6b64 + 0xe6a4e),local_28,local_24,local_68,
                       local_64);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_60,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    local_38 = local_60;
    local_34 = local_5c;
  }
  else {
    uVar7 = cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&local_58,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_50,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    uVar7 = vDrawFrame((CCNode *)this,(char *)(DAT_000e6b68 + 0xe6aa0),local_58,local_54,local_50,
                       local_4c);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    pcVar5 = (char *)(DAT_000e6b6c + 0xe6ac8);
    uVar7 = vDrawFrame((CCNode *)this,pcVar5,local_30,local_2c,local_48,local_44);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    uVar7 = vDrawFrame((CCNode *)this,pcVar5,local_28,local_24,local_40,local_3c);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    pcVar5 = (char *)(DAT_000e6b70 + 0xe6b18);
  }
  vDrawFrame((CCNode *)this,pcVar5,local_20,local_1c,local_38,local_34);
  *(int *)(this + 0x124) = param_1;
  return;
}


