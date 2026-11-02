/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e9534  Symbol: SetSkillLevel */

/* Hero_BaseSkill::SetSkillLevel(int) */

void __thiscall Hero_BaseSkill::SetSkillLevel(Hero_BaseSkill *this,int param_1)

{
  char cVar1;
  int iVar2;
  CCNode *pCVar3;
  int *piVar4;
  int *piVar5;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  undefined8 uVar6;
  float fVar7;
  int iVar8;
  CCPoint local_40;
  int local_3c;
  CCPoint local_38;
  CCPoint local_34;
  int local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xf);
  if (iVar2 != 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xf);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar3,true);
  }
  iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x10);
  if (iVar2 != 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x10);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar3,true);
  }
  iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x11);
  uVar6 = CONCAT44(extraout_s1,extraout_s0);
  if (iVar2 != 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x11);
    uVar6 = cocos2d::CCNode::removeFromParentAndCleanup(pCVar3,true);
  }
  fVar7 = (float)((ulonglong)uVar6 >> 0x20);
  piVar5 = *(int **)(DAT_000e9668 + 0xe9592);
  piVar4 = *(int **)(DAT_000e966c + 0xe9596);
  iVar2 = (int)*(char *)(*piVar4 + *piVar5 * 0x6c + param_1 + DAT_000e9670);
  if (iVar2 < 10) {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar6,fVar7);
    uVar6 = vDrawNumber((CCNode *)this,iVar2,local_40,local_3c,7,0,0xf);
    uVar6 = cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&local_38,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    uVar6 = vDrawFrame((CCNode *)this,(char *)(DAT_000e9680 + 0xe95f8),local_38,local_34,local_30,
                       local_2c);
    cVar1 = *(char *)(*piVar4 + *piVar5 * 0x6c + param_1 + DAT_000e9670);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    iVar2 = cVar1 + 1;
    iVar8 = 0x10;
  }
  else {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar6,fVar7);
    iVar8 = 0xf;
    local_28 = local_20;
    local_24 = local_1c;
  }
  vDrawNumber((CCNode *)this,iVar2,local_28,local_24,7,0,iVar8);
  return;
}


