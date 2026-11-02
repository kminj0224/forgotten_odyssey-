/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014bd8c  Symbol: finish */

/* cocos2d::CCTransitionScene::finish() */

void __thiscall cocos2d::CCTransitionScene::finish(CCTransitionScene *this)

{
  CCCamera *pCVar1;
  code *pcVar2;
  int **ppiVar3;
  int *piVar4;
  float fVar5;
  undefined8 uVar6;
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [20];
  
  ppiVar3 = (int **)(this + 0xfc);
  uVar6 = (**(code **)(**ppiVar3 + 0x6c))(*ppiVar3,1);
  piVar4 = *ppiVar3;
  pcVar2 = *(code **)(*piVar4 + 0x3c);
  CCPoint::CCPoint(aCStack_30,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  fVar5 = (float)(*pcVar2)(piVar4,aCStack_30);
  CCNode::setScale((CCNode *)*ppiVar3,fVar5);
  (**(code **)(**ppiVar3 + 0x24))(*ppiVar3,0);
  pCVar1 = (CCCamera *)(**(code **)(**ppiVar3 + 0x5c))();
  CCCamera::restore(pCVar1);
  uVar6 = (**(code **)(**(int **)(this + 0x100) + 0x6c))(*(int **)(this + 0x100),0);
  piVar4 = *(int **)(this + 0x100);
  pcVar2 = *(code **)(*piVar4 + 0x3c);
  CCPoint::CCPoint(aCStack_28,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  fVar5 = (float)(*pcVar2)(piVar4,aCStack_28);
  CCNode::setScale(*(CCNode **)(this + 0x100),fVar5);
  (**(code **)(**(int **)(this + 0x100) + 0x24))(*(int **)(this + 0x100),0);
  pCVar1 = (CCCamera *)(**(code **)(**(int **)(this + 0x100) + 0x5c))();
  fVar5 = (float)CCCamera::restore(pCVar1);
  CCNode::schedule((CCNode *)this,*(_func_void_float **)(DAT_0014be2c + 0x14be22),fVar5);
  return;
}


