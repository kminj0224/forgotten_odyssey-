/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c44a  Symbol: draw */

/* cocos2d::CCTransitionScene::draw() */

void __thiscall cocos2d::CCTransitionScene::draw(CCTransitionScene *this)

{
  int *piVar1;
  
  CCNode::draw();
  if (this[0x108] == (CCTransitionScene)0x0) {
    (**(code **)(**(int **)(this + 0xfc) + 0xe4))();
    piVar1 = *(int **)(this + 0x100);
  }
  else {
    (**(code **)(**(int **)(this + 0x100) + 0xe4))();
    piVar1 = *(int **)(this + 0xfc);
  }
  (**(code **)(*piVar1 + 0xe4))();
  return;
}


