/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e046  Symbol: setIsEnabled */

/* cocos2d::CCMenuItemSprite::setIsEnabled(bool) */

void cocos2d::CCMenuItemSprite::setIsEnabled(bool param_1)

{
  CCMenuItem *this;
  int *piVar1;
  int in_r1;
  undefined4 uVar2;
  code *pcVar3;
  
  this = (CCMenuItem *)(uint)param_1;
  CCMenuItem::setIsEnabled(this,SUB41(in_r1,0));
  piVar1 = *(int **)(this + 0x118);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  }
  if (in_r1 == 0) {
    piVar1 = *(int **)(this + 0x11c);
    if (piVar1 == (int *)0x0) {
      piVar1 = *(int **)(this + 0x114);
      uVar2 = 1;
      pcVar3 = *(code **)(*piVar1 + 0x6c);
    }
    else {
      (**(code **)(*piVar1 + 0x6c))(piVar1,1);
      piVar1 = *(int **)(this + 0x114);
      pcVar3 = *(code **)(*piVar1 + 0x6c);
      uVar2 = 0;
    }
  }
  else {
    (**(code **)(**(int **)(this + 0x114) + 0x6c))(*(int **)(this + 0x114),1);
    piVar1 = *(int **)(this + 0x11c);
    if (piVar1 == (int *)0x0) {
      return;
    }
    uVar2 = 0;
    pcVar3 = *(code **)(*piVar1 + 0x6c);
  }
  (*pcVar3)(piVar1,uVar2);
  return;
}


