/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000dff08  Symbol: Item_Hero_Equip_View */

/* Market_Store::Item_Hero_Equip_View(int, int) */

void __thiscall Market_Store::Item_Hero_Equip_View(Market_Store *this,int param_1,int param_2)

{
  CCNode *pCVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint local_64;
  int local_5c;
  int local_58;
  int aiStack_40 [4];
  undefined4 local_30;
  int local_2c [4];
  undefined4 local_1c;
  
  iVar12 = DAT_000e0290 + 0xdff14;
  memset(aiStack_40,0,0x14);
  memset(local_2c,0,0x14);
  local_2c[0] = 7;
  local_2c[1] = 7;
  aiStack_40[2] = 4;
  local_2c[2] = 6;
  aiStack_40[3] = 2;
  aiStack_40[1] = 1;
  local_2c[3] = 5;
  local_30 = 3;
  local_1c = 5;
  local_5c = 0;
  local_58 = 1;
  do {
    iVar11 = local_58 + 1;
    if (param_2 == 0) {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar11);
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
      (**(code **)(*piVar2 + 0x6c))(piVar2,0);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar11);
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
      (**(code **)(*piVar2 + 0x6c))(piVar2,0);
      iVar3 = *(int *)((int)aiStack_40 + local_5c);
      if (((param_1 == iVar3) || (param_1 == *(int *)((int)local_2c + local_5c))) ||
         (param_1 - 8U < 7)) {
        piVar13 = *(int **)(iVar12 + DAT_000e0298);
        iVar6 = *piVar13;
        piVar2 = *(int **)(iVar12 + DAT_000e029c);
        iVar8 = *piVar2;
        if (*(int *)((iVar8 * 9 + local_58 + DAT_000e02a0) * 4 + iVar6 + 4) <
            *(int *)(*(int *)(iVar12 + DAT_000e0294) +
                     *(int *)(*(int *)(this + 0x11c) * 0x14 + iVar8 * 2000 + iVar6 + DAT_000e02a8) *
                     0x18 + 8)) goto LAB_000e0308;
        piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar11);
        (**(code **)(*piVar4 + 0xec))(piVar4,0xff);
        uVar9 = 0;
        if (((param_1 != iVar3) && (uVar9 = 1, param_1 != *(int *)((int)local_2c + local_5c))) &&
           (uVar9 = 2, 2 < param_1 - 8U)) {
          uVar9 = -(uint)(param_1 - 10U < 5) & 3;
        }
        iVar3 = *piVar13;
        iVar6 = *piVar2;
        iVar8 = iVar3 + *(int *)(this + 0x11c) * 0x14 + iVar6 * 2000;
        if (*(int *)(iVar8 + DAT_000e02a8) != 0) {
          if (uVar9 - 2 < 2) {
LAB_000e02b2:
            pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar11);
            piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
            uVar5 = 0;
            pcVar10 = *(code **)(*piVar2 + 0x6c);
          }
          else {
            iVar3 = *(int *)(iVar3 + iVar6 * 0x2d0 + uVar9 * 0x14 + local_58 * 0x50 + DAT_000e02a4 +
                            4);
            iVar6 = *(int *)(iVar8 + DAT_000e02ac + 4);
            if (iVar3 == iVar6) goto LAB_000e02b2;
            if (iVar6 <= iVar3) goto LAB_000e0268;
LAB_000e0254:
            pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar11);
            piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
            uVar5 = 1;
            pcVar10 = *(code **)(*piVar2 + 0x6c);
          }
          (*pcVar10)(piVar2,uVar5);
          pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar11);
          piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
          uVar5 = 0;
          pcVar10 = *(code **)(*piVar2 + 0x6c);
          goto LAB_000e0344;
        }
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar11);
        piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
        (**(code **)(*piVar2 + 0x6c))(piVar2,0);
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar11);
        piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
        pcVar10 = *(code **)(*piVar2 + 0x6c);
      }
      else {
LAB_000e0308:
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar11);
        piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
        (**(code **)(*piVar2 + 0x6c))(piVar2,0);
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar11);
        piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
        pcVar10 = *(code **)(*piVar2 + 0x6c);
      }
LAB_000e0332:
      (*pcVar10)(piVar2,0);
      piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar11);
      uVar5 = 0x7f;
      pcVar10 = *(code **)(*piVar2 + 0xec);
    }
    else {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar11);
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
      (**(code **)(*piVar2 + 0x6c))(piVar2,0);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar11);
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
      (**(code **)(*piVar2 + 0x6c))(piVar2,0);
      iVar3 = *(int *)((int)aiStack_40 + local_5c);
      if (((param_1 != iVar3) && (param_1 != *(int *)((int)local_2c + local_5c))) &&
         (6 < param_1 - 8U)) goto LAB_000e0308;
      iVar6 = ShopLayer::getItem_Number(*(ShopLayer **)(this + 0x130),*(int *)(this + 0x120));
      iVar8 = *(int *)(iVar12 + DAT_000e0294);
      piVar2 = *(int **)(iVar12 + DAT_000e0298);
      piVar13 = *(int **)(iVar12 + DAT_000e029c);
      if (*(int *)((*piVar13 * 9 + local_58 + DAT_000e02a0) * 4 + *piVar2 + 4) <
          *(int *)(iVar8 + iVar6 * 0x18 + 8)) goto LAB_000e0308;
      piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar11);
      (**(code **)(*piVar4 + 0xec))(piVar4,0xff);
      local_64 = 0;
      if (((param_1 != iVar3) && (local_64 = 1, param_1 != *(int *)((int)local_2c + local_5c))) &&
         (local_64 = 2, 2 < param_1 - 8U)) {
        local_64 = -(uint)(param_1 - 10U < 5) & 3;
      }
      iVar3 = ShopLayer::getItem_Number(*(ShopLayer **)(this + 0x130),*(int *)(this + 0x120));
      if (iVar3 == 0) {
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar11);
        piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
        (**(code **)(*piVar2 + 0x6c))(piVar2,0);
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar11);
        piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
        pcVar10 = *(code **)(*piVar2 + 0x6c);
        goto LAB_000e0332;
      }
      if (local_64 - 2 < 2) goto LAB_000e02b2;
      iVar6 = local_64 * 0x14 + local_58 * 0x50;
      iVar7 = *(int *)(iVar6 + *piVar13 * 0x2d0 + *piVar2 + DAT_000e02a4 + 4);
      iVar3 = ShopLayer::getItem_Number(*(ShopLayer **)(this + 0x130),*(int *)(this + 0x120));
      if (iVar7 == *(int *)(iVar8 + iVar3 * 0x18 + 0xc)) goto LAB_000e02b2;
      iVar6 = *(int *)(*piVar2 + iVar6 + *piVar13 * 0x2d0 + DAT_000e02a4 + 4);
      iVar3 = ShopLayer::getItem_Number(*(ShopLayer **)(this + 0x130),*(int *)(this + 0x120));
      if (iVar6 < *(int *)(iVar8 + iVar3 * 0x18 + 0xc)) goto LAB_000e0254;
LAB_000e0268:
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar11);
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
      (**(code **)(*piVar2 + 0x6c))(piVar2,0);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar11);
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
      uVar5 = 1;
      pcVar10 = *(code **)(*piVar2 + 0x6c);
    }
LAB_000e0344:
    (*pcVar10)(piVar2,uVar5);
    local_5c = local_5c + 4;
    local_58 = iVar11;
    if (iVar11 == 6) {
      return;
    }
  } while( true );
}


