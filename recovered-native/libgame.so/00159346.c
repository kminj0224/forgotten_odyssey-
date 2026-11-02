/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159346  Symbol: addFrameWithTexture */

/* cocos2d::CCAnimation::addFrameWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&) */

void __thiscall
cocos2d::CCAnimation::addFrameWithTexture(CCAnimation *this,CCTexture2D *param_1,CCRect *param_2)

{
  CCSpriteFrame *pCVar1;
  
  pCVar1 = (CCSpriteFrame *)CCSpriteFrame::frameWithTexture(param_1,param_2);
  CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
            (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x1c),pCVar1);
  return;
}


