/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c42a  Symbol: cleanup */

/* cocos2d::CCTransitionScene::cleanup() */

void __thiscall cocos2d::CCTransitionScene::cleanup(CCTransitionScene *this)

{
  CCNode::cleanup();
  if (this[0x109] != (CCTransitionScene)0x0) {
    (**(code **)(**(int **)(this + 0x100) + 0xdc))();
  }
  return;
}


