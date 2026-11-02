/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d2050  Symbol: Set_Hero_Item_Cheking */

/* InventoryLayer::Set_Hero_Item_Cheking(int) */

void __thiscall InventoryLayer::Set_Hero_Item_Cheking(InventoryLayer *this,int param_1)

{
  int *piVar1;
  CCArray *pCVar2;
  CCArray *pCVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  code *pcVar11;
  int iVar12;
  undefined uVar13;
  int iVar14;
  uint uVar15;
  uint local_78;
  int local_74;
  int local_6c;
  undefined local_58;
  undefined local_57;
  undefined local_56;
  undefined local_54;
  undefined local_53;
  undefined local_52;
  undefined local_50;
  undefined local_4f;
  undefined local_4e;
  undefined local_4c;
  undefined local_4b;
  undefined local_4a;
  undefined local_48;
  undefined local_47;
  undefined local_46;
  undefined local_44;
  undefined local_43;
  undefined local_42;
  undefined local_40;
  undefined local_3f;
  undefined local_3e;
  undefined local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_38;
  undefined local_37;
  undefined local_36;
  undefined local_34 [4];
  undefined local_30;
  undefined local_2f;
  undefined local_2e;
  undefined local_2c [4];
  undefined local_28;
  undefined local_27;
  undefined local_26;
  undefined local_24 [4];
  undefined local_20;
  undefined local_1f;
  undefined local_1e;
  undefined local_1c [8];
  
  if (param_1 == 1) {
    local_74 = 7;
    local_6c = 0;
  }
  else if (param_1 == 2) {
    local_74 = 7;
    local_6c = 1;
  }
  else if (param_1 == 4) {
    local_74 = 5;
    local_6c = 2;
  }
  else if (param_1 == 3) {
    local_74 = 6;
    local_6c = 4;
  }
  else if (param_1 == 5) {
    local_6c = 3;
    local_74 = 5;
  }
  else {
    local_6c = 0;
    local_74 = 0;
  }
  piVar10 = *(int **)(DAT_000d2408 + 0xd20a2);
  piVar8 = *(int **)(DAT_000d240c + 0xd20a6);
  iVar6 = *(int *)(*piVar8 + (*piVar10 * 9 + param_1 + DAT_000d2410) * 4 + 4);
  iVar12 = 0;
  do {
    iVar9 = *(int *)(*piVar8 + iVar12 * 0x14 + *piVar10 * 2000 + DAT_000d2414);
    if (iVar9 != 0) {
      if (iVar6 < *(int *)(*(int *)(DAT_000d2418 + 0xd20ee) + iVar9 * 0x18 + 8)) {
        piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar12);
        pCVar2 = (CCArray *)(**(code **)(*piVar1 + 0x58))();
        piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar12);
        local_58 = 0xff;
        local_57 = 0xaa;
        local_56 = 0xaa;
        (**(code **)(*piVar1 + 0xf4))(piVar1,&local_58);
        if (pCVar2 != (CCArray *)0x0) {
          piVar1 = (int *)cocos2d::CCArray::objectAtIndex(pCVar2,0);
          local_54 = 0xff;
          local_53 = 0xaa;
          local_52 = 0xaa;
          (**(code **)(*piVar1 + 0xf4))(piVar1);
          uVar15 = 0;
          pCVar2 = (CCArray *)(**(code **)(*piVar1 + 0x58))(piVar1);
          if (pCVar2 != (CCArray *)0x0) {
            for (; uVar5 = cocos2d::CCArray::count(pCVar2), uVar15 < uVar5; uVar15 = uVar15 + 1) {
              piVar1 = (int *)cocos2d::CCArray::objectAtIndex(pCVar2,uVar15);
              local_50 = 0xff;
              local_4f = 0xaa;
              local_4e = 0xaa;
              (**(code **)(*piVar1 + 0xf4))(piVar1,&local_50);
              if (uVar15 == 1) {
                uVar5 = 0;
                pCVar3 = (CCArray *)(**(code **)(*piVar1 + 0x58))(piVar1);
                if (pCVar3 != (CCArray *)0x0) {
                  for (; uVar4 = cocos2d::CCArray::count(pCVar3), uVar5 < uVar4; uVar5 = uVar5 + 1)
                  {
                    piVar1 = (int *)cocos2d::CCArray::objectAtIndex(pCVar3,uVar5);
                    local_4c = 0xff;
                    local_4b = 0xaa;
                    local_4a = 0xaa;
                    (**(code **)(*piVar1 + 0xf4))(piVar1,&local_4c);
                  }
                }
              }
            }
          }
        }
      }
      else {
        piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar12);
        pCVar2 = (CCArray *)(**(code **)(*piVar1 + 0x58))();
        piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar12);
        local_48 = 0xff;
        local_47 = 0xff;
        local_46 = 0xff;
        (**(code **)(*piVar1 + 0xf4))();
        if (pCVar2 != (CCArray *)0x0) {
          piVar1 = (int *)cocos2d::CCArray::objectAtIndex(pCVar2,0);
          local_44 = 0xff;
          local_43 = 0xff;
          local_42 = 0xff;
          (**(code **)(*piVar1 + 0xf4))();
          pCVar2 = (CCArray *)(**(code **)(*piVar1 + 0x58))(piVar1);
          local_78 = 0;
          if (pCVar2 != (CCArray *)0x0) {
            for (; uVar15 = cocos2d::CCArray::count(pCVar2), local_78 < uVar15;
                local_78 = local_78 + 1) {
              piVar1 = (int *)cocos2d::CCArray::objectAtIndex(pCVar2,local_78);
              local_40 = 0xff;
              local_3f = 0xff;
              local_3e = 0xff;
              (**(code **)(*piVar1 + 0xf4))(piVar1,&local_40);
              if (local_78 == 1) {
                uVar15 = 0;
                pCVar3 = (CCArray *)(**(code **)(*piVar1 + 0x58))(piVar1);
                if (pCVar3 != (CCArray *)0x0) {
                  for (; uVar5 = cocos2d::CCArray::count(pCVar3), uVar15 < uVar5;
                      uVar15 = uVar15 + 1) {
                    piVar1 = (int *)cocos2d::CCArray::objectAtIndex(pCVar3,uVar15);
                    local_3c = 0xff;
                    local_3a = 0xff;
                    local_3b = 0xff;
                    (**(code **)(*piVar1 + 0xf4))(piVar1,&local_3c);
                  }
                }
              }
            }
          }
        }
      }
      iVar14 = *(int *)(*piVar8 + iVar12 * 0x14 + *piVar10 * 2000 + DAT_000d2414);
      iVar9 = __divsi3(iVar14 + -1,10);
      if (local_6c == iVar9) {
        piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar12);
        uVar13 = 0xff;
        pCVar2 = (CCArray *)(**(code **)(*piVar1 + 0x58))();
        piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar12);
        local_30 = 0xff;
        local_2f = 0xff;
        local_2e = 0xff;
        (**(code **)(*piVar1 + 0xf4))();
        if (pCVar2 != (CCArray *)0x0) {
          piVar1 = (int *)cocos2d::CCArray::objectAtIndex(pCVar2,0);
          puVar7 = local_2c;
          local_2c[0] = 0xff;
          pcVar11 = *(code **)(*piVar1 + 0xf4);
LAB_000d2386:
          puVar7[1] = uVar13;
          puVar7[2] = uVar13;
          (*pcVar11)();
        }
      }
      else if ((iVar14 + 8 < 0 == SCARRY4(iVar14,8)) && (iVar14 < 0x33)) {
        piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar12);
        uVar13 = 0xaa;
        pCVar2 = (CCArray *)(**(code **)(*piVar1 + 0x58))();
        piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar12);
        local_38 = 0xff;
        local_37 = 0xaa;
        local_36 = 0xaa;
        (**(code **)(*piVar1 + 0xf4))();
        if (pCVar2 != (CCArray *)0x0) {
          piVar1 = (int *)cocos2d::CCArray::objectAtIndex(pCVar2,0);
          puVar7 = local_34;
          pcVar11 = *(code **)(*piVar1 + 0xf4);
          local_34[0] = 0xff;
          goto LAB_000d2386;
        }
      }
      iVar14 = *(int *)(*piVar8 + iVar12 * 0x14 + *piVar10 * 2000 + DAT_000d2414);
      iVar9 = __divsi3(iVar14 + -1,10);
      if (local_74 == iVar9) {
        piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar12);
        uVar13 = 0xff;
        pCVar2 = (CCArray *)(**(code **)(*piVar1 + 0x58))();
        piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar12);
        local_20 = 0xff;
        local_1f = 0xff;
        local_1e = 0xff;
        (**(code **)(*piVar1 + 0xf4))();
        if (pCVar2 != (CCArray *)0x0) {
          piVar1 = (int *)cocos2d::CCArray::objectAtIndex(pCVar2,0);
          puVar7 = local_1c;
          local_1c[0] = 0xff;
          pcVar11 = *(code **)(*piVar1 + 0xf4);
LAB_000d245c:
          puVar7[1] = uVar13;
          puVar7[2] = uVar13;
          (*pcVar11)();
        }
      }
      else if ((0x32 < iVar14) && (iVar14 < 0x51)) {
        piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar12);
        uVar13 = 0xaa;
        pCVar2 = (CCArray *)(**(code **)(*piVar1 + 0x58))();
        piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar12);
        local_28 = 0xff;
        local_27 = 0xaa;
        local_26 = 0xaa;
        (**(code **)(*piVar1 + 0xf4))();
        if (pCVar2 != (CCArray *)0x0) {
          piVar1 = (int *)cocos2d::CCArray::objectAtIndex(pCVar2,0);
          puVar7 = local_24;
          pcVar11 = *(code **)(*piVar1 + 0xf4);
          local_24[0] = 0xff;
          goto LAB_000d245c;
        }
      }
    }
    iVar12 = iVar12 + 1;
    if (iVar12 == 100) {
      return;
    }
  } while( true );
}


