/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000caf16  Symbol: SetColor */

/* N_Draw_Number::SetColor(cocos2d::_ccColor3B const&) */

void __thiscall N_Draw_Number::SetColor(N_Draw_Number *this,_ccColor3B *param_1)

{
  CCArray *this_00;
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  this_00 = (CCArray *)(**(code **)(*(int *)this + 0x58))();
  for (uVar3 = 0; uVar2 = cocos2d::CCArray::count(this_00), uVar3 < uVar2; uVar3 = uVar3 + 1) {
    piVar1 = (int *)cocos2d::CCArray::objectAtIndex(this_00,uVar3);
    (**(code **)(*piVar1 + 0xf4))(piVar1,param_1);
  }
  return;
}


