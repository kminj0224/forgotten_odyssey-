/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015a07a  Symbol: useBatchNode */

/* cocos2d::CCSprite::useBatchNode(cocos2d::CCSpriteBatchNode*) */

void __thiscall cocos2d::CCSprite::useBatchNode(CCSprite *this,CCSpriteBatchNode *param_1)

{
  undefined4 uVar1;
  
  this[0x128] = (CCSprite)0x1;
  uVar1 = *(undefined4 *)(param_1 + 0x100);
  *(CCSpriteBatchNode **)(this + 0x110) = param_1;
  *(undefined4 *)(this + 0x108) = uVar1;
  return;
}


