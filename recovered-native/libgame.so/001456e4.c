/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001456e4  Symbol: pushScene */

/* cocos2d::CCDirector::pushScene(cocos2d::CCScene*) */

void __thiscall cocos2d::CCDirector::pushScene(CCDirector *this,CCScene *param_1)

{
  this[0x4c] = (CCDirector)0x0;
  CCMutableArray<cocos2d::CCScene*>::addObject
            (*(CCMutableArray<cocos2d::CCScene*> **)(this + 0x50),param_1);
  *(CCScene **)(this + 0x48) = param_1;
  return;
}


