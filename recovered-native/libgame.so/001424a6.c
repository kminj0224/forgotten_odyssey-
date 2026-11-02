/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001424a6  Symbol: stopActionByTag */

/* cocos2d::CCNode::stopActionByTag(int) */

void __thiscall cocos2d::CCNode::stopActionByTag(CCNode *this,int param_1)

{
  CCActionManager *this_00;
  
  this_00 = (CCActionManager *)CCActionManager::sharedManager();
  CCActionManager::removeActionByTag(this_00,param_1,(CCObject *)this);
  return;
}


