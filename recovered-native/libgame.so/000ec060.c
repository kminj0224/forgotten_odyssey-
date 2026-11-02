/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ec060  Symbol: SetUpgrade_Button */

/* Hero_HeroSkill::SetUpgrade_Button(int) */

void __thiscall Hero_HeroSkill::SetUpgrade_Button(Hero_HeroSkill *this,int param_1)

{
  int iVar1;
  CCNode *this_00;
  char *pcVar2;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  undefined8 uVar3;
  float fVar4;
  CCPoint local_30;
  CCPoint local_2c;
  int local_28;
  int local_24;
  CCPoint local_20;
  CCPoint local_1c;
  int local_18;
  int local_14;
  
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x2b);
  uVar3 = CONCAT44(extraout_s1,extraout_s0);
  if (iVar1 != 0) {
    this_00 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x2b);
    uVar3 = cocos2d::CCNode::removeFromParentAndCleanup(this_00,true);
  }
  fVar4 = (float)((ulonglong)uVar3 >> 0x20);
  if (*(char *)(**(int **)(DAT_000ec118 + 0xec08a) +
                **(int **)(DAT_000ec11c + 0xec096) * 0x6c + *(int *)(this + 0x110) * 0xc + param_1 +
               DAT_000ec120) < '\n') {
    uVar3 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar3,fVar4);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
    pcVar2 = (char *)(DAT_000ec12c + 0xec0d4);
  }
  else {
    uVar3 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar3,fVar4);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
    pcVar2 = (char *)(DAT_000ec130 + 0xec104);
    local_30 = local_20;
    local_2c = local_1c;
    local_28 = local_18;
    local_24 = local_14;
  }
  vDrawFrame((CCNode *)this,pcVar2,local_30,local_2c,local_28,local_24);
  return;
}


