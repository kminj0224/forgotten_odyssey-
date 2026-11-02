/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00125c30  Symbol: InventoryFullNoticeTouchEnded */

/* GameScene::InventoryFullNoticeTouchEnded(cocos2d::CCPoint) */

undefined8 GameScene::InventoryFullNoticeTouchEnded(CCPoint param_1)

{
  CCNode *pCVar1;
  int *piVar2;
  CCSize *pCVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  CCPoint in_r1;
  CCPoint in_r2;
  code *pcVar7;
  undefined4 local_20;
  undefined4 local_1c;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
  local_20 = *puVar4;
  local_1c = puVar4[1];
  iVar5 = KG_Touch(in_r1,in_r2,*pCVar3);
  if (iVar5 == 0) {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,3);
    pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,3);
    puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
    local_20 = *puVar4;
    local_1c = puVar4[1];
    iVar5 = KG_Touch(in_r1,in_r2,*pCVar3);
    if (iVar5 != 0) {
      NoticeNo((GameScene *)param_1,**(int **)(DAT_00125d08 + 0x125cdc));
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
      KG_removeChild(pCVar1,true);
      pcVar7 = *(code **)(*(int *)param_1 + 0xd0);
      uVar6 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
      (*pcVar7)(param_1,uVar6,1);
    }
  }
  else {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
    KG_removeChild(pCVar1,true);
    pcVar7 = *(code **)(*(int *)param_1 + 0xd0);
    uVar6 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
    (*pcVar7)(param_1,uVar6,1);
    Plus_Inventory((CCObject *)param_1);
  }
  return CONCAT44(local_1c,local_20);
}


