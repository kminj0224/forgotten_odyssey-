/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b94fe  Symbol: ani_ani_test_Stop */

/* ani_ani_test_Stop(cocos2d::CCSprite*) */

void ani_ani_test_Stop(CCSprite *param_1)

{
  CCArray *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  this = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))();
  if (this != (CCArray *)0x0) {
    iVar1 = cocos2d::CCArray::count(this);
    uVar3 = 0;
    if (iVar1 != 0) {
      for (; uVar2 = cocos2d::CCArray::count(this), uVar3 < uVar2; uVar3 = uVar3 + 1) {
        cocos2d::CCArray::objectAtIndex(this,uVar3);
        cocos2d::CCNode::stopAllActions();
      }
    }
  }
  return;
}


