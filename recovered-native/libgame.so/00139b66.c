/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139b66  Symbol: startWithTarget */

/* cocos2d::CCGridAction::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCGridAction::startWithTarget(CCGridAction *this,CCNode *param_1)

{
  undefined4 uVar1;
  int *this_00;
  CCGridBase *this_01;
  int *piVar2;
  
  CCActionInterval::startWithTarget((CCActionInterval *)this,param_1);
  uVar1 = (**(code **)(*(int *)this + 0x2c))(this);
  piVar2 = *(int **)(this + 0x18);
  this_00 = (int *)(**(code **)(*piVar2 + 0x60))(piVar2);
  if (this_00 != (int *)0x0) {
    if (0 < this_00[5]) {
      if (*(CCGridBase *)((int)this_00 + 0x11) == (CCGridBase)0x0) {
        return;
      }
      if (this_00[6] != *(int *)(this + 0x2c)) {
        return;
      }
      if (this_00[7] != *(int *)(this + 0x30)) {
        return;
      }
      (**(code **)(*this_00 + 0x18))();
      return;
    }
    if (*(CCGridBase *)((int)this_00 + 0x11) != (CCGridBase)0x0) {
      CCGridBase::setActive((CCGridBase *)this_00,false);
    }
  }
  (**(code **)(*piVar2 + 100))(piVar2,uVar1);
  this_01 = (CCGridBase *)(**(code **)(*piVar2 + 0x60))(piVar2);
  CCGridBase::setActive(this_01,true);
  return;
}


