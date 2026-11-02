/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001417a0  Symbol: setTextureAtlas */

/* cocos2d::CCAtlasNode::setTextureAtlas(cocos2d::CCTextureAtlas*) */

void __thiscall cocos2d::CCAtlasNode::setTextureAtlas(CCAtlasNode *this,CCTextureAtlas *param_1)

{
  if (param_1 != (CCTextureAtlas *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  if (*(CCObject **)(this + 0x118) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x118));
  }
  *(CCTextureAtlas **)(this + 0x118) = param_1;
  return;
}


