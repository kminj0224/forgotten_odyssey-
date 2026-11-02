/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00141dc2  Symbol: setVertexZ */

/* cocos2d::CCNode::setVertexZ(float) */

void __thiscall cocos2d::CCNode::setVertexZ(CCNode *this,float param_1)

{
  CCDirector *this_00;
  undefined4 uVar1;
  undefined4 in_r1;
  
  this_00 = (CCDirector *)CCDirector::sharedDirector();
  uVar1 = CCDirector::getContentScaleFactor(this_00);
  uVar1 = __mulsf3(in_r1,uVar1);
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


