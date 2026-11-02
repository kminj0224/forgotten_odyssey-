/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139d04  Symbol: startWithTarget */

/* cocos2d::CCReuseGrid::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCReuseGrid::startWithTarget(CCReuseGrid *this,CCNode *param_1)

{
  int iVar1;
  int iVar2;
  
  CCAction::startWithTarget((CCAction *)this,param_1);
  iVar1 = (**(code **)(**(int **)(this + 0x18) + 0x60))();
  if ((iVar1 != 0) &&
     (iVar1 = (**(code **)(**(int **)(this + 0x18) + 0x60))(), *(char *)(iVar1 + 0x11) != '\0')) {
    iVar1 = (**(code **)(**(int **)(this + 0x18) + 0x60))();
    iVar2 = (**(code **)(**(int **)(this + 0x18) + 0x60))();
    *(int *)(iVar1 + 0x14) = *(int *)(iVar2 + 0x14) + *(int *)(this + 0x24);
  }
  return;
}


