/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b4ba  Symbol: atlasIndexForChild */

/* cocos2d::CCSpriteBatchNode::atlasIndexForChild(cocos2d::CCSprite*, int) */

int __thiscall
cocos2d::CCSpriteBatchNode::atlasIndexForChild
          (CCSpriteBatchNode *this,CCSprite *param_1,int param_2)

{
  int *piVar1;
  CCObject *this_00;
  int iVar2;
  CCSpriteBatchNode *pCVar3;
  int *piVar4;
  
  piVar1 = (int *)(**(code **)(*(int *)param_1 + 0x90))(param_1);
  piVar4 = (int *)0x0;
  this_00 = (CCObject *)(**(code **)(*piVar1 + 0x58))();
  iVar2 = CCArray::indexOfObject(this_00);
  pCVar3 = (CCSpriteBatchNode *)(**(code **)(*(int *)param_1 + 0x90))(param_1);
  if (iVar2 - 1U < 0xfffffffe) {
    piVar4 = (int *)CCArray::objectAtIndex((CCArray *)this_00,iVar2 - 1U);
  }
  if (pCVar3 == this) {
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*(int *)param_1 + 0x90))(param_1);
      iVar2 = *(int *)(iVar2 + 0x10c);
      if (param_2 < 0) {
        return iVar2;
      }
      goto LAB_0015b54a;
    }
    iVar2 = (**(code **)(*piVar4 + 0x14))(piVar4);
    pCVar3 = this;
    if (((-1 < iVar2) || (-1 < param_2)) &&
       ((iVar2 = (**(code **)(*piVar4 + 0x14))(piVar4), iVar2 < 0 || (param_2 < 0)))) {
      iVar2 = (**(code **)(*(int *)param_1 + 0x90))(param_1);
      iVar2 = *(int *)(iVar2 + 0x10c);
      goto LAB_0015b54a;
    }
  }
  iVar2 = highestAtlasIndexInChild(pCVar3,(CCSprite *)piVar4);
LAB_0015b54a:
  return iVar2 + 1;
}


