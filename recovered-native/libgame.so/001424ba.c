/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001424ba  Symbol: getActionByTag */

/* cocos2d::CCNode::getActionByTag(int) */

void __thiscall cocos2d::CCNode::getActionByTag(CCNode *this,int param_1)

{
  CCActionManager *this_00;
  
  this_00 = (CCActionManager *)CCActionManager::sharedManager();
  CCActionManager::getActionByTag(this_00,param_1,(CCObject *)this);
  return;
}


