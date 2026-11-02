/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011d5e8  Symbol: Makret_CashShop_Item_Buy */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0011d6ea) */
/* WARNING: Removing unreachable block (ram,0x0011d6ea) */
/* New_Notice::Makret_CashShop_Item_Buy() */

void __thiscall New_Notice::Makret_CashShop_Item_Buy(New_Notice *this)

{
  int iVar1;
  int *piVar2;
  CCNode *pCVar3;
  Hero_HeroEquip *this_00;
  Market_Hero *this_01;
  int iVar4;
  char *__format;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  MarketLayer **ppMVar14;
  char acStack_80 [100];
  int local_1c;
  
  iVar13 = DAT_0011d940 + 0x11d5f4;
  piVar7 = *(int **)(iVar13 + DAT_0011d944);
  local_1c = *piVar7;
  iVar4 = *(int *)(this + 0x118);
  piVar12 = *(int **)(iVar13 + DAT_0011d948);
  iVar1 = 1;
  if (iVar4 == 0x12) {
LAB_0011d628:
    iVar1 = KG_get_Inventory_Full(iVar1,iVar4 + 0x97);
    if (iVar1 != 0) {
      memset(acStack_80,0,100);
      iVar1 = 0;
      iVar4 = 1;
      piVar8 = *(int **)(iVar13 + DAT_0011d954);
      piVar2 = piVar8;
      do {
        if (*piVar2 == *(int *)((**(int **)(iVar13 + DAT_0011d94c) + DAT_0011d950) * 4 + *piVar12))
        {
          iVar1 = iVar4;
        }
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 3;
      } while (iVar4 != 0x15);
      iVar4 = piVar8[iVar1 * 3 + 1];
      if (iVar4 == 0) {
        iVar4 = piVar8[iVar1 * 3 + 2];
        __format = (char *)(DAT_0011d958 + 0x11d67e);
        iVar1 = DAT_0011d95c + 0x11d680;
      }
      else {
        __format = (char *)(DAT_0011db04 + 0x11dadc);
        iVar1 = DAT_0011db08 + 0x11dade;
      }
      sprintf(acStack_80,__format,iVar1,iVar4);
      (**(code **)(*(int *)this + 0xd4))(this,1);
      noticeWithType(this,acStack_80,3,1);
      goto LAB_0011dade;
    }
  }
  else {
    if (iVar4 == 7) {
      iVar1 = 0;
      goto LAB_0011d628;
    }
    if (iVar4 == 0x13) {
      iVar1 = 10;
      goto LAB_0011d628;
    }
  }
  iVar4 = *(int *)(this + 0x118);
  iVar1 = *piVar12;
  iVar9 = *(int *)(iVar13 + DAT_0011d960);
  if (iVar4 - 7U < 2) {
    iVar1 = iVar1 + (**(int **)(iVar13 + DAT_0011d94c) + DAT_0011d964) * 4;
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) - *(int *)(iVar9 + (iVar4 + 0x97) * 0x18);
  }
  else {
    *(int *)(iVar1 + DAT_0011d968) =
         *(int *)(iVar1 + DAT_0011d968) - *(int *)(iVar9 + (iVar4 + 0x97) * 0x18);
  }
  switch(*(undefined4 *)(this + 0x118)) {
  case 0:
    iVar9 = *piVar12 + (**(int **)(iVar13 + DAT_0011d94c) + DAT_0011d964) * 4;
    iVar4 = *(int *)(iVar9 + 4);
    iVar1 = DAT_0011d96c;
    goto LAB_0011d7a4;
  case 1:
    iVar9 = *piVar12 + (**(int **)(iVar13 + DAT_0011d94c) + DAT_0011d964) * 4;
    iVar4 = *(int *)(iVar9 + 4);
    iVar1 = DAT_0011d970;
    goto LAB_0011d774;
  case 2:
    iVar9 = *piVar12 + (**(int **)(iVar13 + DAT_0011d94c) + DAT_0011d964) * 4;
    iVar4 = *(int *)(iVar9 + 4);
    iVar1 = DAT_0011d974;
    goto LAB_0011d7d2;
  case 3:
    iVar9 = *piVar12 + (**(int **)(iVar13 + DAT_0011d94c) + DAT_0011d964) * 4;
    iVar4 = *(int *)(iVar9 + 4);
    iVar1 = DAT_0011d978;
LAB_0011d7a4:
    iVar4 = iVar4 + iVar1;
LAB_0011d776:
    *(int *)(iVar9 + 4) = iVar4;
    break;
  case 4:
    iVar9 = *piVar12 + (**(int **)(iVar13 + DAT_0011d94c) + DAT_0011d964) * 4;
    iVar4 = *(int *)(iVar9 + 4);
    iVar1 = DAT_0011d97c;
LAB_0011d774:
    iVar4 = iVar4 + iVar1;
    goto LAB_0011d776;
  case 5:
    iVar9 = *piVar12 + (**(int **)(iVar13 + DAT_0011d94c) + DAT_0011d964) * 4;
    iVar4 = *(int *)(iVar9 + 4);
    iVar1 = DAT_0011d980;
LAB_0011d7d2:
    iVar4 = iVar4 + iVar1;
    goto LAB_0011d776;
  case 7:
    iVar4 = *piVar12;
    iVar5 = **(int **)(iVar13 + DAT_0011d94c) * 2000;
    iVar1 = 0;
    for (iVar6 = 0; iVar6 < *(int *)((**(int **)(iVar13 + DAT_0011d94c) + DAT_0011d950) * 4 + iVar4)
        ; iVar6 = iVar6 + 1) {
      iVar1 = iVar1 + 0x14;
      if (*(int *)(iVar4 + iVar5 + iVar1 + DAT_0011d984) == 0) {
        iVar4 = iVar4 + iVar5 + iVar6 * 0x14;
        puVar11 = (undefined4 *)(iVar4 + DAT_0011d988);
        *puVar11 = *(undefined4 *)(this + 0x11c);
        puVar11[1] = 0;
        uVar10 = *(undefined4 *)(iVar9 + *(int *)(this + 0x11c) * 0x18 + 0x10);
        *(undefined4 *)(iVar4 + DAT_0011d98c + 4) = uVar10;
        *(undefined4 *)(iVar4 + DAT_0011d990) = uVar10;
        break;
      }
    }
    break;
  case 8:
    iVar1 = *piVar12;
    iVar4 = **(int **)(iVar13 + DAT_0011d94c);
    *(undefined *)(iVar1 + iVar4 * 9 + DAT_0011d994) = 1;
    iVar1 = iVar1 + iVar4 * 0x24;
    *(undefined4 *)(iVar1 + DAT_0011d998 + 4) = 10;
    *(undefined4 *)(iVar1 + DAT_0011d99c) = 10;
    pCVar3 = (CCNode *)(**(code **)(*(int *)this + 0x90))(this);
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar3,0xc);
    iVar1 = 8;
    goto LAB_0011d8ea;
  case 9:
    iVar1 = *piVar12;
    iVar4 = **(int **)(iVar13 + DAT_0011d94c);
    *(undefined *)(iVar1 + iVar4 * 9 + DAT_0011d9a0) = 1;
    iVar1 = iVar1 + iVar4 * 0x24;
    *(undefined4 *)(iVar1 + DAT_0011d9a4 + 4) = 10;
    *(undefined4 *)(iVar1 + DAT_0011d9a8) = 10;
    pCVar3 = (CCNode *)(**(code **)(*(int *)this + 0x90))(this);
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar3,0xc);
    iVar1 = 9;
    goto LAB_0011d8ea;
  case 10:
    iVar1 = *piVar12;
    iVar4 = **(int **)(iVar13 + DAT_0011d94c);
    *(undefined *)(iVar1 + iVar4 * 9 + DAT_0011d9ac) = 1;
    iVar1 = iVar1 + iVar4 * 0x24;
    puVar11 = (undefined4 *)(iVar1 + DAT_0011d9b4);
    *(undefined4 *)(iVar1 + DAT_0011d9b0 + 4) = 10;
    *puVar11 = 10;
    pCVar3 = (CCNode *)(**(code **)(*(int *)this + 0x90))(this);
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar3,0xc);
    iVar1 = 10;
