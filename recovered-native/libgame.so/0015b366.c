/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b366  Symbol: removeChildAtIndex */

/* cocos2d::CCSpriteBatchNode::removeChildAtIndex(unsigned int, bool) */

void __thiscall
cocos2d::CCSpriteBatchNode::removeChildAtIndex(CCSpriteBatchNode *this,uint param_1,bool param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(int *)this + 0xd0);
  uVar1 = CCArray::objectAtIndex(*(CCArray **)(this + 0x40),param_1);
  (*pcVar2)(this,uVar1,param_2);
  return;
}


