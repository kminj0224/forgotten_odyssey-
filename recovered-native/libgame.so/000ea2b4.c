/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ea2b4  Symbol: Lode_Up_Down */

/* Hero_HeroEquip::Lode_Up_Down(cocos2d::CCNode*) */

void Hero_HeroEquip::Lode_Up_Down(CCNode *param_1)

{
  int *piVar1;
  CCNode *in_r1;
  float in_s0;
  float in_s1;
  undefined8 uVar2;
  CCPoint local_38;
  CCPoint local_34;
  int local_30;
  int local_2c;
  CCPoint local_28;
  CCPoint local_24;
  int local_20;
  int local_1c;
  
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,in_s0,in_s1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  vDrawFrame(in_r1,(char *)(DAT_000ea34c + 0xea2e8),local_38,local_34,local_30,local_2c);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r1,0);
  uVar2 = (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  uVar2 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_28,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  vDrawFrame(in_r1,(char *)(DAT_000ea354 + 0xea328),local_28,local_24,local_20,local_1c);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r1,1);
  (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  return;
}


