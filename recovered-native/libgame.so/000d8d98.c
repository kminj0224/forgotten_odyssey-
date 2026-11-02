/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d8d98  Symbol: MARKET_CASH_ITEM_TOUCH */

/* Market_Equip::MARKET_CASH_ITEM_TOUCH(cocos2d::CCPoint) */

void Market_Equip::MARKET_CASH_ITEM_TOUCH(CCPoint param_1)

{
  CCNode *pCVar1;
  int iVar2;
  CCSize *pCVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  CCPoint in_r1;
  CCPoint in_r2;
  code *pcVar9;
  int iVar10;
  undefined8 uVar11;
  int local_50;
  int local_4c;
  undefined4 local_28;
  undefined4 local_24;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x68);
  iVar10 = DAT_000d90ec + 0xd8dbe;
  iVar2 = __aeabi_fcmpgt(in_r1,DAT_000d90f0);
  if ((((iVar2 != 0) && (iVar2 = __aeabi_fcmplt(in_r1,DAT_000d90f4), iVar2 != 0)) &&
      (iVar2 = __aeabi_fcmpgt(in_r2,DAT_000d90f8), iVar2 != 0)) &&
     (iVar2 = __aeabi_fcmplt(in_r2,DAT_000d90fc), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_000d9100 + 0xd8dee));
  }
  iVar2 = __aeabi_fcmpgt(in_r1,DAT_000d9104);
  if (((iVar2 == 0) || (iVar2 = __aeabi_fcmplt(in_r1,DAT_000d9108), iVar2 == 0)) ||
     ((iVar2 = __aeabi_fcmpgt(in_r2,DAT_000d90f8), iVar2 == 0 ||
      (iVar2 = __aeabi_fcmplt(in_r2,DAT_000d90fc), iVar2 == 0)))) {
    piVar5 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,5);
    pCVar3 = (CCSize *)(**(code **)(*piVar5 + 0x38))();
    piVar5 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,5);
    (**(code **)(*piVar5 + 0x7c))();
    iVar2 = KG_Touch(in_r1,in_r2,*pCVar3);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_000d910c + 0xd8e74));
    }
    piVar5 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,6);
    pCVar3 = (CCSize *)(**(code **)(*piVar5 + 0x38))();
    piVar5 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,6);
    (**(code **)(*piVar5 + 0x7c))();
    iVar2 = KG_Touch(in_r1,in_r2,*pCVar3);
    if (iVar2 != 0) {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x68);
      KG_removeChild(pCVar1,true);
      **(undefined4 **)(iVar10 + DAT_000d9124) = 3;
      setInventory_Plus((Market_Equip *)param_1,true);
    }
  }
  iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x69);
  if (iVar2 != 0) {
    pcVar9 = *(code **)(*(int *)param_1 + 0xd0);
    uVar4 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x69);
    (*pcVar9)(param_1,uVar4,1);
  }
  iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x68);
  if (iVar2 != 0) {
    uVar11 = __subsf3(*(undefined4 *)(*(int *)(iVar10 + DAT_000d9128) + 4),in_r2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20))
    ;
    local_50 = 0;
    local_4c = 0;
    do {
      iVar10 = 0;
      iVar2 = local_4c;
      do {
        piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x68);
        iVar6 = (**(code **)(*piVar5 + 0x38))();
        uVar4 = *(undefined4 *)(iVar6 + 4);
        uVar7 = __subsf3(local_28,DAT_000d912c);
        uVar8 = __floatsisf(iVar10);
        iVar6 = __aeabi_fcmpgt(uVar7,uVar8);
        if (iVar6 != 0) {
          uVar8 = __floatsisf(iVar10 + 0x25);
          iVar6 = __aeabi_fcmplt(uVar7,uVar8);
          if (iVar6 != 0) {
            uVar7 = __subsf3(local_24,DAT_000d9130);
            __subsf3(DAT_000d9134,uVar4);
            __fixsfsi();
            uVar4 = __floatsisf();
            uVar4 = __addsf3(uVar7,uVar4);
            uVar7 = __floatsisf(local_50);
            iVar6 = __aeabi_fcmpgt(uVar4,uVar7);
            if (iVar6 != 0) {
              uVar7 = __floatsisf(local_50 + 0x25);
              iVar6 = __aeabi_fcmplt(uVar4,uVar7);
              if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
                cocos2d::CCLog((char *)(DAT_000d9138 + 0xd901c),iVar2);
              }
            }
          }
        }
        iVar10 = iVar10 + 0x25;
        iVar2 = iVar2 + 1;
      } while (iVar10 != DAT_000d9140);
      local_4c = local_4c + 7;
      local_50 = local_50 + -0x25;
    } while (local_4c != 0x15);
  }
  return;
}


