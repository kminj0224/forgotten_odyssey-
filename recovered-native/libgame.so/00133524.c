/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00133524  Symbol: initSetIsVisible */

/* GameOption::initSetIsVisible() */

void __thiscall GameOption::initSetIsVisible(GameOption *this)

{
  int *piVar1;
  
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
  (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
  (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,4);
  (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,5);
  (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,6);
  (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  return;
}


