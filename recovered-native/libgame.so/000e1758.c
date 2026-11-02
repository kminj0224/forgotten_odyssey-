/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e1758  Symbol: MARKET_CASH_ITEM_TOUCH */

/* Market_Store::MARKET_CASH_ITEM_TOUCH(cocos2d::CCPoint) */

void Market_Store::MARKET_CASH_ITEM_TOUCH(CCPoint param_1)

{
  CCNode *pCVar1;
  int iVar2;
  int *piVar3;
  CCSize *pCVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  CCPoint in_r1;
  CCPoint in_r2;
  code *pcVar9;
  int iVar10;
  undefined8 uVar11;
  int local_50;
  int local_48;
  undefined4 local_28;
  undefined4 local_24;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,DAT_000e1a68);
  iVar2 = __aeabi_fcmpgt(in_r1,DAT_000e1a6c);
  if ((((iVar2 != 0) && (iVar2 = __aeabi_fcmplt(in_r1,DAT_000e1a70), iVar2 != 0)) &&
      (iVar2 = __aeabi_fcmpgt(in_r2,DAT_000e1a74), iVar2 != 0)) &&
     (iVar2 = __aeabi_fcmplt(in_r2,DAT_000e1a78), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_000e1a7c + 0xe17a6));
  }
  iVar2 = __aeabi_fcmpgt(in_r1,DAT_000e1a80);
  if (((iVar2 == 0) || (iVar2 = __aeabi_fcmplt(in_r1,DAT_000e1a84), iVar2 == 0)) ||
     ((iVar2 = __aeabi_fcmpgt(in_r2,DAT_000e1a74), iVar2 == 0 ||
      (iVar2 = __aeabi_fcmplt(in_r2,DAT_000e1a78), iVar2 == 0)))) {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,5);
    pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,5);
    (**(code **)(*piVar3 + 0x7c))();
    iVar2 = KG_Touch(in_r1,in_r2,*pCVar4);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_000e1a88 + 0xe182e));
    }
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,6);
    pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,6);
    (**(code **)(*piVar3 + 0x7c))();
    iVar2 = KG_Touch(in_r1,in_r2,*pCVar4);
    if (iVar2 != 0) {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,DAT_000e1a68);
      KG_removeChild(pCVar1,true);
      **(undefined4 **)(DAT_000e1a8c + 0xe18a4) = 4;
      setInventory_Plus(SUB41(param_1,0));
    }
  }
  iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6a);
  if (iVar2 != 0) {
    pcVar9 = *(code **)(*(int *)param_1 + 0xd0);
    uVar5 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6a);
    (*pcVar9)(param_1,uVar5,1);
  }
  iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,DAT_000e1a68);
  if (iVar2 != 0) {
    uVar11 = __subsf3(*(undefined4 *)(*(int *)(DAT_000e1a90 + 0xe18e4) + 4),in_r2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20))
    ;
    local_50 = 0;
    local_48 = 0;
    do {
      iVar10 = 0;
      iVar2 = local_48;
      do {
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,DAT_000e1a68);
        iVar6 = (**(code **)(*piVar3 + 0x38))();
        uVar5 = *(undefined4 *)(iVar6 + 4);
        uVar7 = __subsf3(local_28,DAT_000e1a94);
        uVar8 = __floatsisf(iVar10);
        iVar6 = __aeabi_fcmpgt(uVar7,uVar8);
        if (iVar6 != 0) {
          uVar8 = __floatsisf(iVar10 + 0x25);
          iVar6 = __aeabi_fcmplt(uVar7,uVar8);
          if (iVar6 != 0) {
            uVar7 = __subsf3(local_24,DAT_000e1a98);
            __subsf3(DAT_000e1a9c,uVar5);
            __fixsfsi();
            uVar5 = __floatsisf();
            uVar5 = __addsf3(uVar7,uVar5);
            uVar7 = __floatsisf(local_50);
            iVar6 = __aeabi_fcmpgt(uVar5,uVar7);
            if (iVar6 != 0) {
              uVar7 = __floatsisf(local_50 + 0x25);
              iVar6 = __aeabi_fcmplt(uVar5,uVar7);
              if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
                cocos2d::CCLog((char *)(DAT_000e1aa0 + 0xe1998),iVar2);
              }
            }
          }
        }
        iVar10 = iVar10 + 0x25;
        iVar2 = iVar2 + 1;
      } while (iVar10 != DAT_000e1aa8);
      local_48 = local_48 + 7;
      local_50 = local_50 + -0x25;
    } while (local_48 != 0x15);
  }
  return;
}


