/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b042  Symbol: isFrameDisplayed */

/* cocos2d::CCSprite::isFrameDisplayed(cocos2d::CCSpriteFrame*) */

uint __thiscall cocos2d::CCSprite::isFrameDisplayed(CCSprite *this,CCSpriteFrame *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  CCRect local_1c [2];
  
  local_28 = *(undefined4 *)(param_1 + 0x28);
  uStack_24 = *(undefined4 *)(param_1 + 0x2c);
  uStack_20 = *(undefined4 *)(param_1 + 0x30);
  local_1c[0] = *(CCRect *)(param_1 + 0x34);
  uVar1 = CCRect::CCRectEqualToRect((CCRect *)&local_28,(CCRect *)(this + 300),local_1c);
  if (uVar1 != 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x48) + 0x20))();
    iVar3 = (**(code **)(**(int **)(this + 0x124) + 0x20))();
    uVar1 = (uint)(iVar2 == iVar3);
  }
  return uVar1;
}


