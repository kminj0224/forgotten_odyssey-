/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012574c  Symbol: setInventory_Item */

/* GameScene::setInventory_Item() */

void __thiscall GameScene::setInventory_Item(GameScene *this)

{
  char cVar1;
  CCNode *pCVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  CCNode **ppCVar10;
  int iVar11;
  char *pcVar12;
  int local_34;
  int *local_30;
  undefined local_28;
  undefined local_27;
  undefined local_26;
  undefined local_24 [4];
  undefined local_20;
  undefined local_1f;
  undefined local_1e;
  undefined auStack_1c [8];
  
  local_34 = *(int *)(this + DAT_0012590c) - *(int *)(this + 0x518);
  local_30 = (int *)(this + local_34 * 0x14 + 0x130);
  pcVar12 = *(char **)(DAT_00125910 + 0x12576e);
  do {
    if (*(int *)(this + DAT_0012590c) <= local_34) {
      *pcVar12 = '\x01' - (*(int *)(this + 0x518) == 0);
      return;
    }
    iVar5 = **(int **)(DAT_00125924 + 0x1258d0);
    iVar6 = 0;
    iVar11 = **(int **)(DAT_0012592c + 0x1258e0) * 2000;
    iVar8 = *(int *)((**(int **)(DAT_0012592c + 0x1258e0) + DAT_00125928) * 4 + iVar5);
    cVar1 = *pcVar12;
    for (iVar9 = 0; iVar9 <= iVar8; iVar9 = iVar9 + 1) {
      if (iVar8 == iVar9) {
        cVar1 = '\x01';
      }
      else if (*(int *)(iVar5 + iVar11 + iVar6 + DAT_00125914) == 0) {
        *pcVar12 = cVar1;
        ppCVar10 = *(CCNode ***)(DAT_00125918 + 0x12579a);
        if (local_30[-1] == 0xa9) {
          Set_Item_Upgrade_Count(1);
          *(int *)(this + 0x518) = *(int *)(this + 0x518) + -1;
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar10,0xe);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,0);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,0);
          piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,local_34);
          local_28 = 0xff;
          local_27 = 0xff;
          local_26 = 0xff;
          (**(code **)(*piVar3 + 0xf4))(piVar3,&local_28);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar10,0xe);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,0);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,0);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,local_34);
          piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,0);
          puVar4 = local_24;
          pcVar7 = *(code **)(*piVar3 + 0xf4);
        }
        else {
          iVar5 = iVar5 + iVar9 * 0x14 + iVar11;
          piVar3 = (int *)(iVar5 + DAT_00125914);
          piVar3[1] = *local_30;
          iVar6 = DAT_0012591c;
          *piVar3 = local_30[-1];
          iVar9 = local_30[2];
          *(int *)(iVar5 + iVar6 + 4) = iVar9;
          *(int *)(iVar5 + DAT_00125920) = iVar9;
          *(int *)(this + 0x518) = *(int *)(this + 0x518) + -1;
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar10,0xe);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,0);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,0);
          piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,local_34);
          local_20 = 0xff;
          local_1f = 0xff;
          local_1e = 0xff;
          (**(code **)(*piVar3 + 0xf4))();
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar10,0xe);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,0);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,0);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,local_34);
          piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,0);
          puVar4 = auStack_1c;
          pcVar7 = *(code **)(*piVar3 + 0xf4);
        }
        *puVar4 = 0xff;
        puVar4[1] = 0xff;
        puVar4[2] = 0xff;
        (*pcVar7)();
        goto LAB_001258b0;
      }
      iVar6 = iVar6 + 0x14;
    }
    *pcVar12 = cVar1;
LAB_001258b0:
    local_34 = local_34 + 1;
    local_30 = local_30 + 5;
  } while( true );
}


