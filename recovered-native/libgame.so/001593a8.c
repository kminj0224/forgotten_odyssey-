/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001593a8  Symbol: addFrame */

/* cocos2d::CCAnimation::addFrame(cocos2d::CCSpriteFrame*) */

void __thiscall cocos2d::CCAnimation::addFrame(CCAnimation *this,CCSpriteFrame *param_1)

{
  CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
            (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x1c),param_1);
  return;
}


