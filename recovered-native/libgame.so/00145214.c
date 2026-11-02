/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00145214  Symbol: setNotificationNode */

/* cocos2d::CCDirector::setNotificationNode(cocos2d::CCNode*) */

void __thiscall cocos2d::CCDirector::setNotificationNode(CCDirector *this,CCNode *param_1)

{
  if (*(CCObject **)(this + 0x7c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x7c));
  }
  *(CCNode **)(this + 0x7c) = param_1;
  if (param_1 != (CCNode *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  return;
}


