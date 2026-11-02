/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d8080  Symbol: Play_Reinforcement_Layer */

/* Market_Equip::Play_Reinforcement_Layer(cocos2d::CCObject*) */

undefined8 Market_Equip::Play_Reinforcement_Layer(CCObject *param_1)

{
  undefined4 uVar1;
  ReinforcementLayer *this;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int *piVar8;
  int *piVar9;
  
  pcVar7 = *(code **)(*(int *)param_1 + 0xd0);
  uVar1 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x67);
  (*pcVar7)(param_1,uVar1,1);
  this = (ReinforcementLayer *)ReinforcementLayer::node();
  iVar4 = DAT_000d8154;
  piVar9 = *(int **)(DAT_000d814c + 0xd80a6);
  iVar5 = *piVar9;
  piVar8 = *(int **)(DAT_000d8150 + 0xd80be);
  *(ReinforcementLayer **)(param_1 + 0x178) = this;
  ReinforcementLayer::Draw_PopUp
            (this,0,*(int *)(param_1 + 0x130),
             (void *)(*piVar8 + *(int *)(param_1 + 0x134) * 0x14 + iVar5 * 2000 + iVar4));
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,*(undefined4 *)(param_1 + 0x178),0x68,0xd);
  **(undefined4 **)(DAT_000d8158 + 0xd80ee) = 0xc;
  iVar4 = *(int *)(param_1 + 0x134);
  if (iVar4 == -1) {
    iVar4 = *(int *)(param_1 + 0x138);
    if (iVar4 == -1) goto LAB_000d8142;
    iVar2 = *piVar8;
    iVar6 = iVar4 * 0x14 + (*(int *)(param_1 + 0x114) + -8) * 0x50 + *piVar9 * 0x2d0;
    iVar3 = iVar2 + iVar6;
    iVar5 = DAT_000d815c;
  }
  else {
    iVar2 = *piVar8;
    iVar6 = iVar4 * 0x14 + *piVar9 * 2000;
    iVar3 = iVar2 + iVar6;
    iVar5 = DAT_000d8154;
  }
  Reinforcement_Item_View
            ((Market_Equip *)param_1,*(int *)(iVar3 + iVar5),iVar4,(void *)(iVar2 + iVar6 + iVar5));
LAB_000d8142:
  setInventory_Plus((Market_Equip *)param_1,false);
  return CONCAT44(param_1,param_1);
}


