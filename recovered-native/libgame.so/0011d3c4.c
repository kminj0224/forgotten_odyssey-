/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011d3c4  Symbol: Makret_Shop_Item_Buy_Touch */

/* New_Notice::Makret_Shop_Item_Buy_Touch() */

void __thiscall New_Notice::Makret_Shop_Item_Buy_Touch(New_Notice *this)

{
  int iVar1;
  Market_Store *this_00;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  char acStack_80 [100];
  int local_1c;
  
  iVar11 = DAT_0011d59c + 0x11d3d0;
  piVar7 = *(int **)(iVar11 + DAT_0011d5a0);
  local_1c = *piVar7;
  iVar1 = *(int *)(this + 0x11c);
  piVar12 = *(int **)(iVar11 + DAT_0011d5a4);
  if (iVar1 - 0xa9U < 2) {
    iVar3 = 100;
    if (iVar1 == 0xa9) {
      iVar3 = 10;
    }
    iVar1 = Market_CPShop_Item1(this,iVar3);
    if (iVar1 == 0) {
      memset(acStack_80,0,100);
      iVar3 = 1;
      piVar9 = *(int **)(iVar11 + DAT_0011d5b0);
      iVar1 = 0;
      piVar10 = piVar9;
      do {
        if (*piVar10 == *(int *)((**(int **)(iVar11 + DAT_0011d5a8) + DAT_0011d5ac) * 4 + *piVar12))
        {
          iVar1 = iVar3;
        }
        iVar3 = iVar3 + 1;
        piVar10 = piVar10 + 3;
      } while (iVar3 != 0x15);
      iVar11 = piVar9[iVar1 * 3 + 1];
      if (iVar11 == 0) {
        iVar11 = piVar9[iVar1 * 3 + 2];
        pcVar2 = (char *)(DAT_0011d5b4 + 0x11d472);
        iVar1 = DAT_0011d5b8 + 0x11d474;
      }
      else {
        pcVar2 = (char *)(DAT_0011d5e0 + 0x11d586);
        iVar1 = DAT_0011d5e4 + 0x11d588;
      }
      sprintf(acStack_80,pcVar2,iVar1,iVar11);
      (**(code **)(*(int *)this + 0xd4))(this,1);
      pcVar2 = acStack_80;
      iVar1 = 3;
LAB_0011d53c:
      noticeWithType(this,pcVar2,iVar1,1);
      goto LAB_0011d588;
    }
    *(int *)(*piVar12 + DAT_0011d5c0) =
         *(int *)(*piVar12 + DAT_0011d5c0) -
         *(int *)(*(int *)(this + 0x11c) * 0x18 + *(int *)(iVar11 + DAT_0011d5bc));
  }
  else {
    iVar8 = *piVar12;
    iVar13 = **(int **)(iVar11 + DAT_0011d5a8);
    iVar3 = 0;
    for (iVar5 = 0; iVar5 < *(int *)((iVar13 + DAT_0011d5ac) * 4 + iVar8); iVar5 = iVar5 + 1) {
      iVar3 = iVar3 + 0x14;
      if (*(int *)(iVar8 + iVar13 * 2000 + iVar3 + DAT_0011d5c4) == 0) {
        iVar14 = iVar8 + (iVar13 + DAT_0011d5c8) * 4;
        iVar3 = *(int *)(iVar14 + 4);
        iVar11 = *(int *)(iVar11 + DAT_0011d5bc);
        iVar1 = *(int *)(iVar1 * 0x18 + iVar11);
        if (iVar3 < iVar1) {
          (**(code **)(*(int *)this + 0xd4))(this,1);
          iVar1 = 0x14;
          pcVar2 = (char *)(DAT_0011d5d8 + 0x11d53e);
          goto LAB_0011d53c;
        }
        *(int *)(iVar14 + 4) = iVar3 - iVar1;
        iVar8 = iVar8 + iVar5 * 0x14 + iVar13 * 2000;
        puVar6 = (undefined4 *)(iVar8 + DAT_0011d5cc);
        *puVar6 = *(undefined4 *)(this + 0x11c);
        puVar6[1] = 0;
        iVar1 = DAT_0011d5d4;
        iVar11 = iVar11 + *(int *)(this + 0x11c) * 0x18;
        if (*(int *)(this + 0x11c) < 0x51) {
          uVar4 = *(undefined4 *)(iVar11 + 0xc);
          *(undefined4 *)(iVar8 + DAT_0011d5d0 + 4) = uVar4;
          iVar1 = DAT_0011d5d4;
        }
        else {
          uVar4 = *(undefined4 *)(iVar11 + 0x10);
          *(undefined4 *)(iVar8 + DAT_0011d5d0 + 4) = uVar4;
        }
        *(undefined4 *)(iVar8 + iVar1) = uVar4;
        break;
      }
    }
  }
  this_00 = (Market_Store *)(**(code **)(*(int *)this + 0x90))(this);
  Market_Store::Item_Buy_Call(this_00);
  cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)this,true);
  if (*(char *)(*piVar12 + 1) != '\0') {
    pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_0011d5dc + 'v'));
  }
  FileSave();
LAB_0011d588:
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


