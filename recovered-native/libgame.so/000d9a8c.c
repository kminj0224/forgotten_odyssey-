/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d9a8c  Symbol: Inventory_Item_Popup_re */

/* Market_Equip::Inventory_Item_Popup_re(int, int, int, int, int) */

void __thiscall
Market_Equip::Inventory_Item_Popup_re
          (Market_Equip *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x67);
  if (iVar1 != 0) {
    pcVar3 = *(code **)(*(int *)this + 0xd0);
    uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x67);
    (*pcVar3)(this,uVar2,1);
  }
  Inventory_Item_Popup(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


