/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d781c  Symbol: setInventory_Plus */

/* Market_Equip::setInventory_Plus(bool) */

void __thiscall Market_Equip::setInventory_Plus(Market_Equip *this,bool param_1)

{
  CCNode *pCVar1;
  int iVar2;
  int *piVar3;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,99);
  iVar2 = cocos2d::CCNode::getChildByTag(pCVar1,600);
  if (iVar2 != 0) {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,99);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,600);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    (**(code **)(*piVar3 + 0x114))(piVar3,param_1);
  }
  return;
}


