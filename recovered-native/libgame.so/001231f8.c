/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001231f8  Symbol: removeFromParentAndCleanup */

/* GameScene::removeFromParentAndCleanup(cocos2d::CCNode*, void*) */

void __thiscall GameScene::removeFromParentAndCleanup(GameScene *this,CCNode *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa0))(param_1);
  cocos2d::CCNode::removeFromParentAndCleanup(param_1,(bool)('\x01' - (param_2 == (void *)0x0)));
  if (((**(int **)(DAT_00123248 + 0x12321e) == 0xb) &&
      (**(char **)(DAT_0012324c + 0x12322a) == '\0')) && (iVar1 == 0x3dc)) {
    LaverUP();
    iVar1 = cocos2d::CCScheduler::sharedScheduler();
    *(undefined4 *)(iVar1 + 0x14) = DAT_00123250;
  }
  return;
}


