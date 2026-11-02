/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011f7dc  Symbol: Draw_Touch_Img */

/* Tutorial_Layer::Draw_Touch_Img() */

void __thiscall Tutorial_Layer::Draw_Touch_Img(Tutorial_Layer *this)

{
  CCSpriteFrameCache *pCVar1;
  int *piVar2;
  CCSpriteFrame *pCVar3;
  CCAnimation *pCVar4;
  int iVar5;
  int *piVar6;
  CCFiniteTimeAction *pCVar7;
  code *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  float extraout_s0;
  float fVar11;
  float extraout_s1;
  undefined8 uVar12;
  int iVar13;
  CCPoint aCStack_4c [8];
  CCPoint aCStack_44 [8];
  char acStack_3c [32];
  undefined4 local_1c;
  
  puVar9 = *(undefined4 **)(DAT_0011f908 + 0x11f7e8);
  local_1c = *puVar9;
  iVar10 = DAT_0011f90c + 0x11f7f0;
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_0011f910 + 0x11f7fa));
  piVar2 = (int *)operator_new(0x20);
  cocos2d::CCObject::CCObject((CCObject *)piVar2);
  iVar5 = DAT_0011f918;
  iVar13 = 1;
  *piVar2 = *(int *)(DAT_0011f914 + 0x11f812) + 8;
  piVar2[5] = 0;
  piVar2[6] = 0;
  piVar2[7] = 0;
  do {
    sprintf(acStack_3c,(char *)(iVar5 + 0x11f826),iVar10,iVar13,iVar13,puVar9);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    pCVar3 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar1,acStack_3c);
    if (pCVar3 != (CCSpriteFrame *)0x0) {
      cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
                ((CCMutableArray<cocos2d::CCSpriteFrame*> *)piVar2,pCVar3);
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 != 3);
  pCVar4 = (CCAnimation *)cocos2d::CCAnimation::animationWithFrames((CCMutableArray *)piVar2);
  iVar5 = cocos2d::CCAnimate::actionWithAnimation(pCVar4);
  *(undefined4 *)(iVar5 + 0x20) = 0x3f000000;
  pCVar3 = (CCSpriteFrame *)(piVar2[6] - (int)(CCSpriteFrame **)piVar2[5] >> 2);
  if (pCVar3 != (CCSpriteFrame *)0x0) {
    pCVar3 = *(CCSpriteFrame **)piVar2[5];
  }
  piVar2 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar3);
  pcVar8 = *(code **)(*piVar2 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_4c,extraout_s0,extraout_s1);
  (*pcVar8)(piVar2,aCStack_4c);
  pcVar8 = *(code **)(*piVar2 + 0x3c);
  piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  (**(code **)(*piVar6 + 0x38))();
  piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  uVar12 = (**(code **)(*piVar6 + 0x38))();
  cocos2d::CCPoint::CCPoint(aCStack_44,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  (*pcVar8)(piVar2,aCStack_44);
  fVar11 = (float)(**(code **)(*(int *)this + 0xcc))(this,piVar2,3,3);
  pCVar7 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(fVar11);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar7,iVar5,0);
}


