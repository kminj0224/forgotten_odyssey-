/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ccb58  Symbol: Cloud_Remove_Call */

/* StageSelect::Cloud_Remove_Call() */

undefined8 __thiscall StageSelect::Cloud_Remove_Call(StageSelect *this)

{
  CCArray *this_00;
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  this_00 = (CCArray *)(**(code **)(*(int *)this + 0x58))();
  uVar4 = 0;
  if (this_00 != (CCArray *)0x0) {
    for (; uVar3 = cocos2d::CCArray::count(this_00), uVar4 < uVar3; uVar4 = uVar4 + 1) {
      piVar1 = (int *)cocos2d::CCArray::objectAtIndex(this_00,uVar4);
      iVar2 = (**(code **)(*piVar1 + 0xa0))();
      if (((iVar2 == 3) || (iVar2 = (**(code **)(*piVar1 + 0xa0))(piVar1), iVar2 == 1)) &&
         (iVar2 = cocos2d::CCNode::numberOfRunningActions(), iVar2 == 0)) {
        iVar2 = (**(code **)(*piVar1 + 0xa0))(piVar1);
        if (iVar2 != 1) {
          *(int *)(this + 0x114) = *(int *)(this + 0x114) + -1;
        }
        (**(code **)(*(int *)this + 0xd0))(this,piVar1,1);
      }
    }
  }
  return CONCAT44(this_00,this);
}