LAB_0011d8ea:
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar3,iVar1);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,0);
    (**(code **)(*piVar2 + 0xec))(piVar2,0x7f);
    break;
  case 0x12:
    iVar1 = 10;
    goto LAB_0011d906;
  case 0x13:
    iVar1 = 100;
LAB_0011d906:
    Set_Item_Upgrade_Count(iVar1);
  }
  ppMVar14 = *(MarketLayer ***)(iVar13 + DAT_0011d9b8);
  if (*ppMVar14 != (MarketLayer *)0x0) {
    MarketLayer::reset(*ppMVar14);
  }
  if (**(int **)(iVar13 + DAT_0011d9bc) == 4) {
    piVar12 = (int *)(**(code **)(*(int *)this + 0x90))(this);
    iVar1 = (**(code **)(*piVar12 + 0x90))();
    Market_Store::Item_Buy_Call(*(Market_Store **)(iVar1 + 0x110));
  }
  else if (**(int **)(iVar13 + DAT_0011d9bc) == 2) {
    if (**(int **)(iVar13 + DAT_0011daf0) == 2) {
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppMVar14,0x19);
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar3,0x16);
      this_00 = (Hero_HeroEquip *)cocos2d::CCNode::getChildByTag(pCVar3,4);
      Hero_HeroEquip::Item_Buy_Call2(this_00);
    }
    else {
      iVar1 = *piVar12;
      iVar4 = **(int **)(iVar13 + DAT_0011daf4);
      if ((*(char *)(iVar1 + iVar4 * 9 + DAT_0011daf8) == '\0') || (*(int *)(this + 0x118) != 8)) {
        if ((*(char *)(iVar1 + iVar4 * 9 + DAT_0011dafc) == '\0') || (*(int *)(this + 0x118) != 9))
        {
          if ((*(char *)(iVar1 + iVar4 * 9 + DAT_0011db00) == '\0') ||
             (*(int *)(this + 0x118) != 10)) goto LAB_0011dac6;
          pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppMVar14,0x19);
          piVar12 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,0xf);
          (**(code **)(*piVar12 + 0xf4))();
          this_01 = (Market_Hero *)cocos2d::CCNode::getChildByTag((CCNode *)*ppMVar14,0x19);
          iVar1 = 5;
        }
        else {
          pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppMVar14,0x19);
          piVar12 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,0xe);
          (**(code **)(*piVar12 + 0xf4))();
          this_01 = (Market_Hero *)cocos2d::CCNode::getChildByTag((CCNode *)*ppMVar14,0x19);
          iVar1 = 4;
        }
      }
      else {
        pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppMVar14,0x19);
        piVar12 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,0xc);
        (**(code **)(*piVar12 + 0xf4))();
        this_01 = (Market_Hero *)cocos2d::CCNode::getChildByTag((CCNode *)*ppMVar14,0x19);
        iVar1 = 2;
      }
      Market_Hero::Hero_img_Draw(this_01,iVar1);
    }
  }
LAB_0011dac6:
  cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)this,true);
  FileSave();
LAB_0011dade:
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


