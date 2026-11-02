/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d650c  Symbol: remove_Item */

/* Market_Equip::remove_Item() */

void __thiscall Market_Equip::remove_Item(Market_Equip *this)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = 0x5a;
  do {
    pcVar2 = *(code **)(*(int *)this + 0xd0);
    uVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,iVar3);
    iVar3 = iVar3 + 1;
    (*pcVar2)(this,uVar1,1);
  } while (iVar3 != 0x5e);
  return;
}


