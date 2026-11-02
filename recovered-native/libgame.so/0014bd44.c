/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014bd44  Symbol: setNewScene */

/* cocos2d::CCTransitionScene::setNewScene(float) */

undefined4 cocos2d::CCTransitionScene::setNewScene(float param_1)

{
  _func_void_float *in_r0;
  CCDirector *this;
  CCTouchDispatcher *this_00;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(DAT_0014bd88 + 0x14bd50);
  CCNode::unschedule(in_r0);
  this = (CCDirector *)CCDirector::sharedDirector();
  *(CCDirector *)(in_r0 + 0x109) = this[0x4c];
  CCDirector::replaceScene(this,*(CCScene **)(in_r0 + 0xfc));
  this_00 = (CCTouchDispatcher *)CCTouchDispatcher::sharedDispatcher();
  CCTouchDispatcher::setDispatchEvents(this_00,true);
  (**(code **)(**(int **)(in_r0 + 0x100) + 0x6c))(*(int **)(in_r0 + 0x100),1);
  return uVar1;
}


