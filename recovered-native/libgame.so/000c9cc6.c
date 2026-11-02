/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c9cc6  Symbol: SetColor */

/* Draw_Number::SetColor(cocos2d::_ccColor3B const&) */

void __thiscall Draw_Number::SetColor(Draw_Number *this,_ccColor3B *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,iVar3);
    if (iVar1 != 0) {
      piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar3);
      (**(code **)(*piVar2 + 0xf4))(piVar2,param_1);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x14);
  return;
}


