/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c9c4c  Symbol: SetOpacity */

/* Draw_Number::SetOpacity(float) */

undefined8 __thiscall Draw_Number::SetOpacity(Draw_Number *this,float param_1)

{
  undefined uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_r1;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,iVar4);
    if (iVar2 != 0) {
      piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar4);
      iVar2 = *piVar3;
      uVar1 = __fixunssfsi(in_r1);
      (**(code **)(iVar2 + 0xec))(piVar3,uVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x14);
  return CONCAT44(in_r1,this);
}


