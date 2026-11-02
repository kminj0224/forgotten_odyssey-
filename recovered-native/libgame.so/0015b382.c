/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b382  Symbol: increaseAtlasCapacity */

/* cocos2d::CCSpriteBatchNode::increaseAtlasCapacity() */

void __thiscall cocos2d::CCSpriteBatchNode::increaseAtlasCapacity(CCSpriteBatchNode *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(**(int **)(this + 0x100) + 0x18))();
  uVar2 = __udivsi3((iVar1 + 1) * 4,3);
  CCTextureAtlas::resizeCapacity(*(CCTextureAtlas **)(this + 0x100),uVar2);
  return;
}


