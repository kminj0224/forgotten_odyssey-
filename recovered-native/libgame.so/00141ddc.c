/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00141ddc  Symbol: getVertexZ */

/* cocos2d::CCNode::getVertexZ() */

void __thiscall cocos2d::CCNode::getVertexZ(CCNode *this)

{
  CCDirector *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(this + 0x18);
  this_00 = (CCDirector *)CCDirector::sharedDirector();
  uVar1 = CCDirector::getContentScaleFactor(this_00);
  __divsf3(uVar2,uVar1);
  return;
}


