/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e24a4  Symbol: Inventory_Item_Popup_re */

/* Market_Store::Inventory_Item_Popup_re(int, int, int, int, int) */

void Market_Store::Inventory_Item_Popup_re
               (int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,DAT_000e24e8);
  if (iVar1 != 0) {
    pcVar3 = *(code **)(*(int *)param_1 + 0xd0);
    uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,DAT_000e24e8);
    (*pcVar3)(param_1,uVar2,1);
  }
  Inventory_Item_Popup(param_1,param_2,param_3,param_4,param_5);
  return;
}


