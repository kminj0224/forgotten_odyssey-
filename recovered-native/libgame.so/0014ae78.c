/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ae78  Symbol: onExit */

/* cocos2d::CCTransitionScene::onExit() */

void __thiscall cocos2d::CCTransitionScene::onExit(CCTransitionScene *this)

{
  CCNode::onExit();
  (**(code **)(**(int **)(this + 0x100) + 0xb8))();
  (**(code **)(**(int **)(this + 0xfc) + 0xb4))();
  return;
}


