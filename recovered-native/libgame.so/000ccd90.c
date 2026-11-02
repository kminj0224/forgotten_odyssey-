/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ccd90  Symbol: SetChildOpacity */

/* StageSelect::SetChildOpacity(cocos2d::CCNode*, float) */

undefined8 __thiscall StageSelect::SetChildOpacity(StageSelect *this,CCNode *param_1,float param_2)

{
  undefined uVar1;
  CCArray *this_00;
  int *piVar2;
  uint uVar3;
  undefined4 in_r2;
  uint uVar4;
  
  this_00 = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))(param_1);
  uVar4 = 0;
  if (this_00 != (CCArray *)0x0) {
    for (; uVar3 = cocos2d::CCArray::count(this_00), uVar4 < uVar3; uVar4 = uVar4 + 1) {
      piVar2 = (int *)cocos2d::CCArray::objectAtIndex(this_00,uVar4);
      if (piVar2 != (int *)0x0) {
        uVar1 = __fixunssfsi(in_r2);
        (**(code **)(*piVar2 + 0xec))(piVar2,uVar1);
      }
    }
  }
  return CONCAT44(in_r2,this);
}


