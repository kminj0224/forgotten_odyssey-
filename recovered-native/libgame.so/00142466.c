/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142466  Symbol: runAction */

/* cocos2d::CCNode::runAction(cocos2d::CCAction*) */

CCAction * __thiscall cocos2d::CCNode::runAction(CCNode *this,CCAction *param_1)

{
  CCActionManager *this_00;
  
  this_00 = (CCActionManager *)CCActionManager::sharedManager();
  CCActionManager::addAction(this_00,param_1,this,(bool)((byte)this[0x70] ^ 1));
  return param_1;
}


