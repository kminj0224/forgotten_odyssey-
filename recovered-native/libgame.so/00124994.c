/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00124994  Symbol: Particle_Stop */

/* GameScene::Particle_Stop() */

void GameScene::Particle_Stop(void)

{
  int iVar1;
  CCArray *this;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = DAT_001249dc;
  this = (CCArray *)(**(code **)(***(int ***)(DAT_001249d8 + 0x1249a0) + 0x58))();
  for (uVar5 = 0; uVar4 = cocos2d::CCArray::count(this), uVar5 < uVar4; uVar5 = uVar5 + 1) {
    piVar2 = (int *)cocos2d::CCArray::objectAtIndex(this,uVar5);
    iVar3 = (**(code **)(*piVar2 + 0xa0))();
    if (iVar3 == iVar1) {
      cocos2d::CCNode::stopAllActions();
    }
  }
  return;
}


