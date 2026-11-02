/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001371ac  Symbol: startWithTarget */

/* cocos2d::CCAction::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCAction::startWithTarget(CCAction *this,CCNode *param_1)

{
  *(CCNode **)(this + 0x18) = param_1;
  *(CCNode **)(this + 0x14) = param_1;
  return;
}


