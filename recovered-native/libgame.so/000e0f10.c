/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e0f10  Symbol: Play_Reinforcement_Layer */

/* Market_Store::Play_Reinforcement_Layer(cocos2d::CCObject*) */

undefined8 Market_Store::Play_Reinforcement_Layer(CCObject *param_1)

{
  undefined4 uVar1;
  ReinforcementLayer *this;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  
  pcVar4 = *(code **)(*(int *)param_1 + 0xd0);
  uVar1 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,DAT_000e0fb4);
  (*pcVar4)(param_1,uVar1,1);
  this = (ReinforcementLayer *)ReinforcementLayer::node();
  *(ReinforcementLayer **)(param_1 + 0x1b4) = this;
  iVar3 = *(int *)(param_1 + 0x194) * 0x14;
  piVar6 = *(int **)(DAT_000e0fb8 + 0xe0f44);
  piVar5 = *(int **)(DAT_000e0fbc + 0xe0f5a);
  ReinforcementLayer::Draw_PopUp
            (this,0,*(int *)(param_1 + 0x194),
             (void *)(*piVar5 + iVar3 + *piVar6 * 2000 + DAT_000e0fc0));
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,*(undefined4 *)(param_1 + 0x1b4),DAT_000e0fc4,0xd);
  iVar2 = *piVar5;
  **(undefined4 **)(DAT_000e0fc8 + 0xe0f84) = 0xc;
  Reinforcement_Item_View
            ((Market_Store *)param_1,
             *(int *)(iVar2 + *(int *)(param_1 + 0x194) * 0x14 + *piVar6 * 2000 + DAT_000e0fc0),
             *(int *)(param_1 + 0x194));
  setInventory_Plus(SUB41(param_1,0));
  return CONCAT44(iVar3,param_1);
}


